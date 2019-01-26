#include <iostream>

using namespace std;

class Zadanie_probne {

    int pierwszySkladnikSumy, drugiSkladnikSumy, suma;

public :
    void wczytywanie() {
        cin >> pierwszySkladnikSumy >> drugiSkladnikSumy;

        suma = pierwszySkladnikSumy + drugiSkladnikSumy;

        cout << suma << endl;
    }

};

int main() {
    Zadanie_probne pZadanie_probne;
    pZadanie_probne.wczytywanie();
    return 0;
}
