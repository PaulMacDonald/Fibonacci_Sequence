/////////////////////////
//The Fibonacci Sequence
/////////////////////////

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int preceding = -1, current = 1, choice;
	int result;
	//Prompt User to Input Length of Sequence Desired
	cout << "Enter the highest number in the Fibonacci Sequence you'd like the table to go to: " << endl;
	cin >> choice;
	cout << endl << setw(5) << "  Place in Sequence" << "  " << " Number" << endl;

	//Loop for Aquiring Each Number in Sequence
	for (int x = 0; x <= choice; x++)
	{
		result = current + preceding; //The next number equals the two previous numbers
		preceding = current; //Move the current number's value back so it's now the previous number
		current = result; //Move the result's value back so it's now the current number

		//Display each number and it's place in the sequence
		cout << setw(10) << x << "     " << setw(11) << result << endl;
	}

	return 0;
}