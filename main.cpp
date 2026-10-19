#include <iostream>
#include <cmath>   // для функції sin()
using namespace std;

// Завдання If24
// Для даного дійсного x знайти значення функції:
// f(x) = 2*sin(x), якщо x > 0
// f(x) = 6 - x, якщо x <= 0

int main()
{
    double x;  // аргумент функції
    double f;  // значення функції

    // введення значення x
    cout << "Enter x: ";
    cin >> x;

    // перевірка правильності введення
    if (!cin)
    {
        cout << "Wrong input!" << endl;
        return 1;
    }

    // обчислення функції за умовою
    if (x > 0)
    {
        // якщо x додатне
        f = 2 * sin(x);
    }
    else
    {
        // якщо x менше або дорівнює нулю
        f = 6 - x;
    }

    // виведення результату
    cout << "f(x) = " << f << endl;

    return 0;
}
#include <iostream>
using namespace std;

// If19. Дано чотири цілі числа.
// Одне з них відмінне від трьох інших, рівних між собою.
// Визначити порядковий номер числа, відмінного від інших.

int main()
{
    int a, b, c, d;

    // введення чотирьох чисел
    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;

    // перевіряємо, яке число відрізняється
    if (b == c && c == d)
        cout << "Different number position: 1" << endl;

    else if (a == c && c == d)
        cout << "Different number position: 2" << endl;

    else if (a == b && b == d)
        cout << "Different number position: 3" << endl;

    else if (a == b && b == c)
        cout << "Different number position: 4" << endl;

    else
        cout << "Incorrect data!" << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a; // Сторона великого квадрата
    double r; // Радіус кола

    // Введення даних
    cout << "Введіть сторону великого квадрата (a): ";
    cin >> a;

    cout << "Введіть радіус кола (r): ";
    cin >> r;

    // Значення числа π
    const double PI = 3.141592653589793;

    // Площа чверті круга
    double area = (PI * r * r) / 4.0;

    // Виведення результату
    cout << "Площа фігури для 21 варіанта (коричнева область): "
         << area << endl;

    return 0;
}
