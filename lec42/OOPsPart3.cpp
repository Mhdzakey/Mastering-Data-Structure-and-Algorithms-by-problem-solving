#include <iostream>
using namespace std;
class Human{
public:
    string name = "Zakey";
    string fatherName;
    float age;
    float height;
    public:
    string getName()
    {
        return this->name;
    }
    string getfatherName()
    {
        return this->fatherName;
    }
};

class Male: public Human  {
    public:
    string color;
    void sleep()
    {
        cout << "Male is sleeping " << endl;
    }
     
};


int main()
{
    Male maleObj;
    cout << maleObj.age << endl;
    // cout << maleObj.name << endl;
    // cout << maleObj.fatherName << endl;
    cout << maleObj.color << endl;

    // 
}

//find class code.

















