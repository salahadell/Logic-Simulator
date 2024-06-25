#include "Node.h"
#include <iostream>
using namespace std;

// Default constructor initializing name to empty string and value to 0
Node::Node() {
	name = "";
	value = 0;
}

// Constructor initializing name and setting value to 0
Node::Node(string n) {
	name = n;
	value = 0;
}

// Setter for node name
void Node::set_node_name(string n) {
	name = n;
}

// Getter for node name
string Node::get_node_name() {
	return name;
}

// Setter for node value
void Node::set_node_value(short v) {
	value = v;
}

// Getter for node value
short Node::get_node_value() {
	return value;
}

// Print node name and value
void Node::printnode() {
	cout << name << "=" << value << endl;
}
