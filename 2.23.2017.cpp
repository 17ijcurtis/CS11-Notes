/*
// Three times the copy constructor is called
// Pass by value
// initialization
// returning by value
f(item1); // item1 is the argument

// InventoryItem item1 is the parameter
void f(InventoryItem item1) {

}


// [] operator
char& operator[](int index) {
	assert(index >= 0 && index < strlen(description));
	return description[index];
}

const InventoryItem item4("chair")
cout << item4[1];
item4[1] = 'z';
cout << item4[1];

// No error will be thrown
// need to add the following overloader

char operator[](int index) const {
	assert(index >= 0 && index < strlen(description));
	return description[index];
}

// based on the signature of the function the compiler will know which function to call

// once we have added this code, it will create a compiler error


istream& operator>>(istream& in, InventoryItem& readMe) {
	// we need to ignore all initial white space
	while (isspace(in.peek())) {
		in.ignore();
	}

	in.getline(target.description, 127, ':');
}
*/