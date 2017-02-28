/*
#include <iostream>
#include <string>
using namespace std;

int main2() {
	string name;
	cout << "What is your name? ";
	getline(cin, name);

	string name2("William Smith");

	string name3(name);

	string name4(name2, 4);  // gets first four characters

	string lotsOfZs('z', 10);	// fills the string with 10 zs

	// string member functions
	name.length(); // returns length
	// lots of others that are worth looking up



	return 0;
}

// STRUCTS
// syntax is exactly the same as classes

struct myType {
	int year;
	int month;
	int day;
};
// Technical difference between struct and class: in a class if you dont put the word private or public
// the default is that everything is private. in a struct everything is public by default.


class feetInches {
public: 
	// If this function is called and these two arguments given
	// then they get these two values by default
	// If only one argument is provided then the other parameter gets the default value
	feetInches(int inFeet = 0, int inInches = 0);
	feetInches addedTo(const feetInches &other) const;
	void print() const; // we want to overload cout to use the insertion operator
private:
	int feet;
	int inches;
};

feetInches::feetInches(int inFeet, int inInches) {
	feet = inFeet;
	inches = inInches;
}

// why const and passing by reference?
// we dont want to pass by value because that makes a copy of the object
// this is better practice
// primitive types you can pass by value
// const at end of the function means the calling object cannot be changed
feetInches feetInches::addedTo(const feetInches &other) const {
	return feetInches(feet + other.feet, inches + other.inches);
}

void feetInches::print() const {
	cout << feet << " feet, " << inches << " inches";
}

int main() {
	// Operator overloading
	// using operators on classes you created
	return 0;
}
*/