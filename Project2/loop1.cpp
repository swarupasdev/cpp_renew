#include <iostream>
using namespace std;

int main()
{
	
	// if I want to print Hello world 5 times then 
	/*
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	*/
	// If  want to print a lot of times using output function again n again is not efficient
	// That is why there is looping 

	for (int i = 0; i < 5; i++)		//initialized as i= 0 while the loop is going to run 0 to less than 5 means 0 to 4 is 5 times and i++ will further carry this loop 
	{
		cout << "hello world" << endl;
	}
	return 0;

}

