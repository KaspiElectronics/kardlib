void setup() {
  Serial.begin(9600);
  setup_srf05(12,13);
}

void loop()
{
  loop_srf05();
  Serial.println(dis_cm()); 
  delay(1000);
}
