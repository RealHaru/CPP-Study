#include <iostream>
#include<iomanip>
#include <cstring>
using namespace std;

int main() {
	/*
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

	//4
	int v1, v2, answer;
	v1 = rand() % 1000;
	v2 = rand() % 1000;

	cout << v1 << " + " << v2 << " = " << " ? : ";
	cin >> answer;
	if (answer == (v1 + v2))
		cout << "Congrats! That's the right answer!\n";
	else
		cout << "Your answer was incorrect. :(\n";

	//5
	double unitsSold = 0, discount = 0, totalDue;
	cout << "Please enter in the number of units sold: ";
	cin >> unitsSold;

	if (unitsSold > 9 && unitsSold < 20)
		discount = 20;
	else if (unitsSold > 19 && unitsSold < 50)
		discount = 30;
	else if (unitsSold > 49 && unitsSold < 100)
		discount = 40;
	else if (unitsSold > 100)
		discount = 50;
	else
		cout << "This is an invalid input!\n";

	totalDue = (unitsSold * 99) - (unitsSold * .01 * discount);

	if (discount >= 20) {
		cout << "Your discount is %" << discount << ".\n";
		cout << "Your total amount due is : " << totalDue;
	}

	//6
	double balance, fee = 10, charge;
	int checks;


	cout << "Please enter in your balance: ";
	cin >> balance;
	cout << "Please enter in the amount of checks you have written: ";
	cin >> checks;

	if (balance < 400)
		fee += 15;

	if (checks < 20 && checks >= 0)
		charge = .1;
	else if (checks < 40 && checks > 19)
		charge = .08;
	else if (checks < 60 && checks > 39)
		charge = .06;
	else if (checks >= 60)
		charge = .04;
	else
		cout << "That is an invalid input!\n";

	if (checks >= 0) {
		fee += (charge * checks);
		cout << "Your fee is " << fee << "." << endl;
	}
	if (balance < 0)
		cout << "URGENT! Your account is overdrawn!\n";

	//7
	const int WEIGHT_MIN   =    0, WEIGHT_MAX   =   20, DISTANCE_MIN =   10, DISTANCE_MAX = 3000;

	float package_weight, distance, total_charges;

	cout << "\nWhat is the weight (kg) of the package? ";
	cin >> package_weight;

	if (package_weight <= WEIGHT_MIN ||
		package_weight > WEIGHT_MAX)
	{
		cout << "\nWe're sorry, package weight must be more than 0kg and less than 20kg. Rerun the program and try again.\n" << endl;
	}
	else
	{
		cout << "\nDistance? ";
		cin >> distance;

		if (distance < DISTANCE_MIN || distance > DISTANCE_MAX)
		{
			cout << "\nThe distance must be within 10 and 3000 miles. Rerun the program and try again.\n";
		}
		else
		{
			 if (package_weight <= 2)
				total_charges = (distance / 500) * 1.10;
			else if (package_weight > 2 &&
					package_weight <= 6)
				total_charges = (distance / 500) * 2.20;
			else if (package_weight > 6 &&
					package_weight <= 10)
				total_charges = (distance / 500) * 3.70;
			else if (package_weight > 10 &&
					package_weight <= 20)
				total_charges = (distance / 500) * 4.80;

			cout << setprecision(2) << fixed << "Total charges are $" << total_charges
				<< "\nFor a distance of " << distance << " miles\nand a total weight of " << package_weight << "kg." << endl;
		}

	}

	//8
	float calories_from_fat, fat_grams, percentage_of_calories, total_calories;

	cout << "Enter number of calories: ";
	cin >> total_calories;

	if (total_calories > 0)
	{
		cout << "Enter number of fat grams: ";
		cin >> fat_grams;

		if (fat_grams > 0)
		{
			calories_from_fat = fat_grams * 9;
			percentage_of_calories = (calories_from_fat / total_calories) * 100; // .45 == 45

			if (calories_from_fat > total_calories)
			{
				cout << "\nCalories from fat cannot be greater\n";
				cout << "then the total number of calories." << endl;
				cout << "Either the total calories or fat\n";
				cout << "grams were entered incorrectly." << endl;
				cout << "Rerun the program and try again." << endl << endl;
			}
			else
			{
				cout << "Total calories\t\t\t\t= " << total_calories << " cal"<< endl;
				cout << "Total fat grams\t\t\t\t= " << fat_grams << " g" << endl;
				cout << "Total calories from fat\t\t\t= " << calories_from_fat << " cal from fat"<< endl;
				cout << "Total percentage of calories from fat\t= " << percentage_of_calories << '%' << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Invalid input.\n";
			cout << "Rerun the progarm and try again." << endl;
		}
	}
	else
	{
		cout << "Total calories must be more than 0.\n";
		cout << "Rerun the progarm and try again." << endl;
	}
	
	//9

	string runner1, runner2, runner3;
	int time1, time2, time3;

	cout << "Please enter in runner 1's name: ";
	cin >> runner1;
	cout << "Please enter their time: ";
	cin >> time1;

	cout << "Please enter in runner 2's name: ";
	cin >> runner2;
	cout << "Please enter their time: ";
	cin >> time2;

	cout << "Please enter in runner 3's name: ";
	cin >> runner3;
	cout << "Please enter their time: ";
	cin >> time3;
	

	if (time1 < 0 ||
		time2 < 0 ||
		time3 < 0)
	{
		cout << "Error. Runner times must be\n"
			<< "0 or greater.\n"
			<< "Rerun the program and try again."
			<< endl;
	}
	else
	{
		if (time1 < time2)
		{
			if (time1 < time3)
			{
				cout << "\nFirst Place: " << runner1 << " at " << time1 << endl;
				if (time2 < time3)
				{
					cout << "Second Place: " << runner2 << " at " << time2 << endl;
					cout << "Third Place: " << runner3 << " at " << time3 << endl;
				}
				else
				{
					cout << "Second Place: " << runner3 << " at " << time3 << endl;
					cout << "Third Place: " << runner2 << " at " << time2 << endl;
				}
			}
		}
		if (time2 < time3)
		{
			if (time2 < time1)
			{
				cout << "\nFirst Place: "<< runner2 << " at "<< time2<< endl;
				if (time1 < time3)
				{
					cout << "Second Place: "<< runner1 << " at "<< time1<< endl;
					cout << "Third Place: "<< runner3 << " at "<< time3<< endl;
				}
				else
				{
					cout << "Second Place: " << runner3 << " at " << time3 << endl;
					cout << "Third Place: " << runner1 << " at " << time1 << endl;
				}
			}
		}
		if (time3 < time2)
		{
			if (time3 < time1)
			{
				cout << "\nFirst Place: " << runner3 << " at " << time3 << endl;
				if (time1 > time2)
				{
					cout << "Second Place: " << runner1 << " at " << time1 << endl;
					cout << "Third Place: "<< runner2 << " at "<< time2<< endl;
				}
				else
				{
					cout << "Second Place: " << runner2 << " at " << time2 << endl;
					cout << "Third Place: " << runner1 << " at " << time1 << endl;
				}
			}
		}
	}
	
	//10
	double wavelength;

    cout << "Enter wavelength in meters: ";
    cin >> wavelength; 

    if (wavelength >= 1E-2)
        cout << "Radio Waves" << endl;
    else if (wavelength <= 1E-2 && wavelength >= 1E-3)
        cout << "Microwaves" << endl;
    else if (wavelength <= 1E-3 && wavelength >= 7E-7)
        cout << "Infrared" << endl;
    else if (wavelength <= 7E-7 && wavelength >= 4E-7)
        cout << "Visible Light" << endl;
    else if (wavelength <= 4E-7 && wavelength >= 1E-8)
        cout << "Ultraviolet" << endl;
    else if (wavelength <= 1E-8 && wavelength >= 1E-11)
        cout << "X Rays" << endl;
    else if (wavelength <= 1E-11)
        cout << "Gamma Rays" << endl;
	
	//11
	
	int pick, radius, length, width;


	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cin >> pick;

	switch (pick)
	{
	case 1:
		cout << "What is the radius of the circle? : ";
		cin >> radius;
		cout << "The area of the cricle is " << pow(radius, 2) * 3.14159 << endl;
		break;
	case 2:
		cout << "What is the length and width of the rectangle(separate with a space)?: ";
		cin >> length >> width;
		cout << "The area of the rectangle is " << length * width << endl;
		break;
	case 3:
		cout << "What is the legnth of the base of the triangle and what is the height of the triangle(separate with a space)? : ";
		cin >> length >> width;
		cout << "The area of the triangle is " << (length * width) * (1 / 2);
		break;
	case 4:
		cout << "Thank you for your time!\n";
		break;
	default:
		cout << "That is not a valid input.";
		break;
	}
	
	//12
	int feet, selection, dist;
	const int AIR = 1100, WATER = 4900, STEEL = 16400;
	cout << "1. Air\t\t\t 1,100 feet per second\n";
	cout << "2. Water\t\t 4,900 feet per second\n";
	cout << "3. Steel\t\t 16,400 feet per second\n";
	cout << "Please enter your selection: ";
	cin >> selection;
	cout << "Enter the distance a sound wave will travel in feet: ";
	cin >> feet;

	if (feet < 0)
		cout << "This is an invalid input!\n";
	else
	{
		switch (selection)
		{
		case 1:
			dist = feet / AIR;
			break;
		case 2:
			dist = feet / WATER;
			break;
		case 3:
			dist = feet / STEEL;
			break;
		default:
			cout << "That is an invalid input!\n";
			break;
		}
		cout << "The amount of time it will take is	around " << dist << " seconds." << endl;
	}
	
	//13
	float user_temp;

    cout << "Enter temperature: "; 
    cin >> user_temp;

    cout << "\nAt " 
         << user_temp 
         << " F these substances will either "
         << " freeze or boil.\n";
    
    if (user_temp <= 32)
    {
        cout << "\nFreeze:\n";
        cout << "--------" << endl;
        cout << "Water" << endl;

        if (user_temp <= -38)
        {
            cout << "Mercury" << endl;

            if (user_temp <= -173)
            {
                cout << "Ethyl alcohol" << endl;

                if (user_temp <= -362)
                {
                    cout << "Oxygen" << endl;
                }
            }
        }
        cout << endl;
    }

    if (user_temp >= -306)
    {
        cout << "Boil: \n";
        cout << "--------" << endl;
        cout << "Oxygen." << endl;

        if (user_temp >= 172)
        {
            cout << "Ethyl alcohol." << endl;

            if (user_temp >= 212)
            {
                cout << "Water" << endl;

                if (user_temp >= 676)
                {
                    cout << "Mercury" << endl;
                }
            }
        }
    }
	
	//14
	float starting_time;

    cout << "\nWhat is the starting time? (HH.MM) e.g. 07.46 is 7 hours and 46 minutes: ";
    cin >> starting_time;
    cout << endl;

    if (starting_time > 23.59)
    {
        cout << "Time must not exceed 23.59.\n";
        cout << "Rerun the program and try again." << endl;
    }
    else 
    {
        if ((starting_time - static_cast<int>(starting_time)) > .59)
        {
            cout << "The last two digits must NOT be greater than 59. Rerun the program and try again.\n";
        }
        else
        {
            float num_mins;

            cout << "How long did the call last? (HH.MM): ";
            cin >> num_mins;
            cout << endl;

            if((num_mins - static_cast<int>(num_mins)) > .59)
            {
                cout << "The last two digits must NOT be greater than 59. Rerun the program and try again.\n";
            }
            else
            {
                float total_charges;

                cout << setprecision(2) << fixed << "Total charges = $";

                if (starting_time >= 00.00 && starting_time <= 06.59)
                {
                    total_charges = num_mins * 0.05;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 07.00 && starting_time <= 19.00)
                {
                    total_charges = num_mins * 0.45;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 19.01 && starting_time <= 23.59)
                {
                    total_charges = num_mins * 0.20;
                    cout << total_charges << endl;
                }
            }
        }
    }
	
	//15

	float amount_due = 0;
	int hours_used, hours_compare;
	char package, month[10];
	bool error = true;
	const double PACKAGE_A_PRICE = 9.95, PACKAGE_B_PRICE = 14.95, PACKAGE_C_PRICE = 19.95, PACKAGE_A_HOURS = 2.00, PACKAGE_B_HOURS = 1.00;

	cout << "Package A: For $9.95 per month 10 hours are provided. Additional hours are $2.00 per hours.\n"
		<< "Package B: For $14.95 per month 20 hours are provided. Additional hours are $1.00 per hours.\n"
		<< "Package C: For $19.95 per month unlimited minutes provided.\n";

	cout << "Choose package: ";
	cin >> package;

	cout << "How many minutes used? ";
	cin >> hours_used;
	cout << "Please enter in the month: ";
	cin >> month;

	if(strcmp(month, "January") == 0)
	{
		hours_compare = 744;
			if (hours_compare < hours_used)
			{
				error = 1;
			}
	}
	else if (strcmp(month, "February") == 0)
	{
		hours_compare = 672;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "March") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "April") == 0)
	{
		hours_compare = 720;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "May") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "June") == 0)
	{
		hours_compare = 720;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "July") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "August") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "September") == 0)
	{
		hours_compare = 720;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "October") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "November") == 0)
	{
		hours_compare = 720;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}
	else if (strcmp(month, "December") == 0)
	{
		hours_compare = 744;
		if (hours_compare < hours_used)
		{
			error = 1;
		}
	}



	if (error == 1)
		cout << "Your number of hours used must not exceed the number of hours in a month.\n";
	else
	{
		if (hours_used < 0)
		{
			cout << "Hours must be greater than 0.\n"
				<< "Rerun the program and try again.\n";
		}
		else
		{
			cout << "Total monthly charges: ";
			if (package == 'a' || package == 'A')
			{
				amount_due = hours_used > 10 ? PACKAGE_A_PRICE + ((hours_used - 10.00) * PACKAGE_A_HOURS) : PACKAGE_A_PRICE;
			}
			else if (package == 'b' || package == 'B')
			{
				amount_due = hours_used > 20 ? PACKAGE_B_PRICE + ((hours_used - 20.00) * PACKAGE_B_HOURS) : PACKAGE_B_PRICE;
			}
			else if (package == 'c' || package == 'C')
			{
				amount_due = PACKAGE_C_PRICE;
			}

			double a, b, c;

			cout << amount_due << endl;
			if (package == 'a' || package == 'A')
			{
				amount_due = hours_used > 10 ? PACKAGE_A_PRICE + ((hours_used - 10.00) * PACKAGE_A_HOURS) : PACKAGE_A_PRICE;
				a = amount_due;
				amount_due = hours_used > 20 ? PACKAGE_B_PRICE + ((hours_used - 20.00) * PACKAGE_B_HOURS) : PACKAGE_B_PRICE;
				b = amount_due;
				amount_due = PACKAGE_C_PRICE;
				c = amount_due;


				if (a > b && b < c)
				{
					cout << "Package B will save you $" << a - b << "." << endl;
				}
				else if (a > c && c < b)
				{
					cout << "Package C will save you $" << a - c << "." << endl;
				}
				else {
					cout << "You have the best plan already.\n";
				}

			}
			else if (package == 'b' || package == 'B')
			{
				amount_due = hours_used > 20 ? PACKAGE_B_PRICE + ((hours_used - 20.00) * PACKAGE_B_HOURS) : PACKAGE_B_PRICE;
				a = amount_due;
				amount_due = hours_used > 20 ? PACKAGE_A_PRICE + ((hours_used - 20.00) * PACKAGE_A_HOURS) : PACKAGE_A_PRICE;
				b = amount_due;
				amount_due = PACKAGE_C_PRICE;
				c = amount_due;


				if (a > b && b < c)
				{
					cout << "Package A will save you $" << a - b << "." << endl;
				}
				else if (a > c && c < b)
				{
					cout << "Package C will save you $" << a - c << "." << endl;
				}
				else {
					cout << "You have the best plan already.\n";
				}
			}
			else if (package == 'c' || package == 'C')
			{
				amount_due = PACKAGE_C_PRICE;
				a = amount_due;
				amount_due = hours_used > 20 ? PACKAGE_B_PRICE + ((hours_used - 20.00) * PACKAGE_B_HOURS) : PACKAGE_B_PRICE;
				b = amount_due;
				amount_due = hours_used > 20 ? PACKAGE_A_PRICE + ((hours_used - 20.00) * PACKAGE_A_HOURS) : PACKAGE_A_PRICE;
				c = amount_due;


				if (a > b && b < c)
				{
					cout << "Package B will save you $" << a - b << "." << endl;
				}
				else if (a > c && c < b)
				{
					cout << "Package A will save you $" << a - c << "." << endl;
				}
				else {
					cout << "You have the best plan already.\n";
				}
			}
		}
	}
	*/
	
	
	

	return 0;
}