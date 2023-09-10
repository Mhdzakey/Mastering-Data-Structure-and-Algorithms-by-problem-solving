#include <iostream>
using namespace std;
class Human{
public:
    string name = "Zakey";
    string fatherName = "Amin Saud";

    float age = 23.1;
    float weight = 5
    private:
    float height = 5.3;
    public:
    string setName(string name)
    {
        return this->name;
    }
    string getName()
    {
        return this->name;
    }
    string getfatherName()
    {
        return this->fatherName;
    }
    void setWeight(float weight)
    {
        this->weight = weight;
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
    
    cout << "Name: " << maleObj.name<< endl;
    cout << "Father Name: " << maleObj.fatherName<< endl;
    cout << "Height: " << maleObj.<< endl;
    cout << "Color: " << maleObj.color<< endl;
    // maleObj.setName("Mmnoon");
    // cout << "Color: " << maleObj.setName()<< endl;
    maleObj.sleep();
    maleObj.setWeight(66);
    cout << "Weight: " << maleObj.weight << endl;

}

//find class code.

















