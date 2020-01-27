//
// Created by jasmin on 26/01/2020.
//

#ifndef CARTE_SERVO_ORDERS_H
#define CARTE_SERVO_ORDERS_H
#include "PinMapping.h"
#include "Arduino.h"
#include "I2CC.h"
#include <Servo.h>

using namespace I2CC;

BufferedData* Valve(BufferedData& args);
BufferedData* Suck(BufferedData& args);

#if defined(main)
BufferedData* Gate(BufferedData& args);
#endif


#endif //CARTE_SERVO_ORDERS_H
