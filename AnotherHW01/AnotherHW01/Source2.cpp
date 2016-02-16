#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//This is assignment 1: 2/16/16
//This function will determine if a student has passed a test using two random numbers and a box question.
void ex02()
{
	//Intializes terms
	bool hasPassedTest = true;
	int x = rand() % 100;
	int y = rand() % 100;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	//Determines if the numbers are greater or lesser
	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	if (x < y)
	{
		cout << "x is less than y" << endl;
	}
	if (x == y)
	{
		cout << "x and y are equal" << endl;
	}
	//Part C: asks for a number and output whether it is greater than or less than 100.
	int numberOfShares;
	cout << "Enter a number." << endl;
	cin >> numberOfShares;
	if (numberOfShares > 100)
	{
		cout << "The Number Is Greater than 100." << endl;
	}
	if (numberOfShares < 100)
	{
		cout << "The Number Is Less than 100." << endl;
	}
	if (numberOfShares == 100)
	{
		cout << "The Number is Equal to 100." << endl;
	}

	//Part D: The box and book length will be prompted
	int bookl;
	int bookw;
	cout << "Enter the width of a book." << endl;
	cin >> bookw;
	cout << "Enter the length of a book." << endl;
	cin >> bookl;

	int divisible = bookw / bookl;

	if (bookw % bookl == 0)
	{
		cout << "This divides evenly." << endl;
	}
	else
	{
		cout << "This does not divide evenly." << endl;
	}
	//Part E: What is the shelf life
	int shelflife;
	int temperature;
	cout << "Enter how many days a box of chocolates has until it expires. (Enter the shelf life)" << endl;
	cin >> shelflife;
	cout << "Enter the outside temperature (in F) " << endl;
	cin >> temperature;
	if (temperature > 90)
	{
		cout << "It is so hot the chocolate will expire in " << temperature - 4 << " instead of " << temperature << endl;
	}
}

//the third part of the assignment
void ex03()
{
	//Part a: area of the square
	int boxarea;
	cout << "Enter the area of a box." << endl;
	cin >> boxarea;
	cout << "The length of each side is: " << sqrt(boxarea) << endl;
	//Part b: Inputing y or n as characters
	char ans;
	cout << "Yes or no? Please input 'y' or 'n'." << endl;
	cin >> ans;
	if (ans == 'y' || 'Y')
	{
		cout << "Yes." << endl;
	}
	if (ans == 'n' || 'N')
	{
		cout << "No." << endl;
	}
	else
	{
		cout << "Error." << endl;
	}
	//Part C: the Tab variable?
	char tab = '\t';
	//Part D: declare a string and ask for a mailing address
	string mailingAddress;
	cout << "What is your mailing address?" << endl;
	cin >> mailingAddress;
	//Part E: Intialize a variable to the empty string
	string empty = ("what");
}
//These functions are related to ex04
int function(int l)
{
	int f = l * 2;

	return f;
}

int addition(int s, int t)
{
	int sum = s + t;

	return sum;
}

void original(int g)
{
	int l = g + 1;
}

void ex04()
{
	//Part a: make a loop asking user for 1-10
	int i = 0;
	do
	{
		cout << "Enter a number between 1 and 10." << endl;
		cin >> i;
	} while (i <= 1 || i >= 10);
	//Part b: Us "i" to make a square
	cout << "The square of the number is " << i*i*i << "." << endl;
	//Part c: do-while loop to out put * from a
	do
	{
		for (int m = 0; m < i; m++)
			cout << "*" << endl;
	} while (i <= 1 || i >= 10);
	//Part d: Use a for Loop to out put even numbers from 0 to 40
	for (int j = 0; j < 21; j++)
	{
		cout << 2 * j << " " << endl;
	}
	//Part e: see the function labeled function above function ex04
	int number;
	cout << "Enter a number." << endl;
	cin >> number;
	cout << "Double that number is equal to: " << function(number) << "." << endl;
	//Part f: enter two numbers and find the sum function is labeled addition
	int s = rand() % 100;
	int t = rand() % 100;
	cout << " I have two numbers. " << s << " and " << t << endl;
	cout << "The sum of these two numbers is " << addition(s, t) << endl;
	//Part g: Output of the "original function"
	int parameter;
	cout << "Enter a number. " << endl;
	cin >> parameter;
	original(parameter);
}
void p(const int list[], int size)
{
	for (int u = 0; u < size; u++)
	{
		cout << list[u] << endl;
	}

}
void b(const int list[], int size)
{
	int value;
	int m = 0;
	cout << "Enter a value (and we will see if it is in the array)." << endl;
	cin >> value;

	for (int u = 0; u < size; u++)
	{
		if (list[u] == value)
		{
			cout << "Yes, there is a value." << endl;
		}
		else
		{
			cout << "Nope. Not for size " << u << "." << endl;
			m++;
		}
	}
	if (m == size)
	{
		cout << "There are no values in the array that match." << endl;
	}
	else
	{
		cout << "There was atleast one part of the array that had that value." << endl;
	}

}

void ex05()
{
	//Part a: ask for 5 ints and store in array
	int theList[5];
	for (int k = 0; k < 5; k++)
	{
		cout << "Enter a number." << endl;
		cin >> theList[k];
	}
	//Part B: add those ints
	int r;
	int e;
	cout << "Which two numbers would you like the sum of? The first of the number just entered; enter 0." << endl;
	cin >> r;
	cin >> e;
	cout << "The sum is " << theList[r] + theList[e] << endl;
	cout << "Which two numbers would you like the product of? The first of the number just entered; enter 0. If you want the fifth, enter 4." << endl;
	cin >> r;
	cin >> e;
	cout << "The product is " << theList[r] * theList[e] << endl;
	//Part C: See the Function above ex05 prints out the values in the array
	cout << "The numbers in the array are " << endl;
	p(theList, 5);
	//Part D: See the function b -- asks user for a value. Outputs if the array has that value.
	b(theList, 5);
}
int main()
{
	int n = 0;
	cout << "Which function would you like to view? ex02 = 2; ex03 = 3; ex04 = 4; and ex05 = 5." << endl;
	cin >> n;
	if (n == 2)
	{
		ex02();
	}
	if (n == 3)
	{
		ex03();
	}
	if (n == 4)
	{
		ex04();
	}
	if (n == 5)
	{
		ex05();
	}
	else
	{
		cout << "Error." << endl;
	}
	return 0;
}