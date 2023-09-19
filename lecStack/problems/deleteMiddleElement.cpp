#include <iostream>
#include <stack>
using namespace std;
//using recursion
void solve(stack<int> &inputStack, int count , int size){
    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
        inputStack.push(num     );
    //Recursive call
    solve(inputStack , count+1,size);
}

void deleteMiddle(stack<int> inputStack, int N){
    int count = 0;
    solve(inputStack,count,N);
}

int main()
{
  
   
}