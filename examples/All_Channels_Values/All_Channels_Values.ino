#include <MUX4067.h>

mux4067 mux(14, 12, 13, 15, A0);

int values_arr[16];

void setup(){
  Serial.begin(115200);
}

void loop(){
  for (int i=0; i<16; i++){
    values_arr[i] = int(mux.all_channels_value()[i]);
    Serial.print("Channel "); Serial.print(i); Serial.print(": "); Serial.println(values_arr[i]);
    delay(500);
  }
}