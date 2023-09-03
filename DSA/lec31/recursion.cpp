#include <iostream>
using namespace std;

/*
//define factorial recursively
int factorial(int n){
    cout << n << " \n";
    // Base case first likho
//    if(n == 0) return 1;    return n = n * factorial(n - 1);
    if(n == 0 || n==1)
    {
        return 1;
     }
     else
     {
        return n = n * factorial(n - 1);
     }
     cout << n << " ";


}
// 2*n

int twoPow(int n){
    //base case
    if(n == 0)
        return 1;

        // int smallerProblem = twoPow(n - 1);
        // int biggerProblem = 2 * smallerProblem;

        // return biggerProblem;

        return n = 2 * twoPow(n - 1);
}
void countPrinting(int n){
    //base case
    if(n == 0){
        return ;    
    }
    cout << n << " ";
    countPrinting(n - 1);

}

//factorial function
int fact(int n)
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }
        return n = n * fact(n -1);
    }
*/
// define poer function recursively
// int power(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     return n = 2 * power(n -1);
// }
//printing upto n
void countprinting(int n)
{
    if(n <= 0)
    {
        return ;
    }
    countprinting(n - 1);
    cout << n << " ";
}

int main(){
    // int n;
    // cout << "Enter finding factorial " << endl;
    // cin >> n;
    // // factorial(n)
    // cout << "Factorial of " << n << " is " << factorial(n) << endl; 
    // cin >> n ;
    // int ans;
    // int ans = twoPow(n);
    // cout << ans << endl;
    // countPrinting(n);
    

    int n, ans;
    // cout << "Write number for poer " << endl;
    cin >> n;
    cout << endl;
    countprinting(n);
    // fact(n);
    // cout << "printing number is " << countprinting << endl;

















}
