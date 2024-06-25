#include "Gate.h"

// Default constructor initializing input and output pointers to nullptr
Gate::Gate() {
	in1 = nullptr;
	in2 = nullptr;
	out1 = nullptr;
}

// Setter for input 1
void Gate::set_in1(Node* p) {
	in1 = p;
}

// Setter for input 2
void Gate::set_in2(Node* p) {
	in2 = p;
}

// Setter for output
void Gate::set_out1(Node* p) {
	out1 = p;
}

// Getter for input 1
Node* Gate::get_in1() {
	return in1;
}

// Getter for input 2
Node* Gate::get_in2() {
	return in2;
}

// Getter for output
Node* Gate::get_out1() {
	return out1;
}

// Implementation of AND gate logic
void ANDGATE::calculate_out() {
	if (in1->get_node_value() == 1 && in2->get_node_value() == 1) {
		out1->set_node_value(1);
	}
	else {
		out1->set_node_value(0);
	}
}

// Implementation of OR gate logic
void ORGATE::calculate_out() {
	if (in1->get_node_value() == 1 || in2->get_node_value() == 1) {
		out1->set_node_value(1);
	}
	else {
		out1->set_node_value(0);
	}
}

// Implementation of NAND gate logic
void NANDGATE::calculate_out() {
	if (in1->get_node_value() == 1 && in2->get_node_value() == 1) {
		out1->set_node_value(0);
	}
	else {
		out1->set_node_value(1);
	}
}

// Implementation of XOR gate logic
void XORGATE::calculate_out() {
	if (in1->get_node_value() == in2->get_node_value()) {
		out1->set_node_value(0);
	}
	else {
		out1->set_node_value(1);
	}
}
