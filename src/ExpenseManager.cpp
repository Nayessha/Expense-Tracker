#include <iostream>
#include "ExpenseManager.h"
using namespace std;

ExpenseManager::ExpenseManager() {
    nextId = 1;
}

void ExpenseManager::addExpense() {
    double amount;
    string category, date, note;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter category: ";
    cin >> category;

    cout << "Enter date: ";
    cin >> date;

    cout << "Enter note: ";
    cin >> note;

    Expense e(nextId, amount, category, date, note);
    expenses.push_back(e);
    nextId++;

    cout << "Expense added\n";
}

void ExpenseManager::viewExpenses() {
    if (expenses.size() == 0) {
        cout << "No expenses\n";
        return;
    }

    for (int i = 0; i < expenses.size(); i++) {
        cout << expenses[i].id << " "
             << expenses[i].amount << " "
             << expenses[i].category << " "
             << expenses[i].date << " "
             << expenses[i].note << endl;
    }
}
