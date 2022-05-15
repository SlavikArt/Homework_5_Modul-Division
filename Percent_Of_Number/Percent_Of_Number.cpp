#include <iostream>

using namespace std;

int main()
{
    /* Преподователь вводит с клавиатуры колличество
    студентов сдавших дз и колличество должников.
    Посчитать, сколько процентов составляет "должники"
    от общего числа студентов. */

    setlocale(0, "rus");

    int good_students; // Студенты которые сдали все дз
    int debtors; // Должники
    int all_students;
    float percent;

    cout << "Введите колличество студентов, сдавших дз: ";
    cin >> good_students;

    cout << "Введите колличество должников: ";
    cin >> debtors;

    all_students = good_students + debtors;

    percent = (float)debtors / all_students * 100;
    percent = round(percent);
    cout << "Должники составляют " << (int)percent << "% от всех студентов.";
}