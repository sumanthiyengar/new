#include<iostream> 
using namespace std; 

int add(int a, int b)
{
    return (a+b); 
}

int main() 
{
    int a = 10, b = 20; 
    int res = add(a,b); 
    
    cout << res; 
    return 0; 
} //o/p--> 30


#include<iostream> 
using namespace std; 

void add(int a, int b)
{
    int x = a+b; 
    cout << x; 
}

int main() 
{
    int a = 10, b = 20; 
    
    add(a,b); 

    return 0; 
}


#include<iostream> 
using namespace std; 

void printHello()
{
    cout << "Hello "; 
}

int main() 
{
    cout << "Before printHello"; 
    
    printHello(); 
    
    cout << "After printHello"; 
    return 0; 
} //o/p--> Before printHello Hello After printHello


#include<iostream> 
using namespace std; 

void fun1()
{
    cout << "Inside fun1 "; 
}

void fun2() 
{
    cout << "fun2 begins "; 
    fun1(); 
    cout << "fun2 ends "; 
}
int main() 
{
    cout << "main begins ";
    fun2();
    cout << "main ends "; 
    return 0; 
}
//o/p-->  main begins fun2 begins Inside fun1 fun2 ends main ends 

#include<iostream> 
using namespace std; 

int myMax(int a, int b)
{
    if(a>b)
        return a; 
        
    return b; 
}
int main() 
{
    cout << myMax(10,20) << " " << myMax(20,10); 
    return 0; 
} //o/p--> 20 20


// inline function 
// Function overloading- same fn name for diff objects-OOPS-Polymorphism
// Default arguments-if ip is not given takes default vales

#include<iostream> 
using namespace std; 
#define add(x,y) x+y 
int main() 
{
    cout << 4 * add(10,20); 
    return 0; 
} //o/p--60 macro is used i.e.. 4*10+20

#include<iostream> 
using namespace std; 
inline int square(int x)
{
    return (x*x); 
}
int main() 
{
    cout << square(10); 
    return 0; 
}//o/p--> 100

#include<iostream> 
using namespace std; 
void print(int i)
{
    cout << i << " ";
}

void print(string s)
{
    cout << s << " ";
}
int main() 
{
    print(10);
    print("gfg");
    return 0; 
} // 10 gfg

#include<iostream> 
using namespace std; 

int add(int a, int b, int c = 0, int d = 0)
{
    return (a+b+c+d); 
}
int main() 
{
    cout << add(10,20,30); 
    return 0; 
} // 60



