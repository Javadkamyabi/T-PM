#include <iostream>
void showMenu();
using namespace std;
int main() {
    // Logo and title display
    std::cout << "=================================================\n";
    std::cout << "\n";
    std::cout << "████████╗ █████╗ ██████╗  █████╗ ███╗   ██╗██████╗ ██╗   ██╗\n";
    std::cout << "╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗████╗  ██║██╔══██╗╚██╗ ██╔╝\n";
    std::cout << "   ██║   ███████║██████╔╝███████║██╔██╗ ██║██║  ██║ ╚████╔╝ \n";
    std::cout << "   ██║   ██╔══██║██╔══██╗██╔══██║██║╚██╗██║██║  ██║  ╚██╔╝  \n";
    std::cout << "   ██║   ██║  ██║██║  ██║██║  ██║██║ ╚████║██████╔╝   ██║   \n";
    std::cout << "   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝    ╚═╝   \n";
    std::cout << "\n";
    std::cout << "=================================================\n";
    std::cout << "                  by: J. Kamyabi\n";
    std::cout << "=================================================\n";

    // Program initialization or further instructions can go here
    showMenu();
    return 0;
}


void showMenu() {
    std::cout << "\n";
    std::cout << "******************* Main Menu *******************\n";
    std::cout << "*                                               *\n";
    std::cout << "*    1. Projects                                *\n";
    std::cout << "*    2. Tasks                                   *\n";
    std::cout << "*    3. Updates                                 *\n";
    std::cout << "*    4. Options                                 *\n";
    std::cout << "*    5. Help                                    *\n";
    std::cout << "*    6. Close                                   *\n";
    std::cout << "*                                               *\n";
    std::cout << "*************************************************\n";
    std::cout << "Select an option: ";
    // Here you can add the code to handle user input and respond to it
}
