#ifndef NODE_H
#define NODE_H

#include <string>
using namespace std;

// Class representing a Node with a name and a value
class Node {
	string name;
	short value;

public:
	Node();                    // Default constructor
	Node(string n);            // Constructor with name initialization
	void set_node_name(string n);  // Setter for node name
	string get_node_name();    // Getter for node name
	void set_node_value(short v);  // Setter for node value
	short get_node_value();    // Getter for node value
	void printnode();          // Print node name and value
};

#endif // NODE_H
