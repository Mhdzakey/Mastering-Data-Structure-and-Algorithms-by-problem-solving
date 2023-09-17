#include <iostream>
#include <stack>
using namespace std;
/* 
    STL
        syntc:- stack<data> nameOfStack
        push 
        pop
        peek
        empty

 */
int main()
{
    //creation 
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(5);
    s.push(7);
    s.pop();
    cout << s.top() << endl;
    if(s.empty())
    {
        cout << "empty " << endl;
    }
    else
    {
        cout << "Not Empty " << s.top() << endl;
    }
    cout << "Length: " << s.size() << endl;
    // cout << "Swapping: " << s.swap() << endl;
}