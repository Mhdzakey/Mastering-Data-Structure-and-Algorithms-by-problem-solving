#include <iostream>
using namespace std;

// Reverse the name string
void reverseName(char name[], int n){

    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(name[s++], name[e--]);
    }
}
//Print Length of the string
int getLenght(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout <<"Enter u  r name ...  " << endl;
    cin >> name;
    cout << "Y R name is ..." << endl;
    int len = getLenght(name);
    cout << "Your name length is ... " << len << endl;
    reverseName(name , len);
    cout << "Reverse name is .... " << name << endl;


}