/*
// Using the virtual keyword
class Base {
public:
	void Hello();
};

class Derived : public Base {
public:
	void Hello();
};


int main() {
	Base *p, b;
	Derived d;

	p = &b;
	p->Hello(); // calls base class function

	p = &d;
	p->Hello(); // calls base class function
}

// if we change the prototype in the base class to 
// virtual void Hello();
// then our second function call in main will call the derived class 

// we can also say in the base class
// virtual void draw() = 0;  and this is a pure virtual function
// It can not be called from a base class object and must be overrided in derived class
*/