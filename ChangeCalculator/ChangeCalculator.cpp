/*
 * Calculates the change for a given payment and the number
 * of quarters, dimes, nickels, pennies needed for the change.
 */

#include <iostream>;
using namespace std;

int main() {
	double total, payment;
	cout << "Enter the cost of the item: ";
	cin >> total;
	cout << "Enter your payment: ";
	cin >> payment;
	double change = payment - total;
	if (change < 0) {
		cout << "You can't pay less than the total amount." << endl;
	} else {
		int quarters = change / 0.25;
		int dimes = (change - (0.25 * quarters)) / 0.10;
		int nickels = (change - (0.25 * quarters) - (0.10 * dimes)) / 0.05;
		int pennies = (change - (0.25 * quarters) - (0.10 * dimes) - (0.05 * nickels)) / 0.01;
		cout << "Your change is $" << change << " and will consist of:" << endl;
		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << pennies << endl;
	}
}
