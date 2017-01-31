/*
 * stimulus.h
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */

#ifndef SRC_STIMULUS_H_
#define SRC_STIMULUS_H_

#include "systemc.h"

SC_MODULE(Stimulus)
{
    // Signals
    sc_in <bool> clk;
    sc_out <int> a, b, c;

    // Method
    void generate();

    // Constructor
    SC_CTOR(Stimulus)
    {
        SC_THREAD(generate);
        sensitive << clk.neg();
    }

};



#endif /* SRC_STIMULUS_H_ */
