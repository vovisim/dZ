#include <iostream>
#include <string>

using namespace std;



int main() {

    setlocale(LC_ALL, "ru");

    string p1Chislo;
    string p2Chislo;
    int tryes = 6;


    cout << "������� 4� ������� ����� �� 1 �� 6\n";
    cin >> p1Chislo;

    while (tryes != 1)
    {

        int bik = 0;
        int korova = 0;
        cout << "�������� ������� ����\n";
        cin >> p2Chislo;
        if (p1Chislo == p2Chislo) {
            cout << "�� �������";
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
            cout << "� ��� ��� " + to_string(tryes) + " �������\n" + "�� ������� " + to_string(korova) + " ����\n" + "�� ��� " + to_string(bik) + " �� ����� ������\n";


        }
    }

    return 0;
}
