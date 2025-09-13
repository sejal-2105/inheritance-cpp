# inheritance-cpp
### **Experiment 1: Single Inheritance (from `cppp1.cpp`)**

**Aim:** To demonstrate single inheritance, where a derived class inherits from a single base class.

**Theory:** Single inheritance is a fundamental concept in object-oriented programming where a new class (derived class) is created from an existing class (base class). The derived class inherits all the public and protected members of the base class, allowing for code reusability and specialization.

**Algorithm:**
1.  Define a base class `vehicle` with a public string member `brand` and a public method `colour()`.
2.  Define a derived class `car` that publicly inherits from the `vehicle` class.
3.  Add a public string member `model` to the `car` class.
4.  In the `main` function, create an object `mycar` of the `car` class.
5.  Call the `colour()` method (inherited from `vehicle`) and print the `brand` and `model` members.

### **Experiment 2: Multiple Inheritance (from `cppp2.cpp`)**

**Aim:** To demonstrate multiple inheritance, where a derived class inherits from more than one base class.

**Theory:** Multiple inheritance allows a single derived class to inherit from multiple base classes, combining the functionalities and members of all its parent classes. This enables the creation of a richer and more specialized class that can perform the roles of all its parent classes.

**Algorithm:**
1.  Define a base class `vehicle` with a public string member `company` and a public method `type()`.
2.  Define another base class `specs` with a public string member `mileage` and a public method `colour()`.
3.  Define a derived class `car` that publicly inherits from both `vehicle` and `specs`.
4.  Add a public string member `seater` to the `car` class.
5.  In the `main` function, create an object `f2` of the `car` class.
6.  Access and print members and call methods from `f2` that are inherited from both base classes.

### **Experiment 3: Multilevel Inheritance (from `cppp3.cpp`)**

**Aim:** To demonstrate multilevel inheritance, where a derived class serves as a base class for another derived class, creating a chain of inheritance.

**Theory:** In multilevel inheritance, a class inherits from a base class, and then that inherited class becomes a base for another derived class. This creates a hierarchy where a child class inherits properties from both its direct parent and its "grandparent" class.

**Algorithm:**
1.  Define a base class `food` with a public string member `cuisine` and a public method `type()`.
2.  Define a derived class `dish` that publicly inherits from `food`.
3.  Define another derived class `restaurant` that publicly inherits from `dish`.
4.  In the `main` function, create an object `f3` of the `restaurant` class.
5.  Call the `type()` method (inherited from `food`) and access members (`cuisine`, `dish`, `name`) from all three classes using the `f3` object.
6.  Print the combined members to the console.

### **Experiment 4: Hierarchical Inheritance (from `cppp4.cpp`)**

**Aim:** To demonstrate hierarchical inheritance, where multiple derived classes inherit from a single base class.

**Theory:** In hierarchical inheritance, a single base class serves as a parent for multiple derived classes. Each derived class inherits the common properties and behaviors of the base class and can also have its own unique features and members.

**Algorithm:**
1.  Define a base class `jeans` with a public array `type` and a public method `brand()`.
2.  Define three derived classes: `bootcut`, `WL`, and `skinny`, all of which publicly inherit from the `jeans` class.
3.  Add a public string member `color` to each derived class.
4.  In the `main` function, create objects `j1`, `j2`, and `j3` for `bootcut`, `WL`, and `skinny` respectively.
5.  For each object, call the inherited `brand()` method and print the inherited `type` element and the derived `color` member.

### **Conclusion**

These experiments showcase four distinct types of inheritance in C++: single, multiple, multilevel, and hierarchical. Inheritance is a powerful object-oriented tool that promotes code reusability and helps establish "is-a" relationships between classes. The examples demonstrate how derived classes can access and extend the functionalities of their base classes to create specialized objects.
