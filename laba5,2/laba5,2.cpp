#include "radio_workshop.h"

int main() {
    std::vector<Receipt> receipts;
    fillReceipts(receipts);

    std::string group;
    bool validGroup = false;

    while (!validGroup) {
        std::cout << "Enter the group of products to check orders for (Group1, Group2, Group3): ";
        std::cin >> group;

        if (group == "Group1"  group == "Group2"  group == "Group3") {
            validGroup = true;
        }
        else {
            std::cout << "Invalid group entered. Please enter Group1, Group2, or Group3." << std::endl;
        }
    }

    printReceipts(receipts, group);

    return 0;
}