#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x; // reference 
    cout << y << " "; //10
    x = x + 5;
    cout << y << " "; //15
    y = y + 5;
    cout << x << " ";//20
    return 0;
}

#include <iostream>
using namespace std;

void swap(int x, int y) // (int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 10, y = 15;
    swap(x, y);
    cout << x << " " << y;
    return 0;
} // 10 15 without referneve            15 10 with reference 


#include <iostream>
#include <bits/stdc++.h>  
 // Avoid copying of large ojects during function call
using namespace std;

void Print(vector<int> &v) // reference
{
    for(auto x: v)
        cout << x << " ";
}

int main()
{
    vector<int> v;
    for (int i = 0; i<1000; i++)
        v.push_back(i);
    Print(v);
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

// modification in for each loop

int main() 
{
    vector<int> vect{10, 20, 30, 40};
    for(auto &x: vect)                    // for(auto x: vect)
        x = x+5;
    for (auto x: vect)
        cout << x << " ";
    return 0;
} // 15 25 35 45                               without reference 10 20 30 40


#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

// Avoiding copy of large objects in each for each loop --> no copy created
int main() 
{
    vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};
    for (auto &x: vect)
        cout << x << " ";
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

int main() 
{
    vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};
    for (const auto &x: vect)
        cout << x << " ";
    return 0;
}

#include <iostream>
using namespace std;

int main() 
{
    int x = 10, z = 20;
    int &y = x; // refernce
    y = z;
    y = y+5;
    cout << x << " " << y << " " << z;   // 25 25 20  reference can be only for one i.e., unique 
    return 0;
}

#include <iostream>
using namespace std;

int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    int &z = fun();
    cout << fun() << " "; //10
    z = 30;
    cout << fun();  //30
    return 0;
}
