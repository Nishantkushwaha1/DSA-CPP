
// If cost price and selling price of an item is input throught the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main()
{
    int cost, selling;
    cout << "Enter the cost price: ";
    cin >> cost;
    cout << "Enter the selling price: ";
    cin >> selling;
    if (cost == selling)
    {
        cout << "No profit No loss.";
    }
    else if (cost > selling)
    {
        cout << "Incurred loss." << endl;
        int loss = cost - selling;
        cout << "The loss is: " << loss;
    }
    else
    {
        cout << "The Seller made the Profit" << endl;
        int profit = selling - cost;
        cout << "The profit made is: " << profit;
    }
}