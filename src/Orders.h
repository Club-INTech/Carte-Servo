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
    BufferData* LiftUp(BufferData& args);
    BufferData* LiftDown(BufferData& args);
    BufferData* Gate(BufferData& args);
    BufferData* GateClose(BufferData& args);
    BufferData* FlagUp(BufferData& args);
    BufferData* FlagDown(BufferData& args);

    registerRPC(Valve,1);
    registerRPC(Suck,2);
    registerRPC(LiftUp,3);
    registerRPC(LiftDown,4);
    registerRPC(Gate,5);
    registerRPC(FlagUp,7);
    registerRPC(FlagDown,8);
};


#endif //CARTE_SERVO_ORDERS_H
