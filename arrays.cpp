// to store same data structure in contagenous memory 
// cout arr gives adress of 1st 
// int arr[n//any no]-- declaring an arr
// int arr[]={10,2,3,4};

#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
} // 10 20 30

#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20};
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
} // 10 20 0

#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
} // random values

// no arrayoutof bound index in c++ 

#include<iostream>
using namespace std;

int main()
{
    int arr1[2] {10, 20};
    int arr2[6] {10, 20};
    
    cout<<arr1[0]<<" "<<arr1[1]<<" ";
    
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2];
    
    return 0;
} //10 20                 10 20 0

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    
    cout<<sizeof(arr)/sizeof(arr[0]);
    
    return 0;
} // number of elements -4

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 8, 3};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        
    return 0;
} // Print all eements 

// Adv --> random access , cache friendliness

// limitations- we need to know size 
// soln for above - VECTORS in c++

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    // for(auto x:v)
    // cout<<x<<"";
        
    return 0;
} // 10 20 30 

#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    int n = 10;
    
    vector<int> v(n, 5);

    for(auto x : v)
        cout<<x<<" ";
        
    return 0;
} // 5 5 5 5 5 5 5 5 5 5 

#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    vector<int> v {10,20,30,40,50};

    for(auto x : v)
        cout<<x<<" ";
        
    return 0;
}

//MAXIMUM ELEMENT 
#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 100, 40, 50, 500, 8};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = arr[0];
    
    for(int i=1; i<n; i++)
        res = max(res, arr[i]); // max function
    
    cout<<res;
    
    return 0;
} // 500

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 100, 40, 50, 500, 8};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = *max_element(arr, arr+n);
    
    cout<<res;
    
    return 0;
} // Direct function

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{   
    vector<int> v {10, 20, 100, 40, 50, 500, 8};

    int res = *max_element(v.begin(), v.end());
    
    cout<<res;
    
    return 0;
} // Direct function 

//SUM 

#include<iostream>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 5, 30};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum = 0;
    
    for(int i=0; i<n; i++)
        sum = sum + arr[i];
    
    cout<<sum<<" ";
    
    return 0;
} 

// Using direct function 
#include<iostream>
#include<numeric>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 5, 40};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int s = 0;
    
    s = accumulate(arr, arr+n, s); // same for vector v.begin v.end
    
    cout<<s<<" ";
    
    return 0;
}



// MULTI_DIMENSION ARRAY TRAVERSE
#include<iostream>

using namespace std;

int main()
{   
    int arr1[3][2] = {10, 20, 30, 40, 5, 6};
    
    int arr2[3][2] = {{10, 20},
                      {30, 40},
                      {5, 6}};
                      
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
            cout<<arr2[i][j]<<" ";
    }
    
    return 0;
}