# Dangling Pointer and Memory Corruption in C++

This repository demonstrates a common C++ error: attempting to delete a pointer to a stack variable. This leads to undefined behavior and potential memory corruption.

## The Bug

The `bug.cpp` file contains the erroneous code.  The pointer `ptr` points to a stack variable (`a`). Deleting this pointer is incorrect and may cause program crashes or unpredictable results. Stack allocated memory is automatically managed by the compiler and shouldn't be manually deallocated.

## The Solution

The `bugSolution.cpp` file provides a corrected version. The solution is to avoid deleting `ptr` altogether because it doesn't point to dynamically allocated memory. If you need dynamic memory allocation, use `new` and `delete` appropriately.