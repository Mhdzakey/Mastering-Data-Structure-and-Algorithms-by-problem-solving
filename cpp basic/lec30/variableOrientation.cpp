#include <iostream>
// #define PI  3.14
using namespace std;
// using global variables
/*
int global = 4;
void a(){
    cout << "Global in a value is ... " << global << endl;
}

void b(){
    cout << "Global in b value is ... " << global << endl;
}

int main(){
    // int r = 5;
    // int area = PI*r*r;
    // cout << "Area od the circle is ... " << area << endl;
    cout << global << endl;
   int a =5;
   cout <<a << endl;
   cout << a << endl;
   {
    int i = 6;
    cout << i << endl;
   }

}
*/
//to reduce function call we use inline
inline int getMax(int& a, int& b)
    {
        return (a>b) ? a : b;
    }

void defaultArgument(int array[], int size, int start = 0 /*default argument is zero */){
    //default arguments initialization always start from rightmost to left 
    for (int i = start; i < size; i++)
    {
        cout << array[i] << " " ;
    }
    
}

int main(){
/*
    int a = 1, b = 2;
    int ans = 0;

    // if(a>b) { ans = a;} else{ans = b;};
    // cout << ans << endl;
    //using tertaory operaator instead of above if cond

    // ans = (a>b) ? a:b;
    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 8;

    // ans = (a>b) ? a:b;
    ans = getMax(a,b);
    cout << ans << endl;
    //now instead of using tertnary operator let define a function
*/
//default argument

    int arr[4] = {3, 5, 7, 8};
    int size = 4;
    defaultArgument(arr, size, 0);
    




}
