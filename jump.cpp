//program that takes 10 pairs of no , for every pair(x,y) it prints x/y
#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<10; i++)
    {
        int x, y;
        cout << "Enter x and y ";
        cin >> x >> y;
        if (y == 0)
        {
            cout << "Invalid" << endl; 
            continue;
        }
    cout << x/y << " " <<endl;
    }
}

// break - to come out of loop
// return-takes out of function
// label - goto - not encouraged 

#include<iostream>
using namespace std;
// BREAK
int main()
{
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            break;
        cout << i << " ";
    }
} // o/p--> 0 1 2 3 4

// CONTINUE

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            continue;
        cout << i << " ";
    }
} //o/p--> 0 1 2 3 4 6 7 8 9 


#include<iostream>
using namespace std;

int main()
{
    cout << "Begin ";
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            return 0;
        cout << i << " ";
    }
    cout << "End";
} //op- Begin 0 1 2 3 4 



// goto 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;
    label1:
        cout << "Even";
        return 0;
    label2:
        cout << "Odd";
} //op--even or odd 



#include<iostream>
using namespace std;

int main()
{
    begin:
        int n;
        cout << "Enter a number ";
        cin >> n;
        if (n % 2 == 0)
            goto begin;
        else
            goto label2;
        label1:
            cout << "Even";
        label2:
            cout << "Odd";
} //o/p--> Infinite loop doesnot terminate