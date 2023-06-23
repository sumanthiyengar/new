// to store composite objects --> cartesian plain , we page , student information 
// struct allow to store multiple items of diff data type
// user defined data type

// struct keyword optional in c++

// acces using doy(.) operator

#include<iostream>
using namespace std;

typedef struct Point
{
  int x;
  int y;
}P;

int main()
{
    P p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " "
         << p.y;
    return 0;
} // 10 20


#include<iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student s = {101, "ABC", "xyz"};
    cout << s.rollNo << " " 
         << s.name   << " "
         << s.address<< "\n";
    return 0;
} //101 ABC xyz


//DESIGNATED INITIALISATION 

#include<stdio.h>

struct Point
{
  int x;
  int y;
};

int main()
{
    struct Point p = {.y = 10, .x = 20};
    printf("%d %d", p.x, p.y);
    return 0;
}  // 20 10

#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
    Point p = {10, 20};
    Point *ptr = &p;
    cout << ptr -> x << ' '; // to access the object or value 
    ptr -> x = 30; // change 
    cout << p.x;
    return 0;
} // 10 30

#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
    Point p[3];
    for(int i = 0; i < 3; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }
    for(int i = 0; i < 3; i ++)
    {
        cout << p[i].x << ' '
             << p[i].y << '\n';
    }
    return 0;
}/*0 0
    1 10
    2 20*/

#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

void print(Point p)
{
    cout << p.x << ' ' << p.y << '\n'; 
}
int main()
{
    Point p = {10,20};
    print(p);
    return 0;
} // 10 20


#include<iostream>
using namespace std;

struct Student
{
  int roll;
  int age;
  string name;
  string address;
};

void print(const Student &s)
{
   cout << s.roll << ' '
        << s.name << ' '
        << s.age  << ' '
        << s.address;
}

int main()
{
    Student s = {2323, 38, "Sandeep", "GFG"};
    print(s);
    return 0;
} // 2323 Sandeep 38 GFG


 

/*In class private by default and struct public by default
struct - cmposite data type , ll , mathematical prob
class - orgnsn problem , OOPS 
class and struct differs in inheritance also
*/


//STRUCTURE ALLIGNMENT 

// int - 4 bytes - specified to a address 
// in struct it is alligned acc to largest member 
