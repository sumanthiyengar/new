#include<iostream>
using namespace std;
int main(){
    //memory - considered as array of byte , can e accesed by adress 
    // var cannot begin with number
    // data type - char(1), int(4/8),long,float,double,bool
    int x;
    cout<< x;
    return 0; // donot initialize it will be random value
}

int main(){
    cout<< sizeof(char)<<"";
    char c;
    cout<<sizeof(c)<<"";
    cout<<sizeof(int)<<"";
// depends on compiler size
}

int x; // global variable -- default value 0
int main(){
    cout<<x;
}

int x;
int main(){
    int x=10;
    cout<< "x";
    // o/p -10
}

int x;
int main(){
    int x=10;
    {
        int x=20;
        cout<<x;
        // o/p - 20 near value
    }
}

int main(){
    static int x;
    cout<<x;
    return 0;
}

// if it is declared as const then that vaue will 
// be printed if u change it compile eror 