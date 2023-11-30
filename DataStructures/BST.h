#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "LinearData.h"
 
using namespace std;

class BST {
private:
    int data, len, bstChoice, maxLevel;
    B_Node *current;
    B_Node *root;

public:
    BST() : root(nullptr) {}

    // void loadIntoVector(vector<int>& vec) const {
    //     vec.clear();
    //     B_Node* actual = root;
    //     while (actual) {
    //         vec.push_back(actual->data);
    //         actual = actual->next;
    //     }
    //     modifyFile(vec);
    // }

    void BST_Menu(vector<int> &dataVec){
        system("clear");
        cout << "\nWelcome to Binary Search Tree\n\n";
        cout << "What fuction you want to try? " << endl;
        cout << "1. Add data manually." << endl;
        cout << "2. Generate random data." << endl;
        cout << "3. View current Tree(In progress). " << endl;
        cout << "4. Remove element." << endl;
        cout << "5. Return back" << endl;
        cout << "Select an option: ";

        cin >> bstChoice;
        system("clear");

        switch (bstChoice) {
        case 1:
            cout << "How many items would you like to add to the Binary Search Tree: ";
            cin >> len;
            while (len > 0) {
                cout << "Type the number that you want to add: ";
                cin >> data;
                addNode(data);
                len--;
            }
            cout << "\nPress enter to continue.";
            cin.ignore();
            cin.get();
            BST_Menu(dataVec);
            break;

        case 2:
            cout << "How many items would you like to add to the Binary Search Tree: ";
            cin >> len;
            while (len > 0) {
                addNode(randomNum());
                len--;
            }
            cout << "\nPress enter to continue.";
            cin.ignore();
            cin.get();
            BST_Menu(dataVec);
            break;

        case 3:
            cout << "Current BST: \n";
            current = root;
            if (current != NULL){
                
                printTreeRecursive(current,getMaxLevel());
            } 
            cout << "\nPress enter to continue.";
            cin.ignore();
            cin.get();
            BST_Menu(dataVec);
            break;

        case 4:
            if (root != NULL) {
                cout << "Which element would you like to delete: "; 
                cin >> data;
                removeNode(data);
                cout << "Removed element: " << data << endl;
            } else {
                cout << "The BST is empty." << endl;
            }
            cout << "\nPress enter to continue.";
            cin.ignore();
            cin.get();
            BST_Menu(dataVec);
            break;

        // case 5:
        //     cout << "Removing the elements of the queue: " << endl;
        //     while (root != NULL) {
        //         deleteQueue(data);
        //         if (root != NULL) {
        //         cout << data << " , ";
        //         } else {
        //         cout << data << ".";
        //         }
        //     }
        //     cout << endl;
        //     cout << "\nPress enter to continue.";
        //     cin.ignore();
        //     cin.get();
        //     BST_Menu(dataVec);
        //     break;

        case 5:
            break;

        default:
            system("clear");
            cout << "\n==========Invalid choice.=============\n";
            cin.clear();
            cin.ignore();
            BST_Menu(dataVec);
            break;
        }
    }

    void addNode(int value) {
        root = addNodeRecursive(root, value);
    }

    B_Node* addNodeRecursive(B_Node* root, int value) {
        if (root == nullptr) {
            return new B_Node(value);
        }

        if (value < root->data) {
            root->left = addNodeRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = addNodeRecursive(root->right, value);
        }

        return root;
    }

    void removeNode(int value) {
        root = removeNodeRecursive(root, value);
    }

    B_Node* removeNodeRecursive(B_Node* root, int value) {
        if (root == nullptr) {
            return root;
        }

        if (value < root->data) {
            root->left = removeNodeRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = removeNodeRecursive(root->right, value);
        } else {
            // Node with only one child or no child
            if (root->left == nullptr) {
                B_Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                B_Node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children
            root->data = minValue(root->right);

            root->right = removeNodeRecursive(root->right, root->data);
        }

        return root;
    }

    int minValue(B_Node* root) {
        int minValue = root->data;
        while (root->left != nullptr) {
            minValue = root->left->data;
            root = root->left;
        }
        return minValue;
    }


    int getMaxLevel() {
        maxLevel = 0;  // Initialize maxLevel before traversal
        getMaxLevelRecursive(root, 0);  // Start traversal from the root
        return maxLevel;
    }

    void getMaxLevelRecursive(B_Node* root, int currentLevel) {
        if (root != nullptr) {
            // Update maxLevel if the current level is greater
            if (currentLevel > maxLevel) {
                maxLevel = currentLevel;
            }

            // Recur for left and right subtrees with increased level
            getMaxLevelRecursive(root->left, currentLevel + 1);
            getMaxLevelRecursive(root->right, currentLevel + 1);
        }
    }

    void printTreeRecursive(B_Node* root, int level) {
        if (root != nullptr) {
            printTreeRecursive(root->right, level + 1);  // Print right subtree first

            // Print the current node with appropriate indentation
            for (int i = 0; i < level; ++i) {
                cout << "\t";  // Use tabs for indentation
            }

            cout << root->data << endl;  // Print the data of the current node

            printTreeRecursive(root->left, level + 1);  // Print left subtree
        }
    }

};