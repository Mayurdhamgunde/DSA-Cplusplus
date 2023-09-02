#include <iostream>
using namespace std;
int main()
{
    int sum = 1;

    for (int i = 24; i >= 2; i--)
    {
        if (24 % i == 0 && 60 % i == 0)
        {
            sum = i;
            break;
        }
    }
    cout << sum;
    return 0;
}
