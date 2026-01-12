#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H

#include <vector>
#include "Expense.h"
using namespace std;

class ExpenseManager {
public:
    vector<Expense> expenses;
    int nextId;

    ExpenseManager();

    void addExpense();
    void viewExpenses();
};

#endif
