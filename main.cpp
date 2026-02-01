#include <iostream>


// Print the menu and return the option
int menu() {

    int option;

    std::cout << "Choose Option: " << std::endl;
    std::cout << "  1 - CREATE" << std::endl;
    std::cout << "  2 - READ" << std::endl;
    std::cout << "  3 - UPDATE" << std::endl;
    std::cout << "  4 - DELETE" << std::endl;

    std::cin >> option;

    return option;
}

int main() {

    // Start by printing menu and getting input
    int option = menu();
    
    bool running = true;
    while(running) {
        switch (option) {
            case 1:
                std::cout << "Create" << std::endl;
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

