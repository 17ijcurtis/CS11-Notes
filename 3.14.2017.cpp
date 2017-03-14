// We now want to implement iterators and const iterators
// We also want to add member function begin and end for both iterator and const iterators

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

	class iterator {
	public:
		iterator(value_type* initial = NULL) {
			current = initial;
		}

		valuetype& operator*() const {
			return *current;
		}

		iterator& operator++() {
			current++;
			return *this;
		}

		iterator operator++(int) {
			iterator original(current);
			current++;
			return original;
		}

		bool operator==(iterator other) const {
			return current == other.current;
		}

		bool operator!=(iterator other) const {
			return current != other.current
		}
	private:
		value_type* current;
	};

	class const_iterator {
	public:
		iterator(value_type* initial = NULL) {
			current = initial;
		}

		const valuetype& operator*() const {
			return *current;
		}

		iterator& operator++() {
			current++;
			return *this;
		}

		iterator operator++(int) {
			iterator original(current);
			current++;
			return original;
		}

		bool operator==(iterator other) const {
			return current == other.current;
		}

		bool operator!=(iterator other) const {
			return current != other.current
		}
	private:
		value_type* current;
	};

	iterator begin() {
		return iterator(items);
	}

	iterator end() {
		return iterator(&items[mSize - 1] + 1);
	}

	const_iterator begin() const {
		return const_iterator(items);
	}

	const_iterator end() const {
		return const_iterator(&items[mSize - 1] + 1);
	}
private:
	value_type* items;
	size_type mSize;
	size_type mCapacity;
};

template <class T>
typename MyVector::value_type MyVector<T>::at(size_type i) const{
	//assert(i >= 0 && i < size());
	if (i < 0 || i >= size()) {
		string str = "out-of-range-error";
		throw str;
	}
	return items[i];
}

#include "MyVector.cpp"


// in our function that calls at(size_type i) we must now use a try catch statement

try {

}
catch (std::string e) {
	// print stuff
}