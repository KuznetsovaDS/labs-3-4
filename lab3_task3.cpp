#include <iostream>
#include <cmath>

using namespace std;

double equilTrangle(double  side) {
    return (sqrt(3) / 4) * side * side;
}

double notEquilTrangle(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    system("chcp 1251");
    bool work = true;
    while (work) {
        cout << "Выберите тип равностронний - 1, разносторонний - 2 ";
        int type;
        cin >> type;
        if (type == 1) {
            cout << "Введите динну ";
            double side;
            cin >> side;
            cout << "площадь равна " << equilTrangle(side) << endl;

        }
        else if (type == 2) {
            cout << "Введите динну ";
            double a, b, c;
            cin >> a >> b >> c;
            if (a + b > c && a + c > b && b + c > a) {
                cout << "площадь равна " << notEquilTrangle(a, b, c) << endl;
            }
            else {
                cout << "Ошибка.\n";
            }
        }
        else {
            cout << "Неверный выбор\n";
            continue;
        }
        cout << "Выбрать еще? (y/n): ";
        char ans;
        cin >> ans;
        if (ans == 'n') {
            work = false;
        }
    }

}