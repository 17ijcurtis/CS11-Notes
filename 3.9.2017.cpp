/*

// Templates

// Template function
// Any type T array can be passed as list
template <class T> int indexOfSmallest(const T list[], int startingIndex, int numItems);

// It becomes more interesting when we can declare a template class
class MyVector {
public:
	typedef std::size_t size_type;
	typedef int value_type;
	MyVector(size_type inSize = 0, const value_type& inValue = value_type());
	size_type size() const;
	size_type capacity() const;
	value_type at(size_type i) const;
	void push_back(const value_type& insertMe);
private:
	value_type* items;
	size_type mSize;
	size_type mCapacity;
};


// convert to template class

template <class T>
class MyVector {
public:
	typedef std::size_t size_type;
	typedef T value_type;
	MyVector(size_type inSize = 0, const value_type& inValue = value_type());
	size_type size() const;
	size_type capacity() const;
	value_type at(size_type i) const;
	void push_back(const value_type& insertMe);
private:
	value_type* items;
	size_type mSize;
	size_type mCapacity;
};

#include "MyVector.cpp"

// We put <T> after each MyVector declaration
template <class T>
MyVector<T>::MyVector(size_type inSize, const value_type& inValue);

// We also must use typename for the type of the variable outside of the scope of the class
template <class T>
MyVector<T>::MyVector(size_type inSize, const value_type& inValue);
// everything is in the scope of the class

// but not here
template <class T>
typename MyVector<T>::size_type MyVector<T>::size() const {
	return mSize;
}

// dont include the header file in the implementation file
// include implementation file in the bottom of the header file
// remove implementation file from the project
// make sure to remove all using directives from the implementation file because
// the implementation file is now part of the header file
*/