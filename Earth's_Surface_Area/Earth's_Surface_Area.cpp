#include <iostream>

using namespace std;

int main()
{
    /* Рассчитать площадь поверхности Земли. */

    setlocale(0, "rus");

    int water = 393287100;
    int earth = 116812900;
    int full_surface = water + earth;
    cout << "Площадь земли равна " << full_surface << " кв. км.\n";
    cout << "Или же " << full_surface / 1000000.0 << " млн. кв. км.\n";
}