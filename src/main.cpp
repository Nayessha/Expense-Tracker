#include <iostream>
#include "../include/ExpenseManager.h"

using namespace std;

int main() {
    ExpenseManager manager;
    int choice;

    while (1) {
        cout << "\n1 Add Expense";
        cout << "\n2 View Expenses";
        cout << "\n3 Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            manager.addExpense();
        }
        else if (choice == 2) {
            manager.viewExpenses();
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
