#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    float l, w, area;

public:
    void input()
    {
        cout << "Enter the value of length: ";
        cin >> l;
        cout << endl;
        cout << "Enter the value of width: ";
        cin >> w;
    }
    void output()
    {
        area = l * w;
        cout << "Area of a rectangle: " << area;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}