#include <iostream>
#include <string>

using namespace std;



int main() {

    setlocale(LC_ALL, "ru");

    string p1Chislo;
    string p2Chislo;
    int tryes = 6;


    cout << "Введите 4х значное число от 1 до 6\n";
    cin >> p1Chislo;

    while (tryes != 1)
    {

        int bik = 0;
        int korova = 0;
        cout << "Попробуй угадать чило\n";
        cin >> p2Chislo;
        if (p1Chislo == p2Chislo) {
            cout << "Ты победил";
            break;
        }
        else
        {
            for (size_t i = 0; i < p2Chislo.length(); i++)
            {
                if (p1Chislo[i] == p2Chislo[i]) {
                    bik += 1;
                }
                if (p1Chislo.find(p2Chislo[i]) != std::string::npos) {
                    korova += 1;
                }
            }
            tryes -= 1;
            cout << "У вас ещё " + to_string(tryes) + " попыток\n" + "Вы угадали " + to_string(korova) + " букв\n" + "Из них " + to_string(bik) + " на своих местах\n";


        }
    }

    return 0;
}
