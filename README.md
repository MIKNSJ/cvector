# cvector

## Overview
```cvector``` is the implementation of the ```vector``` library from C++ in C. This aims to provide more features than the standard array. Specific details about the C++ vector are referred [here](https://cplusplus.com/reference/vector/vector/).

Please NOTE: The vector library is designed around ```int``` values. Other types of data must require the user to change all instances of ```<int> --> <new_data_type>```. This means that there is a chance that the library may not work as intended for the new data type.

## Contents
This section goes over files/folder in the repository.

First, nagivate over to ```dir=src```.
-   ```Makefile```: used to compile the files.
-   ```cvector.c```: implementation of cvector.
-   ```cvector.h```: outline of cvector.
-   ```test.c```: tests the cvector file.

## Setup
In this section, we are assuming that the user has some knowledge of C/C++ and has setup a working environment.

1.  Download ```cvector.h``` and ```cvector.c``` files.
2.  Place the files into your working directory.
3.  Enable cvector features by writing ```#include "cvector.h"``` or the **path of that file** at the top of your ```.c``` file.

You can now use features of ```cvector```!

## Functions
-   ```cvector```: creates a vector structure with user-defined size and capacity.
-   ```print_vector```: prints out the items in the vector.
-   ```size```: returns the size of the vector.
-   ```capacity```: returns the capacity of the vector.
-   ```reserve```: requests that the vector capacity be at least enough to contain n elements.
-   ```empty```: checks if the vector is empty.
-   ```clear```: clears out the entire vector.
-   ```push_back```: adds an item to the end of the list.
-   ```push_front```: adds an item to the beginning of the list.
-   ```pop_back```: deletes an item from the end of the list.
-   ```pop_front```: deletes an item from the beginning of the list.
-   ```insert```: inserts an item at the specified index.
-   ```erase```: deletes an item at the specified index.
-   ```swap```: swaps two vectors together.
-   ```at```: returns the element at idx of vector.

<br>

**A value that is ```>=1000000``` indicates a memory address without a valid value at ```vector[i]``` (form of NULL). Therefore, values that are greater than the specified threshold above should not be used as valid values in a vector. This prevents the size of vector to be incorrectly modified after deletion of a NULL value**.

*```reserve```: only increases the vector capacity to a larger amount than it currently is, but not smaller.*

*```insert```: does not add after the last element. Rather, the user must call push_back instead.*

*```push``` and ```pop``` functions will also consider entries which only memory addresses.*

*```insert``` and ```delete``` functions can remove addresses where no such valid value exists,so relocation of other items in the vector still occurs.*

*There is currently no function to decrease capacity yet.*

## Limitations
This section addresses some features that are not developed yet.
- 2D vector support
- Other data types support
- Other vector functions support
- Memory deallocation
- NULL values (just memory addresses and no valid values) identifier
- Max size limit
- Static/fixed arrays

## Tools
This section goes over the tools used for this library.

- gcc 13.2.0 by MSYS2.