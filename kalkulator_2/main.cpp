#include <iostream>

using namespace std;
int a, b, tab[10];
char znak;

void rejestr(int a, int b) {
    tab[a] = b;
}

int dodawanie(int a, int b) {
    return tab[a] + tab[b];
}

int odejmowanie(int a, int b) {
    return tab[a] - tab[b];
}

int mnozenie(int a, int b) {
    return tab[a] * tab[b];
}

int dzielenie(int a, int b) {
    return tab[a] / tab[b];
}

int reszta(int a, int b) {
    return tab[a] % tab[b];
}

int main() {
    while (true) {
        cin >> znak >> a >> b;
        if (cin.eof())break;
        switch (znak) {
            case 'z':
                rejestr(a, b);
                break;
            case '+':
                cout << dodawanie(a, b) << endl;
                break;
            case '-':
                cout << odejmowanie(a, b) << endl;
                break;
            case '*':
                cout << mnozenie(a, b) << endl;
                break;
            case '/':
                cout << dzielenie(a, b) << endl;
                break;
            case '%':
                cout << reszta(a, b) << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}