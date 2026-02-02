#include <iostream>
#include "linkedlist.hpp"


// Print the menu and return the option
int menu() {

    int option;

    std::cout << "Choose Option: " << std::endl;
    std::cout << "  1 - CREATE" << std::endl;
    std::cout << "  2 - READ" << std::endl;
    std::cout << "  3 - UPDATE" << std::endl;
    std::cout << "  4 - DELETE" << std::endl;
    // For whitespace
    std::cout << std::endl;

    std::cin >> option;

    return option;
}

int create() {
    int data;

    std::cout << "Input data: " << std::endl;
    std::cout << std::endl;

    std::cin >> data;
 
    return data;
}

int main() {

    // Create inventory
    LinkedList inventory;

    // Print menu and receive input
    int option = menu();
    
    // Evaluate input and create main loop
    bool running = true;
    while(running) {
        switch (option) {
            case 1:
                std::cout << "Create" << std::endl;
                inventory.addFront(create()); 
                running = false;
                break;
            case 2:
                std::cout << "Read" << std::endl;
                running = false;
                break;
            case 3:
                std::cout << "Update" << std::endl;
                running = false;
                break;
            case 4:
                std::cout << "Delete" << std::endl;
                running = false;
                break;
            case 0:
                std::cout << "Goodbye" << std::endl;
                running = false;
                break;
            default:
                std::cout << "Please choose one of the four options" << std::endl;
                option = menu();
        }
    }

    return 0;
}

