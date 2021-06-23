#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	int a = 0, b = 2, x = 4, y = 0;

	cout << (a == b) << endl;
	cout << (a != y) << endl;
	cout << (b <= x) << endl;
	cout << (y > a) << endl;

	int score1, score2, score3;
	double average;

	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;
	if (average > 95)
		cout << "Congratulations! That's a high score!\n";

	//floating-point round off errors 

	double c = 1.5, d = 1.5;

	c += 0.0000000000000001;
	if (c == d)
		cout << "Both a and b are the same.\n";
	else
		cout << "a and b are not the same.\n";

	//if the value withint the if statement is 0, the statement will become false then the code within
	//the if statement will not be executed however if the value is anything but 0, the statement will be executed

	if (x + y)
		cout << "It is true!\n";

	//nested if statements

	char employed, recentGrad;

	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or ";
	cout << "N for No.\n";
	cout << "Are you employed?";

	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;
	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "You qualify for the special interest rate.\n";
		}
		else
		{
			cout << "You must have graduated from college in the past two years to qualify.\n";
		}
	}
	else
	{
		cout << "You must be employed to qualify for the special interest rate.\n";
	}

	int testScore;
	char grade;

	cout << "Enter your numeric test score and I will tell you the letter grade you earned: ";
	cin >> testScore;

	//4.16 Modifing code to display error

	if (testScore < 0)
		cout << "There is an error.\n";
	else {
		if (testScore < 60)
			cout << "Your grade is F.\n";
		else if (testScore < 70)
			cout << "Your grade is D.\n";
		else if (testScore < 80)
			cout << "Your grade is C.\n";
		else if (testScore < 90)
			cout << "Your grade is B.\n";
		else if (testScore <= 100)
			cout << "Your grade is A.\n";
	}

	//4.20 essentially slightly more efficient 4.16
	cout << "Enter your numeric test score and I will tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore < 0 || testScore>100)
	{
		cout << testScore << " is an invalid score.\n";
		cout << "Run the program again and enter a value in the range of 0 to 100.\n";
	}

	else
	{
		if (testScore < 60)
			grade = 'F';
		else if (testScore < 70)
			grade = 'D';
		else if (testScore < 80)
			grade = 'C';
		else if (testScore < 90)
			grade = 'B';
		else if (testScore <= 100)
			grade = 'A';
		cout << "Your grade is " << grade << endl;
	}

	//late variable definition

	cout << "What is your annual income? ";
	double income;
	cin >> income;
	cout << "How many years have you worked at your current job? ";
	int years;
	cin >> years;
	if (income >= 35000 || years > 5)
		cout << "You qualify.\n";
	else
	{
		cout << "You must earn at least $35,000 or have been employed for more than 5 years.\n";
	}

	//can't compare c-strings with relational operators. though it appears to test the strings for equality, that is NOT what happens.

	const int SIZE = 40;
	char firstString[SIZE], secondString[SIZE];

	cout << "Enter a string: ";
	cin.getline(firstString, SIZE);
	cout << "Enter another string: ";
	cin.getline(secondString, SIZE);
	if (firstString == secondString)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";

	//4.25

	int first, second, result;

	cout << "Enter a negative integer: ";
	cin >> first;
	cout << "Now enter a positive integer: ";
	cin >> second;

	if (first <= 0 && second >= 0)
	{
		result = first * second;
		cout << first << "times" << second << "is" << result << endl;
	}
	else
	{
		cout << "You have inputed invalid integers.\n";
	}




	return 0;
}