// Project1.cpp : Defines the entry point for the application.
//

#include "Project1.h"

/******************************
* BASE CLASS (WITH PROTECTED) *
******************************/
class MyClass {
public:
	void myFunction() {
		std::cout << "Some content in parent class.\n";
	}
protected:
	int some = 5;
};

// Another base class  
class MyOtherClass {
public:
	void myOtherFunction() {
		std::cout << "Some content in another class.\n";
	}
};

/*************************
* MULTILEVEL INHERITANCE *
*************************/
// Derived class (child)  
class MyChild : public MyClass {
};

// Derived class (grandchild)  
class MyGrandChild : public MyChild {
public:
	int getNum() {
		return some;
	}
};


/***********************
* MULTIPLE INHERITANCE *
***********************/
// Derived class  
class MyChildClass : public MyClass, public MyOtherClass {
};

int main() {
	MyGrandChild myObj;
	myObj.myFunction(); // -> Some content in parent class.
	std::cout << myObj.getNum() << "\n"; // -> 5

	MyChildClass newObj;
	newObj.myFunction(); // -> Some content in parent class.
	newObj.myOtherFunction(); // ->  Some content in another class.
	return 0;
}
