/*
 * mac.h
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */

#ifndef SRC_MAC_H_
#define SRC_MAC_H_

#include "systemc.h"

SC_MODULE(MAC)
{
    // Signals
    sc_in <int> a, b, c;
    sc_out <int> f;

    sc_signal <int> p;


    // Methods
    void multiply();
    void addition();


    // Constructor
    SC_CTOR(MAC)
    {
        SC_METHOD(multiply);
        sensitive << a << b;

        SC_METHOD(addition);
        sensitive << c << p;
    }
};


#endif /* SRC_MAC_H_ */
