// MathLibrary.h - Contains declarations of math functions
#pragma once


// The Fibonacci recurrence relation describes a sequence F
// where F(n) is { n = 0, a
//               { n = 1, b
//               { n > 1, F(n-2) + F(n-1)
// for some initial integral values a and b.
// If the sequence is initialized F(0) = 1, F(1) = 1,
// then this relation produces the well-known Fibonacci
// sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

namespace MathLibrary
{
	class Fibonacci
	{
	public:
		// Initialize a Fibonacci relation sequence
		// such that F(0) = a, F(1) = b.
		// This function must be called before any other function.
		static void Init(
			const unsigned long long a, const unsigned long long b);

		// Produce the next value in the sequence.
		// Returns true on success and updates current value and index;
		// false on overflow, leaves current value and index unchanged.
		static bool Next();

		// Get the current value in the sequence.
		static unsigned long long Current();

		// Get the position of the current value in the sequence.
		static unsigned Index();
	};

}
