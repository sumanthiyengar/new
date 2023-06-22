#include<iostream>
//cout-on std output device or stream - console
//cin on std input device - keyboard
//cerr buffer stream
//<<endl - new line

using namespace std;
int main(){
    int x=10,y=20;
    cout<<x<<""<<y;
    return 0;
}
//o/p - 10 20

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter x";
    cin>>x;               // user enter x value
    cout << "Square of x is "<< (x*x);
    return 0;
}

/* \n - new line 
endl - flushes the buffer  */

