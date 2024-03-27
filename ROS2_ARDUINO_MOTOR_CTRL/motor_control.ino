
void Init_Motors() {
  pinMode(ENA_RIGHT, OUTPUT);
  pinMode(IN1_RIGHT_FW, OUTPUT);
  pinMode(IN2_RIGHT_RV, OUTPUT);

  pinMode(ENCODER_A_RIGHT, INPUT_PULLUP);
  pinMode(ENCODER_B_RIGHT, INPUT_PULLUP);

 
  attachInterrupt(digitalPinToInterrupt(ENCODER_A_RIGHT), readEncoder_RightA, RISING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_B_RIGHT), readEncoder_RightB, RISING);
}

void Run_motor_Right(int pwm) {
  if (pwm >= 255) { pwm = 255; }
  if (pwm <= -255) { pwm = -255; }

  // Determine motor direction
  if (pwm > 0) {
    digitalWrite(IN1_RIGHT_FW, HIGH); // Set IN1 to HIGH for forward
    digitalWrite(IN2_RIGHT_RV, LOW);
  } else if (pwm < 0) {
    digitalWrite(IN1_RIGHT_FW, LOW);
    digitalWrite(IN2_RIGHT_RV, HIGH);
  } else {
    digitalWrite(IN1_RIGHT_FW, LOW);
    digitalWrite(IN2_RIGHT_RV, LOW);
  }

  // Ensure PWM value is positive for analogWrite
  int Absolute_pwm = abs(pwm);
  analogWrite(ENA_RIGHT, Absolute_pwm);
}
