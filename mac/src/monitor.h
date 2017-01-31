/*
 * monitor.h
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */

#ifndef SRC_MONITOR_H_
#define SRC_MONITOR_H_

#include "systemc.h"

SC_MODULE(Monitor)
{
    // Signals
    sc_in <bool> clk;
    sc_in <int> a, b, c;
    sc_in <int> f;

    // Methods
    void watch();

    SC_CTOR(Monitor)
    {
        SC_THREAD(watch);
        sensitive << clk;
    }
};



#endif /* SRC_MONITOR_H_ */
