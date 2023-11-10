#include <iostream>
#include "LinearData.h"

using namespace std;

class L_List{
private:
    Node *list = NULL;
    Node *current;
    int listChoice, len, data;
    char ch;
public:
    void listMenu(){
        system("clear");
        cout << "\nWelcome to Linked List\n\n";
        cout << "What fuction you want to try? " << endl;
        cout << "1. Add data manually." << endl;
        cout << "2. Generate random data." << endl;
        cout << "3. View current List. " << endl;
        cout << "4. Remove a specific element." << endl;
        cout << "5. Remove all data." << endl;
        cout << "6. Return back" << endl;
        cout << "Select an option: ";

        cin >> listChoice;
        system("clear");

        switch (listChoice) {
            case 1:
                cout << "How many items would you like to add to the stack: ";
                cin >> len;
                while (len > 0) {
                    cout << "\nType the number that you want to add: ";
                    cin >> data;
                    addNode(data);
                    len--;
                }
                cout << "\nPress enter to continue.";
                cin.ignore();
                cin.get();
                listMenu();
                break;

            case 2:
                cout << "How many items would you like to add to the stack: ";
                cin >> len;
                while (len > 0) {
                    addNode(randomNum());
                    len--;
                }
                cout << "\nPress enter to continue.";
                cin.ignore();
                cin.get();
                listMenu();
                break;

            case 3:
                current = list;
                cout << "Head -> ";
                while (current != nullptr) {
                    cout << "[" << current->data << "] -> ";
                    current = current->next;
                }
                cout << "NULL" << "\n\n";

                cout << "\nPress enter to continue.";
                cin.ignore();
                cin.get();
                listMenu();
                break;

            case 4:
                if (list != NULL) {
                    cout << "Which element would you like to delete: "; 
                    cin >> data;
                    removeElement(data);
                } else {
                    cout << "The List is empty." << "\n\n";
                }
                cout << "\nPress enter to continue.";
                cin.ignore();
                cin.get();
                listMenu();
                break;   

            case 5:
                cout << "Removing the elements of the List: " << endl;
                while (list != NULL) {
                    removeList(data);
                }
                cout << endl;
                cout << "\nPress enter to continue.";
                cin.ignore();
                cin.get();
                listMenu();
                break;

            case 6:
                break;

            default:
                system("clear");
                cout << "\n==========Invalid choice.=============\n";
                cin.clear();
                cin.ignore();
                listMenu();
                break;
        }
    }


    void addNode(int n){
        Node *new_node = new Node();
        new_node->data = n;

        Node *aux1 = list;
        Node *aux2;

        while((aux1 != NULL) && (aux1->data < n )){
            aux2 = aux1;
            aux1 = aux1->next;
        }

        if(list == aux1){
            list = new_node;
        } else {
            aux2->next = new_node;
        }

        new_node->next = aux1;

        cout << "\nElement " << n << " added to the Linked List\n\n";
    }

    int searchElement(int n){
        Node *actual = new Node();
        int i = 0;

        while (actual != nullptr){
            if (actual->data == n){
                return i;
            }
            actual = actual->next;
            i++;
        }
        
        return -1;
    }

    void removeElement(int n){
        if(list != nullptr){
            Node *auxRemove;
            Node *previous = NULL;
            auxRemove = list;

            while ((auxRemove != NULL) && (auxRemove->data != n)){
                previous = auxRemove;
                auxRemove = auxRemove->next;
            }

            if(auxRemove == NULL){
                cout << "No Such Element" << "\n\n";
            } else if (previous == NULL){
                list = auxRemove->next;
                delete auxRemove;
                cout << "Removed element: " << n << "\n\n";
            } else {
                previous->next = auxRemove->next;
                delete auxRemove;
                cout << "Removed element: " << n << "\n\n";
            }
        }
    }

    void removeList(int n){
        Node *aux = list;
        n = aux->data;
        list = aux->next;
        cout << "\nElement " << n << " removed"<< endl;
        delete aux;
    }

};