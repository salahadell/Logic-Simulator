# Logic-Simulator

GateSimulator is a simple C++ application that simulates basic logic gates (AND, OR, NAND, XOR) using nodes and gates. The application reads an input file to set up nodes, gates, and simulate the logic.

## Project Structure
Logic-Simulator/

├── CMakeLists.txt

├── include
   └── Node.h
   └── Gate.h
   └── Simulator.h

├── src
   └── main.cpp
   └── Node.cpp
   └── Gate.cpp
   └── Simulator.cpp

## Prerequisites

- CMake (version 3.10 or higher)
- A C++ compiler (e.g., g++)

## Building the Project
   ```sh
   git clone <repository_url>
   cd Logic-Simulator
   cmake --build build --target install
  ```
## Running the Program
```sh
./GateSimulator <input file>
```
The program will simulate the logic gates as defined in the input file and print the results. The program will wait for the user to press Enter before closing.

## Input File Format
The input file should contain commands in the following format:

`SET <node_name> <value>` : Set the value of a node.

`<gate_type> <input1> <input2> <output>` : Add a gate of the specified type (`AND`, `OR`, `NAND`, `XOR`) with the given inputs and output.

`SIM` : Simulate the gates.

`OUT <node_name>` : Output the value of the specified node.

`OUT ALL`: Output the values of all nodes.
## Example
```sh
OR A B C
AND C D E
SET A 1
SET B 0
SET D 0
SIM
OUT E
OUT ALL
```
