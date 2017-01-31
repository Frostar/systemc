/*
 * monitor.cpp
 *
 *  Created on: Jan 31, 2017
 *      Author: jfl
 */

#include "monitor.h"

void Monitor::watch()
{
    while(1)
    {
        wait();
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;
        std::cout << "f = " << f << std::endl;

        int expect = (a * b) + c;
        sc_assert(expect == f);
    }
}
