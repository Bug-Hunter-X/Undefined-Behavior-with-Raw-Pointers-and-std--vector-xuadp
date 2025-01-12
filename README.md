# C++ Undefined Behavior with Raw Pointers and std::vector

This example demonstrates the dangers of accessing elements outside the bounds of a `std::vector` using a raw pointer.  Accessing memory outside of the allocated vector space leads to undefined behavior, resulting in unpredictable program crashes or data corruption.

**The Bug:**
The code attempts to write to an element beyond the valid range of a `std::vector`. This violates memory safety rules, resulting in undefined behavior.

**The Solution:**
The solution uses bounds checking to ensure that all accesses are within the valid range of the `std::vector`.  Alternatively, using iterators instead of raw pointers reduces this kind of error.