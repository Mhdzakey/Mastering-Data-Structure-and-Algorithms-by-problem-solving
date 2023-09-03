#include <iostream>
using namespace std;
/*
reaching home problem
void reachhome(int src, int dest)
{
    cout << "step "  << src << " destination " << dest << endl;
    //base case
    if(src == dest)
    {
        cout << "reaced " <<endl;
        return ;
    }
    //recursive call
    src++;
    //processing 
    reachhome(src, dest);
}

int main()
{
    int src = 1, dest = 10;
    reachhome(src, dest);

}


//Fibonachhi series
int fib(int n)
{   //Base Case 
    if(n ==  0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    //recursive relation
    cout << n << endl;
    int ans = fib(n - 1) + fib(n - 2);
    return ans; 
    
}
*/
    //count ways to reach nth stair 
// int stair(int n)
// {
//     //base case
//     if(n < 0)
//     {
//         return 0;
//     }
//     if(n == 0)
//     {
//         return 1;
//     }
//     return n = (n - 1) + ( n + 2);
// }
// Say Digit
// void sayDigits(int n, string arr[])
// {   //base case
//     if(n == 0)
//     {
//         return;
//     }
//     //processing
//     int digits = n % 10;
//     n = n /10;
//     cout << arr[digits] << " ";
//     cout << endl;
//     //recursive call
//     sayDigits(n, arr);
//     cout << endl;
//     cout << arr[digits] << " ";

// }        
//         //SLiding Window Techniques
//         //is Array Sorted
// bool isSorted(int  *arr, int size)
// {   
//    
//     //base case
//     if( size == 0 || size ==1)
//     {
//         return true;
//     }
//     if(arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {   //R.R
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;

//     }
// }
// // Return sum of sorted recursively
// int getSums(int *arr, int size)
// {
//     //base case
//     if(size == 0)
//     {
//         return 0;
//     }
//     if(size == 1)
//     {
//         return arr[0];
//     }
//     int remaningPart = getSums(arr + 1, size - 1 );
//     int sum = arr[0] + remaningPart;
//     return sum;
// }



// LINEAR  <------------->  SEARCH



// //dekhtay hay function call kis tarah gaye hay
// void print(int arr[] , int n)
// {
//     cout << "Size of the array is " << n << endl;
//     for (int i = 0; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }


// //Linear Search Using recursion
// bool linearSearch(int arr[], int size, int key)
// {
//     //dekhtay hay function calll kes tarah gaye
//     print(arr, size);
//     //base case
//     if(size == 0)
//     {
//         return false;
//     }
//     if(arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         int remainingPart = linearSearch(arr + 1, size - 1, key);
//         return remainingPart;
//     }
// }


// BINARY <-------------------> SEARCH

//print function
void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

bool binarySearch(int arr[], int s, int e, int k)
{   
    cout << endl;
    //print kara do
    print(arr, s, e);


    //base case
    //key not found
    if(s> e)
    return false;
    int mid = s + (e-s)/2;    
    cout << "value of mid is " << arr[mid] <<endl;
    
    //key found 
    if(arr[mid] == k)
    return true;

    if(arr[mid] < k )
    {
    return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s , mid -1 , k);
    }
    
}


int main()
{
    // int n, ans;
    // cout << "Enter fib " << endl;
    // cin >> n;
    // cout << endl;
    // ans = fib(n);
    // cout << "fib is " << ans << " ";
// 
    // int n , sum , zum;
    // cin >> n;
    // for(int i = 0 ; i < n; i++)
    // {
        // sum = sum + 1;
        // zum = sum + 1;
        // cout << sum << " ";
        // 
    // }
    // cout << zum << " ";
    // cout << sum << " ";
    // int n , ans;
    // cin >> n;
    // ans = stair(n);
    // cout  << ans << endl;


    // //say digits
    // string arr[10] = {"zero", "one", "two", "three", "four", "five"
    //                    "six", "seven", "eight", "nine"};
    // //int number[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // int n;
    // cin >> n;
    // sayDigits(n, arr);

    //is Array Sorted?
    // int arr[5] = {2, 4, 6, 1000, 9};
    // int size = 5; 
    // // bool ans = isSorted(arr, size);
    // // if(ans)
    // // {
    // //     cout << "Array is sorted" << endl;
    // // }
    // // else
    // // {
    // //     cout << "Array is not sorted" << endl;
    // // }
    // int ans ;
    // ans = getSums(arr, size);
    // cout << "Sum of the array is " << ans << endl;


    //linear search using recursion
    // int arr[5] = {4, 6, 10, 88, 1};
    // int size = 5;
    // int key = 10;
    // bool ans = linearSearch(arr, size, key);
    // if(ans)
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not found" << endl;
    // }

    int arr[10] = {10, 11, 22, 33, 34, 45, 46, 57, 68, 70};
    int size = 10;
    int key = 455;
    cout << "Found or not " << binarySearch(arr ,  0 , 10    , key) << endl;







}





















