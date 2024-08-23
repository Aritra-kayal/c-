// Palindrome checking
#include <iostream>
using namespace std;
class palindrome
{
public:
    int n, r;
    void getdata()
    {
        cout << "Enter the Number=";
        cin >> n;
    }
    void palin()
    {
        int temp, sum = 0;
        temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        if (temp == sum)
            cout << "Number is Palindrome.";
        else
            cout << "Number is not Palindrome.";
    }
};
int main()
{
    palindrome t;
    t.getdata();
    t.palin();
    return 0;
}