/*
// Inheritance is when we make a new class known as a derived class
// Derived from base class
// automatically inherits members from base class

istream;
ifstream;

// ifstream is specifically for input files
// istream is for any input stream whether its a file or not


// cin is an object of type istream
// .get(), .getline(), .ignore(), .peek(), .putback()

// you cant however, use .open(), or .close()

// istream is the base class
// ifstream is the derived class


class employee {
private:
	// data members
public:
	// member functions
};


class hourlyEmployee : public employee {
private:
	// additional data members
public:
	// additional member functions
};


// Base class contructor gets called and then the derived class constructor is called when a derived class object is made


// derived constructor

hourlyEmployee::hourlyEmployee(const string& newName, const string& newSsn, double newPayRate, double newHours) 
	// initializer list
	: employee(newName, newSsn),
	// we can initialize data members here
	parRate(newPayRate)

{

}
// Review initializer list

// the derived class constructor should not be initializing the base class data members

// never use protected

// 3 things for oop
// encapsulation
//			implemented with the word private.  Data is protected in class objects
// inheritance
// polymorphism
//			many names for the same function. 

// overloading
// redefining
// overriding

// virtual means use late binding instead of early binding
*/