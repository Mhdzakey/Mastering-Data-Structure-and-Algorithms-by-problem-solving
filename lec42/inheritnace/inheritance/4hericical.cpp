#include <iostream>
using namespace std;
class A
{
    public:
    string classA;
    void insideA()
    {
        cout << " Inside class A" << endl;
    }
};
class B: public A
{
    public:
    string classB;
    void insideB()
    {
        cout << " Inside class B" << endl;
    }
};

class C: public A
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
    A a;
    a.insideA();
    B b;
    b.insideA();
    b.insideB();
    C c;
    c.insideA();
    c.insideC();
}