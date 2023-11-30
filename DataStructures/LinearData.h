#ifndef LINEARDATA_H
#define LINEARDATA_H

#include <iostream>
#include <unistd.h>
#include <fstream>
#include <vector>

using namespace std;

/**
 * @struct Node
 * @brief Structure representing a node in the stack.
 */
struct Node {
  int data;       ///< Data stored in the node.
  Node *next;     ///< Pointer to the next node in the stack.
};

struct B_Node {
  int data;
  B_Node* left;
  B_Node* right;

  B_Node(int value) : data(value), left(nullptr), right(nullptr) {}
  B_Node() : data(0), left(nullptr), right(nullptr) {}
};


void readDataFromFile(const string& filename, vector<int> &data) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        int value;
        while (inputFile >> value) {
            data.push_back(value);
        }
        inputFile.close();
    } else {
        cout << "Unable to open the file: " << filename << endl;
    }
}

void modifyFile(vector<int> data){
  ofstream outputFile("sample.txt");
  if (outputFile.is_open()){
    for(int i = 0; i < data.size(); i++){
      outputFile << data[i] << endl;
    }
  } else {
    cout << "Unable to open the file. " << endl;
  }
}

void resetData(vector<int> data){
  // Input file stream for the source file
  ifstream sourceFile("backUP.txt");

  // Output file stream for the destination file
  ofstream destinationFile("sample.txt");

  // Check if both files are open
  if (!sourceFile.is_open() || !destinationFile.is_open()) {
    cerr << "Error opening files." << endl;
  } else {
  // Read and copy the content from the source file to the destination file
    char ch;
    while (sourceFile.get(ch)) {
      destinationFile.put(ch);
    }
  }
  
  // Close the file streams
  sourceFile.close();
  destinationFile.close();
}

/**
 * @brief Get a random number.
 * @return The number generated with rand.
 */
int randomNum() { return rand() % 100; }

#endif