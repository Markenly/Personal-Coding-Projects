#include <iostream> //standard library for i/o
#include <math.h>

/*Here is the setup.
You’re a backend developer and you need to write a code that outputs an integer, a multiple of 10, between 0 & 100 given a rational number as input, a number between 0 & 1.
Purpose: That number is used to reference a css rule used to generate a graphic that represents a sliding rating bar (see image below).  An example of input would be 0.8333 and your code needs to output 80.
*/

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
