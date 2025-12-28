#include <iostream>
using namespace std;
int main()
{
// what is pointer ---> a datTYPE OFCOURSE which holds the "ADDRESS" of another datatype 
//if there are two humans a and b and human a knows the "address" of human b then human a is a pointer human

int i = 45;
int* j = &i;
int** k= &j;

//*(value at)---> dereferencing operator
//&(address at)---> adress of operator
cout<<j<<endl;   //now it will show the address of i in memory
//j and &i will show the same result 0x61ff08(an address of memory)
cout<<*j<<endl;  //now it will show the value of i which is carried by j
cout<<**k<<endl;
    return 0;
}
