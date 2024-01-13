#include <iostream>

using namespace std;

int main()
{
    int j, x;
    bool ePrim;
    for (j=1; j<=1000; j++)
    {
        ePrim = 1;
        x=j;
        if (x < 2) ePrim = 0;
        else if (x == 2) ePrim = 1;
        else if (x % 2 == 0) ePrim = 0;
        else
        {
            for (int i = 3; i * i <= x; i += 2)
                if (x % i == 0) ePrim = 0;
        }
        if (ePrim==1)
            cout<<j<<" ";
    }
}
