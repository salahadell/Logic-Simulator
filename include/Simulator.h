#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Gate.h"
#include <vector>
#include <string>
using namespace std;

// Class representing a simulator for various gate operations
class Simulator {
	vector<Gate*> Gatesarray;   // Array of gates
							   //dependency inversion
	vector<Node*> Nodesarray; // Array of nodes

public:
	Simulator();               // Default constructor
	~Simulator();              // Destructor to clean up dynamically allocated memory
	int GetGsize();            // Get the size of the Gatesarray
	int GetNsize();            // Get the size of the Nodesarray
	Node* addNode(string name); // Add a node with the given name
	Gate* addGate(string Gtype); // Add a gate of the specified type
	                             // Achieves Method Injection
	Node* findNode(string name); // Find a node by name
	Node* findORaddNode(string name); // Find a node by name or add it if not found
	void sim();                // Perform simulation on all gates
	void printALL();           // Print all nodes
	void load(string filename); // Load simulation data from a file
};

#endif // SIMULATOR_H
