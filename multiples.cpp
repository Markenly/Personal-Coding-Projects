#include <iostream> //standard library for i/o
#include <math.h>

using namespace std;

void main()
{
	int multiple;

	double input;

		cout << "Enter a rational whole number between 0 and 1";
		cin >> input;
		
		if (input >= 0 && input <= 0.10)
		{
			multiple= 10;
		
		}
		else if (input > 0.10 && input <= 0.20)
		{
			multiple = 20;
		}
		else if (input > 0.20 && input <= 0.30)
		{
			multiple = 30;
		}
		else if (input > 0.30 && input <= 0.40)
		{
			multiple = 40;
		}
		else if (input > 0.40 && input <= 0.50)
		{
			multiple = 50;
		}
		else if (input > 0.50 && input <= 0.60)
		{
			multiple = 60;
		}
		else if (input > 0.60 && input <= 0.70)
		{
			multiple = 70;
		}
		else if (input > 0.70 && input <= 0.80)
		{
			multiple = 80;
		}
		else if (input > 0.80 && input <= 0.90)
		{
			multiple = 90;
		}
		else
		{
			multiple = 100;
		}
		
		cout << multiple;