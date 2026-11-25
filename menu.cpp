#include <iostream>
#include <string>

namespace GillaMenu {

    const std::string MENU_NAME = "GILLA PURPLE MENU";
    const std::string VERSION = "1.4.2";

    bool menuOpen = true;

    void ShowMenu() {
        std::cout << "========================\n";
        std::cout << "   GILLA PURPLE MENU\n";
        std::cout << "========================\n";
        std::cout << "[1] Visual Settings\n";
        std::cout << "[2] Cosmetic Settings\n";
        std::cout << "[3] Sound Settings\n";
        std::cout << "[4] Menu Theme\n";
        std::cout << "[5] Save Settings\n";
        std::cout << "[0] Close Menu\n";
    }
}

int main() {
    GillaMenu::ShowMenu();
    return 0;
}
