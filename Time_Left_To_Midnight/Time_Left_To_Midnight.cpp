#include <iostream>

using namespace std;

int main()
{
    /* Пользователь вводит с клавиатуры время в секундах,
    прошедшее с начала дня. Определить сколько времени
    (часов, минут, секунд) осталось до полуночи. */

    setlocale(0, "rus");

    const int day_seconds = 86400;

    int time_past; // Время, прошедшее с начала дня, в секундах
    int hours_left;
    int min_left;
    int sec_left;

    cout << "Введите время прошедшее с начала дня в секундах: ";
    cin >> time_past;

    if (day_seconds >= time_past) {
        sec_left = day_seconds - time_past;
        hours_left = sec_left / 3600;
        min_left = (sec_left - hours_left * 3600) / 60;
        sec_left = sec_left - (hours_left * 3600 + min_left * 60);
        cout << "До полуночи осталось: " << 
            hours_left << " часов " << min_left << " минут " << sec_left << " секунд\n";
    }
    else {
        cout << "Полуночь уже прошла.\n";
    }
}

