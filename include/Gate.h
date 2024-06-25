#ifndef GATE_H
#define GATE_H

#include "Node.h"

// Abstract base class representing a generic gate with two inputs and one output
class Gate {
protected:
	Node* in1;
	Node* in2;
	Node* out1;

public:
	Gate();                     // Default constructor
	virtual void calculate_out() = 0;  // Pure virtual function to be overridden by derived classes
	                                  // achieves Dynamic Polymorphism and OPEN CLOSED PRINCIPLE 
	void set_in1(Node* p);      // Setter for input 1
	void set_in2(Node* p);      // Setter for input 2
	void set_out1(Node* p);     // Setter for output
	Node* get_in1();            // Getter for input 1
	Node* get_in2();            // Getter for input 2
	Node* get_out1();           // Getter for output
};

// Derived class representing an AND gate
class ANDGATE : public Gate {
	void calculate_out();       // Implementation of AND gate logic
};

// Derived class representing an OR gate
class ORGATE : public Gate {
	void calculate_out();       // Implementation of OR gate logic
};

// Derived class representing a NAND gate
class NANDGATE : public Gate {
	void calculate_out();       // Implementation of NAND gate logic
};

// Derived class representing an XOR gate
class XORGATE : public Gate {
	void calculate_out();       // Implementation of XOR gate logic
};

#endif // GATE_H
