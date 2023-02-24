#include <SimpleFOC.h>

MagneticSensorI2C sensor = MagneticSensorI2C(AS5600_I2C);
TwoWire I2Cone = TwoWire(0);
BLDCMotor motor = BLDCMotor(7);
BLDCDriver3PWM driver = BLDCDriver3PWM(32,33,25,22);

float target_angle = 0;
Commander command = Commander(Serial);
void doTarget(char* cmd){ command.scalar(&target_angle,cmd); };
void onMotor(char* cmd){ command.motor(&motor, cmd); }

void setup() {

  I2Cone.begin(19,18, 400000UL); 
  sensor.init(&I2Cone);
  motor.linkSensor(&sensor);

  driver.voltage_power_supply = 8;
  driver.init();
  motor.linkDriver(&driver);

  motor.foc_modulation = FOCModulationType::SpaceVectorPWM;

  motor.controller = MotionControlType::torque;

  // contoller configuration based on the controll type 
  motor.PID_velocity.P = 0.2;
  motor.PID_velocity.I = 10;
  motor.PID_velocity.D = 0;
  motor.P_angle.P = 0.5;
  // default voltage_power_supply
  motor.voltage_limit = 8;
  motor.velocity_limit = 20;
  
  // velocity low pass filtering time constant
  motor.LPF_velocity.Tf = 0.01;

  // angle loop controller
  motor.P_angle.P = 20;
  // angle loop velocity limit
  motor.velocity_limit = 20;

  Serial.begin(115200);
  // comment out if not needed
  motor.useMonitoring(Serial);

    // initialise motor
  motor.init();
  // align encoder and start FOC
  motor.initFOC(); 

  command.add('T', doTarget, "target angle");
  command.add('M', onMotor, "my motor");

  Serial.println(F("Motor ready."));
  Serial.println(F("Set the target angle using serial terminal:"));

  _delay(1000);
}



void loop() {
  motor.loopFOC();
  motor.move(target_angle);
  motor.monitor();
  command.run();
}