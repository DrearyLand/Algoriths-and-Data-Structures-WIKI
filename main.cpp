#include <iostream>
#include <vector>
#include "Sorter.h"
#include "Menu.h"

using namespace std;

/**
 * @brief Main function.
 * @return int
 */
int main() {
    int choice;

    Menu menu;
    
    system("cls");
    menu.displayMenu();

    while (true) {
        cin >> choice;
        if (choice == 5) {
            break;
        }

        if (choice >= 1 && choice <= 4) {
            menu.runOption(choice);
            cout << "\n\nReturning to main menu...\n\n\n";
            sleep(3);
            system("cls");
        } else{
            system("cls");
            cout << "\nInvalid choice. Please try again.\n";
            sleep(1);
            system("cls");
            cin.clear();
            cin.ignore();
        }

        menu.displayMenu();
    }
    
    return 0;
}
