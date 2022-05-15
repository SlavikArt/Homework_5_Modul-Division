#include <iostream>

using namespace std;

int main()
{
    /* Пользователь вводит с клавиатуры дробное число.
    Округлить его до двух знаков после запятой и вывести на экран. */

    setlocale(0, "rus");

    float num;

    cout << "Введите дробное число: ";
    cin >> num;

    printf("Округленное число: %.2f", num);
}