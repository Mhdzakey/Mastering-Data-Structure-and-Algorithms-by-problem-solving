#include <iostream>
using namespace std;
void reverseString(char name[] , int last){

    int firstletter = 0;
    int lastletter = last - 1;
    while(firstletter < lastletter){
        swap(name[firstletter++] , name[lastletter--]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout << "Your name is ... "<< endl;
    cin >> name;
    cout << "You r " << name << " Welcome her" << endl;
    int len = getLength(name);
    cout << "Ur name lenght is ... " << len << endl;
    reverseString(name , len);
    cout << "Reverse of the string is ... " << name;
}