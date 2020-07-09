/* @author JT Kelly
 * Date Created: 9/09/19
 * Date Due: 9/11/19
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Create the variables for the integers to be taken in
	int a = 0;
	int b = 0;

	//Take in two integers to find the gcd for
	cout << "Enter two positive integers: ";
	cin >> a >> b;

	//Create the variables to help find the gcd
	int u = 1;
	int g = a;
	int x = 0;
	int y = b;
	int q = 0;
	int t = 0;
	int s = 0;

	//Make sure both of the integers entered are positive
	if (a <= 0 || b <= 0)
	{
		//If one isn't positive, throw an error
		cout << "\nError: required two positive integers";
		system ("pause");
	}
	else
	{
	//If they are both positive, find the gcd of the two numbers
	while (y != 0)
	{
		q = g / y;
		t = g % y;
		s = u - q * x;
		u = x;
		g = y;
		x = s;
		y = t;
	}

	int v = (g - a * u) / b;

	//Output the result
	cout << "\nThe greatest common divisor of " << a << " and " << b << " is " << g << endl << endl;
	cout << "As an equation: " << endl;
	cout << a << " * " << u << " + " << b << " * " << v << " = " << g << endl;
	system("pause");
	}

}
