#include <IRremote.h>
IRsend irsend;

void setup()
{
Serial.begin(9600);
}

void loop() {
  
  if (Serial.read() != -1) {
    
    // Power TV
    for (int i = 0; i < 3; i++) {
        //irsend.sendNEC(0x0000000020DF10EF, 32); // Power LG
        irsend.sendNEC(0x0000000002FD48B7, 32);
        delay(100);
    }

    // Sleep
    delay(1000);

    // Power digibox
    for (int i = 0; i < 3; i++) {
        irsend.sendNEC(0x00000000000050AF, 32); // Power Miraclebox
        delay(100);
    }

    // Pause
    //delay(1000);
    //for (int i = 0; i < 3; i++) {
    //    //irsend.sendNEC(0x0000000020DFC639, 32); //Send IN-Start
    //    delay(100);
    //}
    //
    //// Energy Saver
    //delay(1000);
    //for (int i = 0; i < 1; i++) {
    //    irsend.sendNEC(0x0000000020DFA956, 32); //Send IN-Start
    //    delay(100);
    //}
    //
    //// Left once
    //delay(100);
    //    irsend.sendNEC(0x0000000020DFE01F, 32); //Send IN-Start
    //delay(100);
    //    irsend.sendNEC(0x0000000020DF02FD, 32); //Send IN-Start
    //delay(100);
    //    irsend.sendNEC(0x0000000020DF02FD, 32); //Send IN-Start
    //delay(100);
    //    irsend.sendNEC(0x0000000020DF02FD, 32); //Send IN-Start
    //delay(100);
    //    irsend.sendNEC(0x0000000020DF02FD, 32); //Send IN-Start
    //
    //delay(100);
    //    irsend.sendNEC(0x0000000020DF22DD, 32); //Send IN-Start
    //
    //delay(100);
    //// Play
    //for (int i = 0; i < 3; i++) {
    //    irsend.sendNEC(0x0000000020DFC639, 32); //Send IN-Start
    //    delay(100);
    //}
    
  }
}
