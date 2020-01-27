//
// Created by jasmin on 26/01/2020.
//

#ifndef CARTE_SERVO_ORDERS_H
#define CARTE_SERVO_ORDERS_H
#include "PinMapping.h"
#include "Arduino.h"
#include <Servo.h>

class Orders {
    BufferData* Valve(BufferData& args);
    BufferData* Suck(BufferData& args);

#if defined(main)
    BufferData* Gate(BufferData& args);
    registerRPC(Gate,3);
#endif

    registerRPC(Valve,1);
    registerRPC(Suck,2);

};


#endif //CARTE_SERVO_ORDERS_H
