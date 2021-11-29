#include "std_lib_facilities.h"
#include <iostream>


int main()

{
	string operation;
	double x = 0;	
	double y = 0;	
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two values separated by a space: ";
	
	while(cin >> operation >> x >> y)
     {
		double result = 0;
		if (operation=="plus" || operation=="+")
        {
        result = x+y;
        }
        else if (operation=="minus" || operation=="-") 
        {
        result = x-y;
		}
        else if (operation=="mul" || operation=="*") 
        {
        result = x*y;
        }
		else if (operation=="div" || operation=="/") 
        {
			if (y==0) error("trying to divide by zero");
            {
                result = x/y;
            }

		}

		cout << x << operation << y << " = " << result <<'\n';
		cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two values separated by a space: ";
	}
}

