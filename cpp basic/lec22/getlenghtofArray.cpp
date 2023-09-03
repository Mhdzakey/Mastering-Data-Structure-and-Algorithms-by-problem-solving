#include <iostream>
using namespace std;

void reverseAString(char name[] , int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(name[s++] , name[e--]);
    }
    
}


int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main() {
    char  name[20];
    cout << " Enter uy name" << endl;
    cin >> name;
    cout << "Hi " << name << " Welcome!" << endl;
    int len = getLength(name);
    cout << "Lenght of the array is ... " << len << endl;
    reverseAString(name , len);
    cout << "Reverse name is ... " << name;
    
   
}
