#include <iostream>
#include <string>
#include <sstream>
#include <vector>
 
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

template<class T>
class BST {
private:
    Node *root;
public:
    BST() : root(nullptr) {}

    void addNode(int value) {
        root = addNodeRecursive(root, value);
    }

    Node* addNodeRecursive(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }

        if (value < root->data) {
            root->left = addNodeRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = addNodeRecursive(root->right, value);
        }

        return root;
    }

};