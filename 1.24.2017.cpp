/*

#include <iostream>
#include <string>

using namespace std;

// Function prototype;
void init(int* x);

int main2() {
// an array name is actually a pointer constant

int array[10];
int* ptr;

ptr = array;
// we cannot say array = ptr; because an array is a pointer constant, it can do anything a pointer
// can do except change its memory address

init(ptr); // You could alternatively call init(array) and it would have the same effect
for (int i = 0; i < 10; i++) {
cout << array[i] << " ";
}
cout << endl;

// Dynamic Memory
// We have talked about automatic variable and static variables
// automatic variable are variable declared in functions.  Function automatically takes care of allocating memory for it
// it also deallocated memory for it.
// Dynamic memory is when the programmer must allocate and deallocate the memory manually
// Automatic variables are allocated in the stack, very clean and organized
// Dynamic variable are not put in the stack, it is put in an area that is very unorganized, called the heap

int* intptr;
intptr = new int;

int arraySize;
string* stringArray;
cout << "How big should the array be? ";
cin >> arraySize;
cin.get();

// the arraySize must be 3 or more or else to following lines will not work
stringArray = new string[arraySize];
stringArray[2] = "tuesday";
cout << stringArray[2] << endl;

// new is technically an operator, it is a unary operator and only requires one operand, which is a type
// new int means "go the the heap and allocate memory for one int"

*intptr = 7;
cout << *intptr << endl;

// Deallocating memory
// this just puts the memory address of the variable up for grabs
delete intptr;

// To deallocate an array
delete[] stringArray;

// Every time you call new you need to figure out when to call delete
// Always delete the pointer before allocating a new memory address in the heap
// A memory leak is when you say the pointer gets a new int before deleting it and there is a left over allocated
// memory address that can no longer be accessed

return 0;
}

int main() {
int* ptr1 = new int;
int* ptr2 = new int;

*ptr2 = 44;
*ptr1 = *ptr2;

delete ptr1;
ptr1 = ptr2; // boom memory leak
// The address that ptr1 had once pointed to is not no longer able to be accessed

return 0;
}

// You could alternatively use the parameter: int x[], and it would have the same effect
void init(int* x) {
for (int i = 0; i < 10; i++) {
x[i] = i;
}
}
*/