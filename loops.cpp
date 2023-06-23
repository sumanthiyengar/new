// to do something repeatedly
// iterate through arr,list
//run something forever

for (i=o;/*initialisation*/i<10;/*conditional stat*/i++/*after loop*/)
// init only once 
#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i = 0; i < 10; i++)
        cout << "GfG";
}

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
        cout << "GfG";
}

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10; i++){
        cout << "GfG";
        cout << i;
    }
}

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 10;)
    {
        cout << "GfG";
        cout << " ";
        i++;
    }
} //GfG GfG GfG GfG GfG GfG GfG GfG GfG GfG 

#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    for(;;)   // INFINITE TIMES 
    {
        cout << "GfG";
        cout << " ";
        i++;
    }
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    for(int i = 1; i <= 10; i++)
        cout << (n*i) << " ";
}
// Enter a number2 4 6 8 10 12 14 16 18 20 

//WHILE LOOP 
// condition inside loop - i++ inside braces 
// iterate through arr , mult , div- FOR LOOP 
//if complex - WHILE LOOP inc anywhere 
#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i<10)
    {
        cout<<"GfG";
        cout<<" ";
        i++;
    }
} //GfG GfG GfG GfG GfG GfG GfG GfG GfG GfG 

// DO WHILE LOOP

#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    do{             // executed once then checks condition
        cout << "GfG";
        i++;
    } while (i<10);
}

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i=i+2)
        cout << i << " ";
} // 0 2 4 6 8 

#include<iostream>
using namespace std;

int main()
{
    while(20)
        cout << "Hello";
} //INFINITE TIMES 