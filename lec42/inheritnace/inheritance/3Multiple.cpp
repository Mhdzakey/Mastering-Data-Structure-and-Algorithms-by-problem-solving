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
class Human
{
    public:
    string color = "wheat"; 
    void speaking()
    {
        cout << "Human is Speaking...." << endl;
    }
};
class Hybrid: public Animal , public Human
{
    // public;
};


int main()
{
    Hybrid parrot;
    parrot.barking();
    parrot.speaking();

}



















