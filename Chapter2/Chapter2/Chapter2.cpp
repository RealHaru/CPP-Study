#include <iostream>
using namespace std;

int main() {

	//4
	cout << "The size of an char is " << sizeof(char) << " bytes." << endl;
	cout << "The size of an int is " << sizeof(int) << " bytes." << endl;
	cout << "The size of an float is " << sizeof(float) << " bytes." << endl;
	cout << "The size of an double is " << sizeof(double) << " bytes.\n" << endl;

	//5
	int gas = 12, miles = 350, mpg = miles / gas;
	cout << "This car can travel " << mpg << " per galon.\n" << endl;

	//6
	int acre = 43560, land = 389767, totalacre = land / acre;
	cout << "This land has " << totalacre << " acres.\n" << endl;

	//7
	float percentprofit = .4, circuitboard = 12.67;
	circuitboard += percentprofit * circuitboard;
	cout << "The selling price of the circuit board is $" << circuitboard << ".\n" << endl;

	//8
	cout << "Everett\nMorton Ln. 3218, Saint Joseph, MO, 64506\n816-248-5654\nComputer Science\n" << endl;

	//9
	cout << "   *" << endl;
	cout << "  ***" << endl;
	cout << " *****" << endl;
	cout << "*******" << endl;
	cout << " *****" << endl;
	cout << "  ***" << endl;
	cout << "   *\n" << endl;

	//10
	int test1 = 90, test2 = 80, test3 = 85, test4 = 95, test5 = 100, average = (test1 + test2 + test3 + test4 + test5) / 5;
	cout << "Test 1:" << test1 << endl << "Test 2:" << test2 << endl << "Test 3:" << test3 << endl << "Test 4:" << test4 << endl << "Test 5:" << test5 << endl << "Average:" << average << endl << endl;


	//Chapter 2 Review

	int score = 60;
	bool pass = score >= 70 ? true : false;
	cout << boolalpha << pass << endl;
	int number = score--;


	//25
	int speed = 20, time = 10, distance = speed * time;

	cout << distance << endl;
	//26
	float force = 172.5, area = 27.5, pressure;

	pressure = area / force;

	cout << pressure << endl;

	//Programming Challenges
	//1
	int x = 62, y = 99, total;

	total = x + y;

	cout << total << endl;
	//2
	float percent = 0.62, sales = 4.6E6, net;

	net = percent * sales;

	cout << net << endl;
	//3
	float purchase = 52, salestax = .04, csalestax = .02, tst;

	tst = purchase * salestax;
	tst += purchase * csalestax;

	cout << tst << endl;

	return 0;
}