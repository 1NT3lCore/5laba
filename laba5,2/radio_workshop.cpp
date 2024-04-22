#include "radio_workshop.h"
#include <cstdlib>
#include <ctime>

void fillReceipts(std::vector<Receipt>& receipts) {
    srand(time(0));
    int n = 0;
    bool validInput = false;

    do {
        std::cout << "Enter the number of receipts: ";
        if (std::cin >> n && n > 0) {
            validInput = true;
        }
        else {
            std::cout << "Invalid input. Please enter a positive number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!validInput);

    for (int i = 0; i < n; ++i) {
        Receipt r;
        r.group = "Group" + std::to_string(rand() % 3 + 1);
        r.brand = "Brand" + std::to_string(rand() % 5 + 1);
        r.reception_date = "Date" + std::to_string(rand() % 30 + 1);
        r.order_completed = rand() % 2;
        receipts.push_back(r);
    }
}

void printReceipts(const std::vector<Receipt>& receipts, const std::string& group) {
    for (const auto& r : receipts) {
        if (r.group == group) {
            std::cout << "Group: " << r.group << ", Brand: " << r.brand << ", Reception Date: " << r.reception_date;
            if (r.order_completed) {
                std::cout << ", Order Completed" << std::endl;
            }
            else {
                std::cout << ", Order Not Completed" << std::endl;
            }
        }
    }
}