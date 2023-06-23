#include<iostream>
using namespace std;

union Test{
    int x;
    int y;
};
                    // Alloted in same memory 

int main()
{
    Test t;
    t.x = 10;
    cout << t.x << ' ' << t.y << '\n';
    t.y = 20;
    cout << t.x << ' ' << t.y << '\n';
    cout << sizeof(t);
    return 0;
} 
// 10 10
// 20 20 

#include<iostream>
using namespace std;

union Test{
    int x;
    char y;
    double z;
};


int main()
{
    cout << sizeof(Test); // size of largest data type
    return 0;
}    // 8

#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    union
    {
        struct
        {
            Node *left, *right;  // Doubly LL
        };
        struct
        {
            Node *prev, *next;    // BT
        };
    };
    Node(int x)
    {
        data = x;
    }
};