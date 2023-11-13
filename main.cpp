#include "Menu.h"
#include "Sorter.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Main function.
 * @return int
 */
int main() {
  int choice;

  Menu menu;

  system("clear");
  menu.displayMenu();

  while (true) {
    cin >> choice;
    if (choice == 4) {
      break;
    }

    if (choice >= 1 && choice <= 4) {
      menu.runOption(choice);
      system("clear");
    } else {
      system("clear");
      cout << "\nInvalid choice. Please try again.\n";
      sleep(1);
      system("clear");
      cin.clear();
      cin.ignore();
    }

    menu.displayMenu();
  }

  return 0;
}
