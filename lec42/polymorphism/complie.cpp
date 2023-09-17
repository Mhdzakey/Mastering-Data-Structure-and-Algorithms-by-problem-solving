#include <iostream>
using namespace std;

class add
{
    public:
    int a;
    int b;
    public: 
    int adding()
    {
        return a + b;
    }
    void operator + (add &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output: " << val2 - val1 << endl;
    }
    void operator () ()
    {
        cout << "Main bracket hu" << endl;
    }
};
class Animal
{
    public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};
class Dog: public Animal
 {
    public:
    void speak()
    {
        cout << "Barking..." << endl;
    }
 };
int main()
{
/*     add obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();
 */

    Dog dog;
    dog.speak();











}