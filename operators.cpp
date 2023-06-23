// Arthimatic operator
int x=10,y=20;
cout<<(x+y)<<"";
cout<<(x-y)<<"";
cout<<(x*y)<<"";
int z=x++ //unary op - old value then assigns +1
cout<<x<<""<<z<<"";
z=++z; // x=x+1 ,z=x --> shd not used multiple times in a line

int x=10,y=20;
double z=x/y ; // o/p -0

double z=(double)x/y;
cout<<z<<"";

// if same precedence , associativity either from left to right 

//Relational op - < > == <= >=  --> T or F

bool res = (x<y);
cout<< res<<endl;

// Logical op - && || !

// assignment op -> =,+=,-=,*=,/= RIGHT TO LEFT ASSOCIATIVITY

// logical and - if firs one is false second statement not executed
// logical or - if first one is true second one is not execute
// comma op - associativity last value will be res if ()
