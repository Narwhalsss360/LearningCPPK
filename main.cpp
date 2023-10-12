//This is a comment.

//Including the code for in/out terminal streams.
#include <iostream>

/*
	Creating a function:
		-Called f
		-Promises to return a floating-point integer(decimal)
		-Takes in one parameter (float) as an argument called x

	Function usage:
		Plug in a number for x that is in the domain of f
		D -> (-inf, -1) U (-1, 1) U (1, inf)

	Returns:
		the evaluation if x is in the domain.
		if its not in the domain, then returns NAN
*/
float f(float x)
{
	//if x is -1 or 1
	if (x == -1 || x == 1)
	{
		/*
			The return statements stops the execution of the this function and returns the value specifed
			as the operand.

			usage:
				return <operand>;
				ex.
				return 4;
		*/
		return NAN;
	}

	return 1 / ((x * x) - 1);
}

/*
	Function that returns an int to the operating system as an exit code.
*/
int main()
{
	//Declaring a floating-point integer(decimal) called x, then assigning its value to the evaluation of 1/15.
	float x = 1.0/15.0;
	
	//Declaring a floating-point integer(decimal) called y with no initial value.
	float y;

	//Calling the function f, with an argument of the value of x, then assigning it return value to y.
	y = f(x);

	/*
		using cout in the std namespace:
			used bit-shift left operator (<<)
			used string as operand 2,
			used a function as operand 3
	*/
	std::cout << "Printing to terminal" << std::endl;

	/*
		Printing the x and y coordinate.
	*/
	std::cout << "(" << x << ", " << y << ")" << std::endl;

	/*
		Below, use cin to get an x value from the user, then use that to find f(x), and show the user.
	*/

	return 0;
}