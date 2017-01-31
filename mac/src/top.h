/*
 * top.h
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */

#ifndef SRC_TOP_H_
#define SRC_TOP_H_

#include "systemc.h"

#include "mac.h"
#include "stimulus.h"
#include "monitor.h"

SC_MODULE(Top)
{
    // Signals
    sc_signal <int> a, b, c, f;
    sc_clock testclk;
    sc_trace_file *file_handler;

    // Instances
    Stimulus stim;
    MAC dut;
    Monitor mon;

    // Methods
    void start_of_simulation();
    void end_of_simulation();

    SC_CTOR(Top): testclk("testclk"), stim("stim"), dut("dut"), mon("mon")
    {
        stim.a(a);
        stim.b(b);
        stim.c(c);
        stim.clk(testclk);

        dut.a(a);
        dut.b(b);
        dut.c(c);
        dut.f(f);

        mon.a(a);
        mon.b(b);
        mon.c(c);
        mon.f(f);
        mon.clk(testclk);

        file_handler = sc_create_vcd_trace_file("mac_wave");
    }
};


#endif /* SRC_TOP_H_ */
