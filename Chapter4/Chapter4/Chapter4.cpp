#include <iostream>
#include<iomanip>
#include <cstring>
using namespace std;

int main() {

	int a = 0, b = 2, x = 4, y = 0;

	cout << (a == b) << endl;
	cout << (a != y) << endl;
	cout << (b <= x) << endl;
	cout << (y > a) << endl;

	int score1, score2, score3;
	double avg;

	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	avg = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << avg << endl;
	if (avg > 95)
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

	//tests two C-strings for equality with strcmp

	cout << "Enter a string: ";
	cin.getline(firstString, SIZE);
	cout << "Enter another string: ";
	cin.getline(secondString, SIZE);
	if (strcmp(firstString, secondString) == 0)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";

	//4.26 uses strcmp to compare string entered by user with valid stereo part numbers

	const double APRICE = 249.0, BPRICE = 299.0;
	const int S = 9;
	char partNum[S];

	cout << "The stereo part numbers are: \n";
	cout << "\tBoom Box, part number S147-29A\n";
	cout << "\tShelf Model, part number S147 - 29B\n";
	cout << "Enter the part number of the stereo you wish to purchase: ";
	cin.width(S);	//Restricts input
	cin >> partNum;
	cout << fixed << showpoint << setprecision(2);
	if (strcmp(partNum, "S147-29A") == 0)
		cout << "The price is $" << APRICE << endl;
	else if (strcmp(partNum, "S147-29B") == 0)
		cout << "The price is $" << BPRICE << endl;
	else
		cout << partNum << " is not a valid part number.\n";

	//4.27 return value of strcmp to alphabetically sort two strings entered by the user

	const int L = 30;
	char name1[L], name2[L];

	cout << "Enter a name (last name first): ";
	cin.getline(name1, L);
	cout << "Enter another name: ";
	cin.getline(name2, L);
	cout << "Here are the names sorted alphabetically:\n";
	if (strcmp(name1, name2) < 0)
		cout << name1 << endl << name2 << endl;
	else if (strcmp(name1, name2) > 0)
		cout << name2 << endl << name1 << endl;
	else
		cout << "You entered the same name twice!\n";

	//4.29 creating your own if statment using strcmp

	const int SIZ = 20;
	char iceCream[SIZ];

	cout << "What flabor of ice cream do you like best? ";
	cout << "Chocolate, Vanilla, or Pralines and Pecan? ";
	cin.getline(iceCream, SIZ);
	cout << "Here is the number of fat grams for a half cup serving: \n";

	if (!strcmp(iceCream, "Chocolate"))
		cout << "Chocolate : 9 fat grams.\n";
	else if (!strcmp(iceCream, "Vanilla"))
		cout << "Vanilla: 10 fat grams.\n";
	else if (!strcmp(iceCream, "Praline and Pecan"))
		cout << "Pralines & Pecan: 14 fat grams.\n";
	else
		cout << "That's not one of our flabors!\n";

	//4.28 calculates a consultant's charges at $50 per hour, for a min. of 5 hours. The ?: operator adjusts hours to 5 if less than 5 hours were worked.

	const double PAY_RATE = 50.0;
	double hours, charges;

	cout << "How many hors were worked? ";
	cin >> hours;
	hours = hours < 5 ? 5 : hours;
	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(2);
	cout << "The charges are $" << charges << endl;

	//4.30

	int z, population, base = 1, temp = 46;
	double wages;

	x > y ? z = 1 : z = 20;

	population = temp > 45 ? base * 10 : base * 2;

	hours = 41;
	wages = 18;

	wages *= hours > 40 ? 1.5 : 1;

	result >= 0 ? cout << "The result is positive.\n" : cout << "The result is negative.\n";

	//4.31

	int j, k = 0, factor;

	if (k > 90)
		j = 57;
	else
		j = 12;

	if (x >= 10)
		factor = y * 22;
	else
		factor = y * 35;

	//4.29 switch statement tels the user something he/she already knows, what they entered.

	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;

	switch (choice)
	{
	case 'A':	cout << "You entered A.\n";
		break;
	case 'B':	cout << "You entered B.\n";
		break;
	case 'C':	cout << "You entered c.\n";
		break;
	default:	cout << "You did not enter A, B, or C!\n";
	}

	int modelNum;

	cout << "Our TVs come in three models:\n";
	cout << "The 100, 200, and 300. Which do you want? ";
	cin >> modelNum;
	cout << "That model has the following features:\n";
	switch (modelNum) {

	case 300:cout << "\tPicture-in-a-picture.\n";
	case 200:cout << "\tStereo sound.\n";
	case 100:cout << "\tRemote control.\n";
		break;
	default:cout << "You can only choose the 100, 200, or 300.\n";
	}

	//4.32 switch statement in program uses the "fall through" feature to catch both upper and lowercase letters entered by user.

	char feedGrade;

	cout << "Our dog food is available in three grades:\n";
	cout << "A, B, and C. Which do you want pricing for? ";
	cin >> feedGrade;
	switch (feedGrade) {
	case'a':
	case'A':	cout << "30 cents per pound.\n";
		break;
	case'b':
	case'B':	cout << "30 cents per pound.\n";
		break;
	case'c':
	case'C':	cout << "30 cents per pound.\n";
		break;
	default:	cout << "That is an invalid choice.\n";
	}


	//review
	//31

	if (y == 0)
		x = 100;

	//32
	if (y == 10)
		x = 0;
	else
		x = 1;

	//33
	double cr, sales = 0;

	if (sales < 10000)
		cr = .10;
	else if (sales > 10000 && sales < 15000)
		cr = .15;
	else
		cr = .20;

	//34
	int minimum = 0;

	if (x == 12)
	{
		minimum++;
	}
	if (minimum > 0)
		hours = 10;

	//35
	int amount1, amount2;

	cout << "Enter in 2 amounts greater than 10 and less than 100 separated by a space: ";
	cin >> amount1 >> amount2;

	if (amount1 > 10 && amount2 < 100)
		if (amount1 > amount2)
			cout << "Amount 1 was greater\n";
		else
			cout << "Amount 2 was greater\n";
	else
		cout << "Please input valid values.\n";

	//36
	if (grade >= 0 && grade <= 100)
		cout << "The number is valid\n";

	//37
	if (temp >= -50 && temp <= 150)
		cout << "This number is valid\n";

	//38
	if (hours < 0 || hours >80)
		cout << "The number is not valid\n";

	//39
	const int LEN = 20;
	char title1[LEN], title2[LEN];

	cout << "Enter in 2 titles and I will sort them in alphabetical order, enter one then enter the other after: ";
	cin.getline(title1, LEN);
	cin.getline(title2, LEN);
	if (strcmp(title1, title2) > 0)
		cout << title1 << " " << title2 << endl;
	else
		cout << title2 << " " << title1 << endl;

	//40
	int ch;

	cout << "Enter your choice, 1-4: ";
	cin >> ch;

	switch (ch) {
	case 1:cout << fixed << showpoint << setprecision(2);
		break;
	case 2:
	case 3:cout << fixed << showpoint << setprecision(4);
		break;
	case 4:cout << fixed << showpoint << setprecision(6);
		break;
	default:cout << fixed << showpoint << setprecision(8);
		break;
	}

	//58 fixed
	float average;
	bool perfectScore;

	cout << "Enter your 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0f;
	if (average == 100) 
		perfectScore = true;
	cout << "Your average is " << average << endl;
	if (perfectScore) {
		cout << "Contratulations!\n";
		cout << "That's a perfect score.\n";
		cout << "You deserve a pat on the back!\n";
	}

	//Programming 
	//1
	int number1, number2;
	cout << "Please enter 2 numbers: ";
	cin >> number1 >> number2;

	if (number1 != number2)
		if (number1 > number2)
			cout << number1 << " is bigger than " << number2 << endl;
		else
			cout << number2 << " is bigger than " << number1 << endl;
	else
		cout << "Please enter a valid input.\n";

	//2
	cout << "Enter a number from the range 1 to 10: ";
	cin >> number1;
		
	switch (number1) {
	case 1:
		cout << "I\n";
		break;
	case 2:
		cout << "II\n";
		break;
	case 3:
		cout << "III\n";
		break;
	case 4:
		cout << "IV\n";
		break;
	case 5:
		cout << "V\n";
		break;
	case 6:
		cout << "VI\n";
		break;
	case 7:
		cout << "VII\n";
		break;
	case 8:
		cout << "VIII\n";
		break;
	case 9:
		cout << "IX\n";
		break;
	case 10:
		cout << "X\n";
		break;
	default:
		cout << "You have entered an invalid number.\n";

	}

	//3
	char state[2];
	cout << "Please enter a state abbreviation: NC, SC, GA, FL, or AL.\n";
	cin >> state;
	
	if (state == "NC")
		cout << "North Carolina\n";
	else if (state == "SC")
		cout << "South Carolina\n";
	else if (state == "GA")
		cout << "Georgia\n";
	else if (state == "FL")
		cout << "Florida\n";
	else if (state == "AL")
		cout << "Alabama\n";
	else
		cout << "Invalid input.\n";

	return 0;
}