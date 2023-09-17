#include <iostream>
using namespace std;
/*
//bad practice
int& func(int n){
    int n = 5;
    int& b = n;
    return b;

}
//bad practice 
int* fun(int n){
    int n = 5;
    int& b = n;
    return b;

}


void update1(int &n){
    n++;
}

void update(int n){
    n++;
}
*/

int isEven(int *array, int n)
    {
    int even = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            cout << "Even no is " << array[i] << endl;
        }
    
    }
    return even;
}

/*
int getSum(int *array , int n){
    int sum = 0;
    for(int i =0; i < n ; i++){
        sum += array[i];
    }
    return sum;
}
*/

int main() {
    /*
    //reference variable : same memory but different name of vaiable
    int i = 5;
    int &j = i;
    i++;
    cout << i << endl;
    cout << j << endl;
    j++;
    cout << j << endl;
    cout << j++ << endl;

    int n = 5;
    cout << "Before value of n is " << n << endl; 
    update(n);
    cout << "After update value of n is " << n << endl;



    //
    int num = 5;
    cout << "Before value of n is " << n << endl; 
    update1(n);
    cout << "After update value of n is " << n << endl;

    

   char ch = 'Z';
   char *ptr = &ch;
   cout << "Size of pointer is " << sizeof(*ptr) << endl;

   //Dynamic memoray allocation

   new int;
   int *ptr1 = new int;
   cout << "Size of dynamic memory alloaction of int  is " << sizeof(ptr1) << endl;

   int i = 5;
   int *ptr3 = &i;
   cout << "Static memray allocation of pointer int size os " << sizeof(ptr3) << endl;

   char c = 'c';
   char *ptr1 = &c;
   cout << sizeof(ptr1) << endl;
   int i = 5;
   int *ptr = &i;
   cout << sizeof(ptr ) << endl;
   cout << sizeof(c) << endl;

   char *ch = &c;
   cout <<sizeof(ch) << endl;
   cout <<sizeof(int) << endl;
   cout << sizeof(double) << endl;
   cout << sizeof(float) << endl;
   cout << sizeof(long) << endl;

    // create array 
    new int[5];
    int* array = new int;
    cout << sizeof(int[5]) << endl;
    cout << sizeof(array) << endl;
*/
    // create variable size dynamic array

    int n;
    cin >> n;

   
    // variable size array
    int* array = new int[n];

    //taking input 
    for(int i=0; i< n; i++){
        cin >> array[i];
    }

    //int ans = getSum(array , n);
    //cout << "Answer is " << ans << endl;

    int ans = isEven(array , n);
    cout << ans << endl;
}
