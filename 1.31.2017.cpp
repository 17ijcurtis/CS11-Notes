/*
#include <iostream>
#include <cctype>
using namespace std;

#pragma warning(disable:4996)

int main() {
	// strlen();  gives the length of a c string
	// to concatenate strings
	const int SIZE = 13; // an extra character for the null character
	char string1[SIZE] = "Hello ";
	char string2[] = "World!";
	strcat(string1, string2); // dont treat like a value returning function, string1 is updated
	// however, it does return string1


	// strncat, strncpy
	// allow a third argument to tell how many characters to append to the c string
	// strncat(string1, string2, 10); // 10 is the maximum amount of characters that can be appended

	// strstr
	// searches for a string within a string
	// strstr(string1, "target"); // searches within string1 for target

	// int strcmp(char* string1, char* string2)
	if (strcmp(string1, string2) < 0) {
		cout << "string1 comes before string2" << endl;
	} else {
		cout << "string1 does not come before string2" << endl;
	}

	// !strcmp(string1, string2); // returns true if equal because zero is false in c++

	// atoi // cstring to int
	int num = atoi("4569");
	// atol // cstring to long
	// atof // cstring to double

	// to_string
	int number = 10;
	// string mystring = to_string(number);


	


	cin.get();

	return 0;
}

void tempFunction() {
	// given two c strings
	char string1[] = "Hello ";
	char string2[] = "World!";

	char* temp = new char[strlen(string1) + strlen(string2) + 1];
	strcpy(temp, string1); // copy in the first string so that temp is a c string
	strcat(temp, string2); // add c string 2
	string1 = temp; // lvalue is something that can be put on the left side but it is not modifiable
	// arrays are non modifiable pointers
	cout << string1; // The insertion operator sees that string1 is a cstring and it doesnt 
	// cout the address but rather the c string itself

}
*/