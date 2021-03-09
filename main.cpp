//Program displays prime and perfect numbers up to a user specified number
//Contestant ID:02-1360-0025

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string again;
int input;
int sum;
void isPerfect();
void isPrime();
void continueAgain();
const bool prime = 2^(input-1);
const bool perfect = (2^input-1)*2^(input-1);

int main()
{
	cout << "Prime & Perfect Number Generator";
	cout << "\n\nPlease enter a number to count up to: ";
	cin >> input;
	if (input == perfect || input == prime)
	{
		isPerfect();
		isPrime();
	}
	else
	{
		cout << "\n\nInvalid Input!";
		continueAgain();
	}
	while ((again == "Y") || (again == "y"))
  	{
	  	cout << "\n\nPlease enter another number to count up to: ";
	  	cin >> input;
		if (input == perfect || input == prime)
		{
			isPerfect();
			isPrime();
		}
		else
		{
			cout << "\n\nInvalid Input!";
			continueAgain();
		}
	}
	cout << "\n\nEnd of Program";
	return 0;
}
//Function Definitions
void isPerfect() //Checks if input is a perfect number
{
	/*for (input > 1; input = sum; input++)
	{
		cout << "Perfect Numbers: ";
	}*/
}
void isPrime() //Checks if input is a prime number
{
	/*for (input > 1; input%2; input++)
	{
		cout << "\nPrime Numbers";
	}*/
}
void continueAgain() //Asks if user would like to try again
{
	cout << "\n\n" << string(50,'-');
	cout << "\nWould you like to try again (Y/N)? ";
	cin >> again;
}