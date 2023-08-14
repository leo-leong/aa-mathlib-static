// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include <utility>
#include <limits.h>
#include "MathLibrary.h"

namespace MathLibrary
{
    static unsigned long long previous_;  // Previous value, if any
    static unsigned long long current_;   // Current sequence value
    static unsigned index_;               // Current seq. position

    void Fibonacci::Init(const unsigned long long a, const unsigned long long b)
    {
        index_ = 0;
        current_ = a;
        previous_ = b; // see special case when initialized
    }

    bool Fibonacci::Next()
    {
        // check to see if we'd overflow result or position
        if ((ULLONG_MAX - previous_ < current_) ||
            (UINT_MAX == index_))
        {
            return false;
        }

        // Special case when index == 0, just return b value
        if (index_ > 0)
        {
            // otherwise, calculate next sequence value
            previous_ += current_;
        }
        std::swap(current_, previous_);
        ++index_;
        return true;
    }

    unsigned long long Fibonacci::Current()
    {
        return current_;
    }

    unsigned Fibonacci::Index()
    {
        return index_;
    }
}