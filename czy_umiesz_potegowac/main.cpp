#include <iostream>
using namespace std;
long int a, b, t, wa, wb1, wb2;
int main()
{
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a;
        cin >> b;
        wa=a%10;
        wb1=b%4;
        wb2=b%2;
        switch(wa)
        {
            case 0:
                cout << "0" << endl;
                break;
            case 1:
                cout << "1" << endl;
                break;
            case 5:
                cout << "5" << endl;
                break;
            case 6:
                cout << "6" << endl;
                break;
            case 2:
                if(wb1==1) cout << "2" << endl;
                else if(wb1==2) cout << "4" << endl;
                else if(wb1==3) cout << "8" << endl;
                else if(wb1==0) cout << "6" << endl;
                break;
            case 3:
                if(wb1==1) cout << "3" << endl;
                else if(wb1==2) cout << "9" << endl;
                else if(wb1==3) cout << "7" << endl;
                else if(wb1==0) cout << "1" << endl;
                break;
            case 7:
                if(wb1==1) cout << "7" << endl;
                else if(wb1==2) cout << "9" << endl;
                else if(wb1==3) cout << "3" << endl;
                else if(wb1==0) cout << "1" << endl;
                break;
            case 8:
                if(wb1==1) cout << "8" << endl;
                else if(wb1==2) cout << "4" << endl;
                else if(wb1==3) cout << "2" << endl;
                else if(wb1==0) cout << "6" << endl;
                break;
            case 4:
                if(wb2==1) cout << "4" << endl;
                else if(wb2==0) cout << "6" << endl;
                break;
            case 9:
                if(wb2==1) cout << "9" << endl;
                else if(wb2==0) cout << "1" << endl;
                break;
        }
    }
    return 0;
}
