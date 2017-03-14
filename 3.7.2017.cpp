/*#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int> v;

	vector<int>::size_type currentSize = 0;

	for (int i = 0; i < 100; i++) {
		v.push_back(i);
		currentSize = v.size();
		cout << currentSize << v.capacity();
	}
	
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i;
	}

	// v.end() is the iterator to one past the last item in the container
	// look up iterators
	// we can use the iterator to change the contents of the vector
	// if we dont want our iterator to change the contents of the vector
	// then we use const_iterator

	cin.get();

	return 0;
}

/*
for each stl object counter
1. declare
2. initialize
3. compare
4. advance
5. access
*/

/*
vector functions:
size()
capacity()
operator[]
at()
*/


/*
STL (Standard Template Library)
templates
iterators
exception handling
*/