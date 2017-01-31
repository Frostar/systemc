/*
 * top.cpp
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */
#include "top.h"

void Top::start_of_simulation()
{
    sc_trace(file_handler, a, "a");
    sc_trace(file_handler, b, "b");
    sc_trace(file_handler, c, "c");
    sc_trace(file_handler, f, "f");
    sc_trace(file_handler, testclk, "testclk");
}

void Top::end_of_simulation()
{
    sc_close_vcd_trace_file(file_handler);
}

