#include "Simulator.h"
#include <fstream>
#include <iostream>
using namespace std;

// Default constructor
Simulator::Simulator() {
}

// Destructor to clean up dynamically allocated memory
Simulator::~Simulator() {
	for (int i = 0; i < GetNsize(); i++) {
		delete Nodesarray[i];
	}
	for (int i = 0; i < GetGsize(); i++) {
		delete Gatesarray[i];
	}
}

// Get the size of the Gatesarray
int Simulator::GetGsize() {
	return Gatesarray.size();
}

// Get the size of the Nodesarray
int Simulator::GetNsize() {
	return Nodesarray.size();
}

// Add a node with the given name
Node* Simulator::addNode(string name) {
	Nodesarray.push_back(new Node(name));
	return Nodesarray[GetNsize() - 1];
}

// Add a gate of the specified type 
// Achieves Method Injection
Gate* Simulator::addGate(string Gtype) {
	if (Gtype == "AND") {
		Gatesarray.push_back(new ANDGATE()); //liskov substitution
	}
	else if (Gtype == "OR") {
		Gatesarray.push_back(new ORGATE()); //liskov substitution
	}
	else if (Gtype == "NAND") {
		Gatesarray.push_back(new NANDGATE()); //liskov substitution
	}
	else if (Gtype == "XOR") {
		Gatesarray.push_back(new XORGATE()); //liskov substitution
	}

	return Gatesarray[GetGsize() - 1];
}

// Find a node by name
Node* Simulator::findNode(string name) {
	for (int i = 0; i < GetNsize(); i++) {
		if (name == Nodesarray[i]->get_node_name()) {
			return Nodesarray[i];
		}
	}
	return nullptr;
}

// Find a node by name or add it if not found
Node* Simulator::findORaddNode(string name) {
	Node* p = findNode(name);
	if (p == nullptr) {
		return addNode(name);
	}
	else {
		return p;
	}
}

// Perform simulation on all gates
void Simulator::sim() {
	for (int i = 0; i < GetGsize(); i++) {
		Gatesarray[i]->calculate_out();
	}
}

// Print all nodes
void Simulator::printALL() {
	for (int i = 0; i < GetNsize(); i++) {
		Nodesarray[i]->printnode();
	}
}

// Load simulation data from a file
void Simulator::load(string filename)
{
	ifstream f1;
	f1.open(filename);
	string s;
	while (!f1.eof()) {
		f1 >> s;
		if (s == "SET") {
			string name;
			short value;
			f1 >> name >> value;
			findORaddNode(name)->set_node_value(value);
		}
		else if (s == "OUT") {
			string n;
			f1 >> n;
			if (n == "ALL") {
				printALL();
			}
			else {
				findORaddNode(n)->printnode();
			}
		}
		else if (s == "SIM") {
			sim();
		}
		else {
			string in1, in2, out1;
			Gate* p = addGate(s);
			f1 >> in1 >> in2 >> out1;
			p->set_in1(findORaddNode(in1));
			p->set_in2(findORaddNode(in2));
			p->set_out1(findORaddNode(out1));
		}
	}
}
