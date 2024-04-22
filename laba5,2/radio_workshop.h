#pragma once
#ifndef RADIO_WORKSHOP_H
#define RADIO_WORKSHOP_H

#include <iostream>
#include <vector>
#include <string>

struct Receipt {
    std::string group;
    std::string brand;
    std::string reception_date;
    bool order_completed;
};

void fillReceipts(std::vector<Receipt>& receipts);
void printReceipts(const std::vector<Receipt>& receipts, const std::string& group);

#endif