#include <iostream>
using namespace std;
char toLowerCase(char word){
    if(word >= 'a' && word <= 'z')
    {
        return word;
    }
    else
    {
        char temp = word - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char namePalindrome[] , int len){

    int firstLetterPalindrom = 0;
    int lastletterPalindrom = len - 1;
    while(firstLetterPalindrom < lastletterPalindrom){
        if(toLowerCase( namePalindrome [firstLetterPalindrom] ) !=toLowerCase( namePalindrome[lastletterPalindrom] ))
        {
            return 0;
        }
        else
        {
            firstLetterPalindrom ++;
            lastletterPalindrom --;
        }
        return 1;
    }
    return checkPalindrome;
}
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
    cout << "Reverse name is ... " << name << endl;
    int palindrome = checkPalindrome(name , len);
    cout << "Pilandrome or not ... " << palindrome << endl;

    cout << "Character to lower case " << toLowerCase('a') << endl;
    cout << "Character to uppper case " << toLowerCase('A') << endl;
}
