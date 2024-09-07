Casting is a technique by which one data type to another data type
Static Cast: This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types
Dynamic Cast: In C++, dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.

Downcasting: Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting. In figure 1  casting from the Base class pointer/reference to the “derived class 1” pointer/reference showing downcasting (Base ->Derived class).

Upcasting: Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting. In figure 1 Casting from Derived class 2 pointer/reference to the “Base class” pointer/reference showing Upcasting (Derived class 2 -> Base Class).


```cpp
#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual ~Base() = default;  // Virtual destructor to ensure proper polymorphism
};

class Derived : public Base {
public:
    void print() {
        std::cout << "Derived class method" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base pointer to a Derived object
    //Base* basePtr = new Base();  // Wrong Since basePtr points to an instance of Base and not an instance of Derived, the dynamic_cast will fail.
    //The result of dynamic_cast will be nullptr because the actual type of the object is Base, not Derived.

    // Use dynamic_cast to cast basePtr to Derived*
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    
    if (derivedPtr) {
        derivedPtr->print();  // Safe to call Derived class methods
    } else {
        std::cout << "Cast failed" << std::endl;
    }
    
    delete basePtr;  // Clean up
    return 0;
}
```

note: but upcasting is still ok:
    Derived *derived = new Derived();
    Base *base = dynamic_cast<Base*> (derived)
