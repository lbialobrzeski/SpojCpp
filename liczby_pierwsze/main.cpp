#include <iostream>

using namespace std;

class Liczby
{

    int n, t, licz;

public : void wykon()
    {
        cin >> t;
        for(int j=0; j<t; j++)
        {
            cin >> n;
            for(int i=1; i<=n; i++)
            {
                if(n%i==0) licz++;
            }
            if(licz==2) cout << "TAK\n";
            else cout << "NIE\n";
            licz=0;
        }
    }
};
int main()
{
    Liczby l;
    l.wykon();
    return 0;
}
