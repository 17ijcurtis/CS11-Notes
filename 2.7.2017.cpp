/*#include <iostream>
using namespace std;

class feetInches {
public:
	// If this function is called and these two arguments given
	// then they get these two values by default
	// If only one argument is provided then the other parameter gets the default value
	feetInches(int inFeet = 0, int inInches = 0);
	//feetInches addedTo(const feetInches &other) const;
	feetInches operator+(const feetInches &other) const;
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


int main() {
	feetInches f1, f2(3), f3(4, 7);

	//f1 = f2.addedTo(f3);

	f2.print();
	// etc

	// It would be alot more convinient if we could do
	//f1 = f2 + f3;
	// When compiler sees this, it will translate it into this
	//f1 = operator+(f2, f3);

	// Now that we have implemented the operator+ function, we can say
	f1 = f2 + f3;

	// We should normally make the operator+ function a member function
	// when it is a member function it gets translated as follows
	//f1 = f2.operator+(f3);

	// In conclusion when globally defining the operator+ function we need two arguments
	// when the operator+ function is a member function, it only uses one argument


	// Now let us overload the pre increment operator
	
	// What would happen if I globally override an operator function of a primitive type

	// overloading cout
	// because cout is the left operand and not feetInches
	// the overloading function cannot be a member function, it must be global

	return 0;
}

*/