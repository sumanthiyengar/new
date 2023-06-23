#include<iostream>
using namespace std;

int main()
{
    char str[] = "gfg";
    cout << str;
    return 0;
} // c type -- when we put ; auto /0 is added

#include<iostream>
using namespace std;

int main()
{
    char str[] = "gfg";
    cout << sizeof(str);
    return 0;
} // size is 4 --> /0 is counted 

#include<iostream>
using namespace std;

int main()
{
    char str[] = {'g', 'f', 'g'};
    cout << str;
    return 0;
} // g f g some other things will be printed 

#include<iostream>
using namespace std;

int main()
{
    char str[] = {'g', 'f', 'g', '\0'};
    cout << str;
    return 0;
} // gfg

// strlen(str) - length of string -traverse the char array until it finds /0

// strcmp(s1,s2)-  compares two string lexigographically

#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "abc";
    char s2[] = "bcd";
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "Greater";
    else if(res == 0)
        cout << "Same";
    else
        cout << "Smaller";
} // Smaller

// strcpy - copy - assign string 

// C++ strings recomended to perform operation

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[5];
    strcpy(str, "gfg");
    cout << str;
    return 0;
} // gfg

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << " ";
    str = str + "xyz";
    cout << str << " ";
    cout << str.substr(1, 3) << " ";
    cout << str.find("eek") << " ";
    return 0;
} // 13 geeksforgeeksxyz eek 1 


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[] = "abc";
    char s2[] = "bcd";
    if (s1 == s2)
        cout << "Same";
    else if(s1 < s2)
        cout << "Smaller";
    else
        cout << "Greater";
}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name";
    cin >> str;
    cout << "\nYour name is " << str;
    return 0;
} // Enter your name
//Your name is Sandeep

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name";
    getline(cin, str);        // IMPP
    cout << "\nYour name is " << str;
    return 0;
} // Enter your name
//Your name is Sandeep Jain

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    for (int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
    for (char x: str)
        cout << x;
}




