#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, i, count;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        count = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 2)
            cout << "This is prime number";
        else
            cout << "This is not prime number";
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}