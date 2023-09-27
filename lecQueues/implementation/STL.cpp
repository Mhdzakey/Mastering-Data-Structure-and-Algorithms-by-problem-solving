/* #include <iostream>
using namespace std;

int main(){

} */

#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);
   
    
    cout << "Size of q: " << q.size() << endl;
    // q.pop();
    cout << "Size of q: " << q.size() << endl;
    cout << "isqEmpty: " << q.empty() << endl;
    cout << "front " << q.front() << endl;
    cout << "rear " << q.back() << endl;
    
}