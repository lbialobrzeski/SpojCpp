#include <iostream>

using namespace std;
class Test
{
public :
    int tab[10000];
    int licz, i, j;

    void oblicz()
    {
        i=0;
        licz=0;
        while(!cin.eof())
        {
            cin >> tab[i];
            i++;
        }
        i=0;
        if(tab[0]==42)
        {
            licz=licz-1;
        }
        while(licz<3)
        {
            if(tab[i]==42&&tab[i-1]!=42)
            {
                licz++;
            }
            i++;
        }
        for(j=0; j<i; j++)
        {
            cout << tab[j] << endl;
        }
    }
};
int main()
{
    Test t;
    t.oblicz();
    return 0;
}