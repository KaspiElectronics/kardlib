int trig_pin,echo_pin;
long duration, distanceCm, distanceIn;

void setup_srf05(int trig,int echo){
    trig_pin = trig;
    echo_pin = echo_pin;
    pinMode(trig_pin,OUTPUT);
    pinMode(echo_pin,INPUT);
}

void cleanpulse_srf05(){
    // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
    digitalWrite(trig_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);
    duration = pulseIn(echo_pin,HIGH);
}

long dis_inch(){
    return distanceIn;
}

long dis_cm(){
    return distanceCm;
}

void loop_srf05(){
    cleanpulse_srf05();
    distanceCm = duration / 29.1 / 2 ;
    distanceIn = duration / 74 / 2;
}