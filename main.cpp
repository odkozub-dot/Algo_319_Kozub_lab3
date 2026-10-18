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

#include <iostream>  // Підключаємо бібліотеку для введення та виведення даних (cin, cout)
#include <cmath>     // Підключаємо математичну бібліотеку (для константи M_PI)

using namespace std; // Використовуємо стандартний простір імен

int main() {

    double a; // Змінна для збереження довжини сторони великого квадрата[cite: 2]
    double r; // Змінна для збереження радіуса кола[cite: 2]

    // Запит у користувача на введення сторони квадрата
    cout << "Введіть сторону великого квадрата (a): ";
    cin >> a;

    // Запит у користувача на введення радіуса кола
    cout << "Введіть радіус кола (r): ";
    cin >> r;

    // Обчислення площі для 21-го варіанта (коричнева область є чвертю круга).
    // Формула площі круга: S = pi * r^2. Оскільки це чверть, ділимо на 4.
    double area = (M_PI * r * r) / 4.0;

    // Виведення обчисленого результату на екран
    cout << "Площа фігури для 21 варіанта (коричнева область): " << area << endl;

    return 0; // Успішне завершення виконання програми
}