//2 types sytax error and semantic error 
/*#include <iostream>

//Syntax error:

int main( // missing closing brace
{
    int 1x; // variable name can't start with number
    std::cout << "Hi there"; << x +++ << '\n'; // extraneous semicolon, operator+++ does not exist
    return 0 // missing semicolon at end of statement
}
    */

#include <iostream>

int main()// missing closing brace
{
    int x; // variable name can't start with number
    std::cout << "Hi there" << x << '\n'; // extraneous semicolon, operator+++ does not exist
    return 0 ;// missing semicolon at end of statement
}

//Semantic error:
//a runtime semantic error

#include <iostream>

int add(int x, int y) // this function is supposed to perform addition
{
    return x - y; // but it doesn't due to the wrong operator being used
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n'; // should produce 8, but produces 2

    return 0;
}