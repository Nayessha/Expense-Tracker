#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
using namespace std;

class Expense {
public:
    int id;
    double amount;
    string category;
    string date;
    string note;

    Expense() {}

    Expense(int id, double amount, string category, string date, string note) {
        id = id;
        amount = amount;
        category = category;
        date = date;
        note = note;
    }
};

#endif
