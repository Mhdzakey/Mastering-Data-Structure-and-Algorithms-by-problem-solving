#include <iostream>
using namespace std;
/* class Screen
{
public:
    float len , wid;
public:
    int area(float length , float width)
    {
        
        len = length;
        wid = width;
        float area = length * width;
        cout << "Area: " << endl;
    }
}; */
class Grade
{
    string name;
    float marks;
    public:
    string getName(){
        return name;
    }
    float getMarks()
    {
        return marks;
    }
    void setName(string na){
       name=na;
    }
    void setMarks(float mar)
    {
        marks=mar;
    }
    void setGrades(){
        if (marks > 90)
        {
            cout << " A " << endl;
        }
        else
        {
            cout << "Dumb" << endl;
        }
        
    }
    void print(){
        cout << name << endl;
        cout << marks << endl;
        // cout << Grade << endl;
    }
};
int main()
{
/*     Screen size;
    size.len = 3;
    size.wid = 3;
    // size.area(3,3);
    float area = size.len * size.wid ;
*/
    Grade stud;
    stud.getName();
    stud.getMarks();
    stud.setName("Zakey");
    stud.setMarks(100);
    stud.setGrades();
    stud.print();
    // stud.setGrades();
}