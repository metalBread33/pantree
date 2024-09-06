//This file contains the cli version of the application
#include <iostream>
#include "../include/item.h"

int menu() {
  int  option; bool valid = false;

  while (!valid) {
  
    std::cout << "Select a menu option" << std::endl <<
      "1) Add item to pantry" << std::endl << "2) View pantry" << std::endl
      << "3) Remove item from pantry" << std::endl << 
      "4) Add recpie to recipe book" << std::endl << "5) Add recipe to meal plan"
      << std::endl << "6) Edit meal plan" << std::endl << "7) View meal plan" <<
      std::endl << "8) View recipe book" << std::endl << "9) Edit recipe book"
      << std::endl << "0) Quit" << std::endl <<"Enter option: ";

    std::cin >> option;

    if(option > 0 && option <= 9)
      valid = true;
  }

  return option;
}

int main () {
    int menuOption; 
    std::cout << "Hello and welcome to Pantree!" << std::endl;
    std::cout << "This is an application used to help people keep track of their"
        << " food items and meal plan" << std::endl; 

    menuOption = menu();
    return 0;
}
