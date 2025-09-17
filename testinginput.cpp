/*File name - testinginput.cpp
*Programmer - Sean G
*Requirements
*
*/

#include <iostream>
using namespace std;

int main()
{
    char alpha;
    int number1 = 100, number2 = 200;

	cout << "Please enter your character name when you are ready";
    //cin >> alpha;
	cin.get(alpha);
    cout << number1 + number2;

    number1 = 100;
    number2 = 200;

    cout << number1 << endl;
	cout << number2 << endl;
    cout << "Please enter your answer when you are ready";
    cin.ignore(alpha);
	//cin >> alpha;
    cout << number1 + number2;


    cout << number1 + number2;
}


