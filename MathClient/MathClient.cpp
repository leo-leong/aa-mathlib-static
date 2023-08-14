// MathClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MathLibrary.h"

int main()
{
    // Initialize a Fibonacci relation sequence.
    MathLibrary::Fibonacci::Init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << MathLibrary::Fibonacci::Index() << ": "
            << MathLibrary::Fibonacci::Current() << std::endl;
    } while (MathLibrary::Fibonacci::Next());
    // Report count of values written before overflow.
    std::cout << MathLibrary::Fibonacci::Index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;
}
