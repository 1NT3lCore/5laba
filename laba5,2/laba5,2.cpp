#include "radio_workshop.h"

int main() {
    std::vector<Receipt> receipts;
    fillReceipts(receipts);

    std::string group;
    std::cout << "Enter the group of products to check orders for (Group1, Group2, Group3): ";
    std::cin >> group;

    printReceipts(receipts, group);

    return 0;
}