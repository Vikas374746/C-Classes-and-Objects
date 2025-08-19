# C-Classes-and-Objects
# **Experiment 11: Classes and Objects in C++**

---

## **Aim**

To study and implement the concept of **Classes and Objects** in C++ by writing programs to calculate the volume of a cube/box using different approaches.

---

## **Theory**

* A **Class** is a user-defined data type that contains **data members** (variables) and **member functions** (methods).
* An **Object** is an instance of a class that allows access to class members.
* Classes support **encapsulation** (binding data and functions together).
* Access specifiers:

  * **public** → accessible outside the class.
  * **private** → accessible only inside the class.
* The concept of **classes and objects** helps in modeling real-world entities in C++.

---

## **Algorithms**

---

### **Program 1: Volume calculation with public data members**

1. Start the program.
2. Define a class `Cube` with public members `height`, `width`, and `length`.
3. Define a member function `volume()` that calculates and returns the product of height, width, and length.
4. In `main()`, create an object of the class.
5. Call the function using the object.
6. Print the volume.
7. End.

---

### **Program 2: Volume calculation with private data members**

1. Start the program.
2. Define a class `Cube` with private members `height`, `width`, and `length`.
3. Define a public member function `volume()` that calculates and returns the product of the private data members.
4. In `main()`, create an object of the class.
5. Call the function using the object.
6. Print the volume.
7. End.

---

### **Program 3: Volume calculation using user input**

1. Start the program.
2. Define a class `Volume` with members `length`, `breadth`, and `height`.
3. Create a function `input()` to take user input for dimensions.
4. Create a function `vol()` to calculate the product of length, breadth, and height.
5. Create a function `display()` to print the volume.
6. In `main()`, create an object of the class.
7. Call `input()` to take values from the user.
8. Call `display()` to show the calculated volume.
9. End.

---

### **Program 4: Direct calculation inside main()**

1. Start the program.
2. Define a class `cube` with public members `height`, `width`, and `length`.
3. In `main()`, create an object of the class.
4. Directly calculate volume using `height * width * length`.
5. Print the result.
6. End.

---

## **Conclusion**

* Classes in C++ allow bundling of **data and functions** together.
* **Objects** provide access to class members.
* By using **public** and **private** access specifiers, we can control accessibility and enforce encapsulation.
* All four algorithms successfully demonstrate the concept of **Classes and Objects**:

  * Program 1 → Public members with a function.
  * Program 2 → Private members with encapsulated access.
  * Program 3 → User input with member functions.
  * Program 4 → Direct calculation using object data.

Thus, the experiment is successfully executed and verified.

---
