#include <iostream>
using namespace std;
void makeChange(int, int&, int&, int&, int&, int&);

int main() {

	int cents, dollars, quarters, dimes, nickels, pennies;
	cout << "How much change to make (in cents): ";
	cin >> cents;
	makeChange(cents, dollars, quarters, dimes, nickels, pennies);
	cout << "Your change is:" << endl
		<< dollars << " dollar(s)" << endl
		<< quarters << " quarter(s)" << endl
		<< dimes << " dime(s)" << endl
		<< nickels << " nickel(s)" << endl
		<< pennies << " pennie(s)" << endl;
}
void makeChange(int amount, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies) {
	dollars = amount / 100;
	amount = amount % 100;
	quarters = amount / 25;
	amount = amount % 25;
	dimes = amount / 10;
	amount = amount % 10;
	nickels = amount / 5;
	amount = amount % 5;
	pennies = amount;
}