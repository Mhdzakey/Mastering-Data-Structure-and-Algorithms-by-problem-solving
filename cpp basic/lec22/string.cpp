#include <iostream> 
using namespace std;
int main() { 
    char array[5] = {'a' , 'e' , 'g' , '\0' , 'd'};
   cout << array << endl;
   string sarr[7] = {"za" , "ka" , "ria" , "\0" , "sa" , "ud" , "\0"};
   cout << sarr << endl;;
   string name = "Zakey";
   cout << name << endl;
   cout << name.length() << endl;
   name.push_back('a');
   cout << name << endl;
   name.push_back('a');
   name.pop_back();
   cout << name << endl;
   name.at(4);
   name.size();
   cout << name.at(5) << endl;
   cout << name.size() << endl;
   cout << name.length() << endl;
   
}