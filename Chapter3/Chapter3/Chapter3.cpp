#include <iostream>
#include <iomanip>

#define SIZE 12

using namespace std;

int main() {
	//Question 1

	//const int SIZE = 10;

	//char name[SIZE];
	//char user[SIZE];
	//name[0] = '!';
	//cin >> user;
	//
	//cout << name << "\n" << user;	
	cout << "Hello" << "\n" << "World";

	//Question 2

	char cname[35];

	//Question 4

	int age;
	double pay;
	char section;

	cin >> age >> pay >> section;

	//Question 6

	char city[30];

	//Question 7

	double price, unitCost;

	cout << "\nPlease input in the unite cost : ";
	cin >> unitCost;

	price = SIZE * unitCost;

	cout << setw(SIZE) << 98.7;
	cout << SIZE;

	//Question 10

	int units;
	float mass;
	double weight;

	cout << "\nPlease input in the unites and mass separated by with spaces: ";
	cin >> units >> mass;

	weight = mass * units;

	//Question 11

	int a, b = 2;
	float c = 4.2;

	a = b * c;

	//Question 12

	int qty, salesReps;

	cout << "\nPlease input in the sales reps and quantity separated by with spaces: ";
	cin >> qty >> salesReps;

	double unitsEach = qty / salesReps;

	//Question 13

	const int RATE = 8;

	//Question 15

	int east = 1, west = 1, north = 1, south = 1;

	//Question 16

	double divSales;

	cout << "\nInput division sales: ";
	cin >> divSales;

	cout << setw(8) << fixed << setprecision(2) << showpoint << divSales;

	//Question 17

	double totalAge;

	cout << "\nInput total age: ";
	cin >> totalAge;

	cout << setw(12) << fixed << setprecision(4) << totalAge;

	//Question 18

	double population;

	cout << "\nInput population: ";
	cin >> population;

	cout << setw(12) << left << setprecision(8) << fixed << showpoint << population;

	//Question 29

	double maxcred, totalcred, usedcred;

	cout << "\nInput population: ";
	cin >> maxcred >> usedcred;

	totalcred = maxcred - usedcred;

	cout << "\nPlease enter in your maxcred followed by your usedcred separated by a space : ";
	cin >> maxcred >> usedcred;
	cout << "\nYour total credits are : " << totalcred;

	//Question 30

	double trs, tsale, saletr, tax;
	cout << "\nEnter the amount of sales and the sale tax rate separated by a space : ";
	cin >> tsale >> saletr;

	tax = tsale * saletr;

	trs = tax + tsale;

	cout << "\nYour amount of tax is : " << tax << " \nYour total amount due is : " << trs;


	//Question 31

	double num1, num2, sum;

	cout << "\nEnter a number : ";
	cin >> num1;
	cout << "\n Enter another number : ";
	cin >> num2;
	sum = num1 + num2;
	cout << "\nThe sum is " << sum;

	//Question 32



	return 0;
}