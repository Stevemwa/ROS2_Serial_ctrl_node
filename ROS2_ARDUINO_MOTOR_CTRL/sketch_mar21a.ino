#define ENCODER_A_RIGHT 2
#define ENCODER_B_RIGHT 3
#define ENA_RIGHT 10
#define IN1_RIGHT_FW 11
#define IN2_RIGHT_RV 12

//PID
int Motor_Speed=10;
int Expected_speed=30;
float Error=0;
float Prev_Error;
float Kp=0.5;
float Ki=0.02;
float Kd=0.2;
float sum=0;

//motor control
int a=1;
int input = 0;  // Variable to store serial input
volatile long INT_RF = 0;
volatile long INT_RB = 0;
int Dir_R = 0;
double RPM_RIGHT = 0;
unsigned long Previous_Time, Current_Time = 0;  // Use unsigned long for time variables



void setup() {
  Serial.begin(9600);
  Init_Motors();
  Previous_Time = millis();
}

void loop() {
  get_speed_RIGHT();
  
  Serial.print("Expects:");
  Serial.print(Expected_speed);
  Serial.print(" Gets:");
  Serial.print(RPM_RIGHT);
  Serial.print("RPM ");
  Serial.print(INT_RB);
  Serial.print(" A_COUNTS ");
  Serial.print(INT_RF);
  Serial.println(" A_COUNTS");

if (Serial.available()) {
   
    input = Serial.parseInt();
    Expected_speed=input;
    Serial.println(Expected_speed);
    
    
  }

 PID();
}
