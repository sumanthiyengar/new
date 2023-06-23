// pointers - variale adress of other variable
// & used before a variable-to get addr of var
// name value adress each variable contain this

// * key reference -- gives values at that address - before &

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << (&x);
    return 0;
} // addr of x

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << (*(&x));
    return 0;
} // value at adres - 10

// int *ptr - create pointer variable  or int* ptr -- store addr  --> syntax 

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    cout << *ptr << " ";
    cout << ptr << " ";
    return 0;
} // 10 0x7ffd3451b45c 


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    cout << *ptr << " "; //10
    x = x + 30;
    cout << *ptr << " "; //40
    cout << ptr << " ";  // address
    *ptr = *ptr + 40;     // 80
    cout << x << " ";     //80
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int *p1;
    cout << p1 << " "; // segmentation fault - invalid 
    cout << *p1 << " "; //
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int *p1;
    double *p2;
    string *p3;
    cout << (sizeof p1) << " "; // same for all - 8
    cout << (sizeof p2) << " "; // since it store addr it gives size of addr
    cout << (sizeof p3) << " "; //
    return 0;
}


#include <iostream>
using namespace std;

// CHANGING PASSED PARAMETER (pass by value)

void swap(int *p1, int *p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
int main()
    {
        int x = 10, y = 20;
        swap(&x, &y);         // addr of variables
        cout << x << " " << y << " ";     // 20 10
        return 0;
    }

// Passing large objects (avoiding copy)

// Dynamic memory alloc
// implement DS tree, ll ,BST


// to return multiple values
#include <iostream>
using namespace std;

void getAddMul(int x, int y, int *mPtr, int *aPtr)
    {
        *mPtr = x * y;
        *aPtr = x + y;
    }
int main()
    {
        int x = 10, y = 20, a, m;
        getAddMul(x, y, &a, &m);
        cout << a << " " << m;
        return 0;
    }

//access array elements
#include <iostream>
using namespace std;

int main() {
    int arr[] = {20, 30, 40, 50};
    int *ptr = arr;           // int *ptr; ptr=arr;
    // ptr gets value of address of first element
    cout << *(ptr + 2);   //40
}

#include <iostream>
using namespace std;

void fun(int *ptr, int n)
    {
        for (int i= 0; i<n; i++)
            cout << ptr[i] << " ";
    }
int main()
    {
        int arr[] = {10, 20, 30, 40, 50};
        fun(arr, 5);
    } //10 20 30 40 50



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int *ptr = arr;
    cout << sizeof(arr) << " ";
    cout << sizeof(ptr) << " ";
    return 0;
}  // 12 or 24 
    // 8 - addr doesnot depend on data type

#include <iostream>
using namespace std;

int main() {
    char arr[] = {1, 2, 3};
    char *ptr = arr;
    cout << sizeof(arr) << " ";
    cout << sizeof(ptr) << " ";
    return 0;
} // 3 
    // 8

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p1 = arr; // pointer store the adress of first elemrnt of array 
    ++*p1;
    cout << arr[0] << " " <<
        arr[1] << " " << *p1;
    return 0;
}

// 11 20 11

// 2 operator - precedence - prefix  - same the associatity - both r to l soo *p1 first then ++-> ++(*p1) 
// go to add then inc so 11 then 20 then p1 is 11

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p2 = arr;
    *p2++;
    cout << arr[0] << " " <<
        arr[1] << " " << *p2;
    return 0;
}

// postfix op high precedence so *(p2++) --> so p2 points to 20 --> here just modified address not value
// 10 20 20

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p2 = arr;
    cout << *p2++ << " ";       // 10  --> postfix so result in nxt
    cout << arr[0] << " " <<
        arr[1] << " " << *p2;    // 10 20 20
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p3 = arr;
    *++p3;
    cout << arr[0] << " " <<
        arr[1] << " " << *p3;
    return 0;
} // 10 20 20


#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20};
    int *p3 = arr;
    cout << *++p3 << " ";            // 20 - prefix value is attained 
    cout << arr[0] << " " <<
        arr[1] << " " << *p3;
    return 0;
}  // 20 10 20 20