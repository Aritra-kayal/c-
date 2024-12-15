#include <iostream>
#include <conio.h>
using namespace std;
class B
{
private:
    int n1, n2, a;

public:
    void input()
    {
        cout << "Enter two numbers:" << endl;
        cin >> n1;
        cout << endl;
        cin >> n2;
    }
    void get()
    {
        a = n1;
        n1 = n2;
        n2 = a;
    }
    void ans()
    {
        cout << "After swaping:";
        cout << endl;
        cout << n1;
        cout << endl;
        cout << n2;
    }
};
int main()
{
    B obj;
    obj.input();
    obj.get();
    obj.ans();
    getch();
}