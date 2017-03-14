#include <iostream>
using namespace std;

class feetInches {
public:
	feetInches(int inFeet = 0, int inInches = 0);

	feetInches operator+(const feetInches &other) const;
	feetInches operator+(int other) const;



	feetInches operator++(); // preincrement overloading
	feetInches operator++(int); // int is not a parameter, just a magic syntax to indicate post increment
	void print() const; // we want to overload cout to use the insertion operator

						// when you see this global function, let this function have access to private data members
	friend ostream& operator<<(ostream& out, const feetInches& printMe);
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
//feetInches feetInches::addedTo(const feetInches &other) const {
//return feetInches(feet + other.feet, inches + other.inches);
//}

feetInches feetInches::operator+(const feetInches &other) const {
	return feetInches(feet + other.feet, inches + other.inches);
}

feetInches feetInches::operator++() {
	feet++;
	return *this;
}

feetInches feetInches::operator++(int) {
	feetInches result = *this;
	this->feet++;
	return result;
}

void feetInches::print() const {
	cout << feet << " feet, " << inches << " inches";
}

// Global operator+ function
//feetInches operator+(const feetInches &left, const feetInches &right) {
//return left.addedTo(right);
//}

ostream& operator<<(ostream& out, const feetInches& printMe) {
	out << printMe.feet << " feet, " << printMe.inches << " inches";
}
