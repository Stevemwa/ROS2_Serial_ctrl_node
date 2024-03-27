void readEncoder_RightA() {
  INT_RF++; // Increment encoder count
}
void readEncoder_RightB(){
  INT_RB++; 
}
void get_speed_RIGHT() {
  Current_Time = millis();
  if ((Current_Time - Previous_Time) >= 500) {
    // Calculate RPM based on encoder counts
    
    if(INT_RB>=INT_RF){a=-1;}
    int RPM_RIGHTA = (INT_RF / 464.0) * 60.0 *2.0;
    int RPM_RIGHTB = (INT_RB / 464.0) * 60.0 *2.0;
    RPM_RIGHT=((RPM_RIGHTA +RPM_RIGHTA )/2);
    // Reset encoder counts and update previous time
    INT_RF = 0;
    INT_RB = 0;
    Previous_Time = Current_Time;
  }
}
