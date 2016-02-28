//-----------------------------------------------------------------
//	Michael Benson
//	Classes Quiz 2
//-----------------------------------------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

// Class Definition
class Fraction
{
	public:
		Fraction();
		
		void numInput();
		void denomInput();
		void displayFract();
		void displayDec();
	private:
		int num;
		int denom;
};

int main()
{
	Fraction fract;

	fract.numInput();
	fract.denomInput();	
	fract.displayFract();
	fract.displayDec();
	
	return 0;
}

// Default constructor conditions
Fraction::Fraction():num(0), denom(1)
{ /*Intentionally Empty*/ }

// Fraction numInput member function
void Fraction::numInput()
{
	cout << "Please input a numerator\n";
	cin >> num;
}

// Fraction denomInput member function
void Fraction::denomInput()
{
	bool accept = false;
	while (accept == false)
	{
		cout << "Please input a non-zero denom\n";
		cin >> denom;
		if (denom != 0)
			accept = true;
	}
}

// Fraction displayFract member function
//-------------------------------------------------------------------
// The modifications to this function are for purely astetic reasons
// so you do not end up with a negative denominator and so you do not
// get a negative over a negative.
//-------------------------------------------------------------------
void Fraction::displayFract()
{
	int tempNum = num;
	int tempDenom = denom;
	if (denom < 0)
	{
		tempNum = num * -1;
		tempDenom = denom * -1;
	}
	cout << tempNum << "/" << tempDenom << endl;
}

// Fraction displayDec member function
void Fraction::displayDec()
{
	double answer;
	answer = static_cast<double>(num)/denom;
	cout << answer << endl;
}
