# Array Data Structure
An array in **C** is a fundamental data structure that allows you to store multiple values of the same data type under a single name. It provides a way to organize related data efficiently. Here are the key points about arrays in C:

## 1. Definition:
* An array is a fixed-size collection of similar data items (elements) stored in contiguous memory locations.
* It can hold primitive data types (such as ```int```, ```char```, ```float```, etc.) as well as user-defined data types (like pointers or structures).

## 2. Declaration:
* Before using an array, you need to declare it like any other variable.
* The declaration specifies the array’s name, the type of its elements, and the size of its dimensions (if multidimensional).

### Syntax for array declaration:
```c++
data_type array_name[size];
```
or for multidimentional array:
```c++
data_type array_name[size1][size2]...[sizeN];
```
## 3. Initialization:
* When an array is declared or memory is allocated, its elements initially contain garbage values.
* You should initialize the array to meaningful values before using it.
* There are several ways to initialize an array:
  * With Declaration and Initialization:
    ```c++
    data_type array_name[size] = {value1, value2, ... valueN};
    ```
  * Without Declaring Size (Compiler Deduces Size):
    ```c++
    data_type array_name[] = {1, 2, 3, 4, 5}; // Compiler deduces size as 5
    ```
  * After Declaration (Using Loops):
    ```c++
    for (int i = 0; i < N; i++) {
    array_name[i] = value_i;
    }
    ```
## 4. Accessing Elements:
* Array elements are accessed using their indices (starting from 0).
* For example, ```array_name[0]``` refers to the first element, ```array_name[1]``` to the second, and so on.

## 5. Examples:
Here are some examples of array declarations and initializations:
```c++
int arr[5]; // Declaration of an integer array with 5 elements
char arr_char[5]; // Declaration of a character array with 5 elements

int arr1[5] = {10, 20, 30, 40, 50}; // Initialization with declaration
int arr2[] = {1, 2, 3, 4, 5}; // Compiler deduces size
float arr3[5];
for (int i = 0; i < 5; i++) {
    arr3[i] = (float)i * 2.1;
}
```
The above examples demonstrate different ways to declare, initialize, and use arrays in C.




