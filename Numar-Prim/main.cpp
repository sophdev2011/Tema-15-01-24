#include <iostream>

using namespace std;
/// Verificati daca un numar este prim
int main()
{
    int x;
    cin >> x;
    bool Prim = 1;
    if (x<2)
        Prim = 0;
    else if (x==2)
        Prim = 1;
    else if (x%2==0)
        Prim = 0;
    else
    {
        for (int i=3; i*i<=x; i+=2)
        {
            if (x%i==0)
                Prim = 0;
        }
    }
    cout << Prim;
}
