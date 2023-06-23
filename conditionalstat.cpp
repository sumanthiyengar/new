// if if else nested 
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    if(n<0)
        cout<<"Invalid";
    else
        cout<<n*(n+1)/2;
    return 0;
}

int main(){
    int age;
    char gender;
    cout<<"Enter age";
    cin>>age;
    cout<<"Enter gender as 'F" or 'M';
    cin>>gender;
    if(gender=='M'){
        cout<<"Male";
        if(age<18)
            cout<<"Kid";
        else    cout<<"Adult";
    }
    else if(gender=='F'){
        cout<<"Feamle";
        if(age<18)
            cout<<"kid";
        else
            cout<<"Adult";
    }
    else 
        cout<<"Invalid";
    return 0;
}

// SWITCH STATEMENT 
int x.pos=0 , y.pos=o;
char move;
switch(move){
    case 'L':x.pos--;
            break;  // stops when sees break stat 
    case 'R':x.pos++;
            break;
    case 'U';y.pos++;
            break;
    case 'D';y.pos--;
            break;
    default cout<<"Invalid";// Optional
}

