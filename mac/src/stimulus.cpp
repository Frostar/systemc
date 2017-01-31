/*
 * stimulus.cpp
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */
#include "stimulus.h"


void Stimulus::generate()
{
    wait();
    a = 100; b = 200; c = 4;
    wait();

    a = 100; b = 200; c = -4;
    wait();

    a = -100; b = -200; c = 4;
    wait();

    a = -100; b = -200; c = -4;
    wait();

    a = -100; b = -200; c = 4;
    wait();

    a = -100; b = -200; c = -4;
    wait();

    sc_stop();
}

