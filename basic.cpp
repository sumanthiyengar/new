#include<iostream>
using namespace std ;
int main()
{   
    cout << sizeof(int)       << "\n"
         << sizeof(char)      << "\n"
         << sizeof(long long) << "\n"
         << sizeof(float)     << "\n"
         << sizeof(10ll)      << "\n"   // long long
         << sizeof(3.4)       << "\n"
         << sizeof(3.4f)      << "\n" ; 
    int var = 5 ;
    cout << sizeof(var ++) << "\n" ; 
    cout << var << "\n" ; 
    return 0 ;
}

/* 4
1
8
4
8
8
4
4
5
*/

#include<iostream>
using namespace std ;
int x, y; 
int main()
{   
    int y = 2 ;
    {
        int y = 3 ; 
        cout << x << "  " << y ;
    }
    return 0 ;
}
// 0  3

// outside function - global variable - if not initialised - 0 op
// local variable -  within function cannot acces everywhere

// function created inside - will be considered - scope

// canot have 2 variable in a scope

//    RANGE 

/*char - (+-)2^7 - bits 8
unsigned char 0-255
short 16
int/unsigned 32
long long 64
unsigned long long 64
float 32
double 64
bool 8
*/


// STATIC VARIABLE 
// when u run without init =0
// same value can be accesed 
// shares same data members 



// CONSTANT - cannot change -- compiler error 
// by using pointers can change 
// #define PI 3.14 --> alternative 



//AUTO --> it adjusts the value -- it automatically the data type 
// #include<typeinfo>--> typeid(a)
// no conversion needed 
// lambda expression 

// LITERALS -- const value in prog 
// 0x1A ->hexadecimal 
//016-> octal values
//0b11 -> binary  

//124u-unsigned  123l - long

//10.1f float     10.525 double    200.1e-80 power 

// char single quote
// string double quote

