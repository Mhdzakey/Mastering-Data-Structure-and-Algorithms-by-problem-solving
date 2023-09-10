#include <iostream>
using namespace std;
class Animal{
    public:
    string name;
    string color; 
    void barking()
    {
        cout << "Barking.... " << endl;
    }
};
class Dog: public  Animal
{
    public:
    string type = "Alshan"; 
};
class GermanShephared: public Dog
{
    
};


int main()
{
 
   
   GermanShephared gs;
   gs.barking();

}



















