#include <iostream>
using namespace std;
class A
{
    public:
    string classA;
    void func()
    {
        cout << " Inside class A" << endl;
    }
};
class B: public A
{
    public:
    string classB;
    void func()
    {
        cout << " Inside class B" << endl;
    }
};

class C: public A , public B
{
    public:
    string classC;
    void insideC()
    {
        cout << " Inside class C" << endl;
    }
};

int main()
{
    C cobj;
    cobj.classA::func();
    cobj.classB::();
}