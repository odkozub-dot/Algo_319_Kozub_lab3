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

//21

int main() {
    double x, y, r;

    cout << "Введіть x: ";
    cin >> x;

    cout << "Введіть y: ";
    cin >> y;

    cout << "Введіть r: ";
    cin >> r;

    // Перевірка належності точки фігурі 21 варіанта
    if (
    // Ліва верхня коричнева трикутна область
    (x < 0 &&                 // точка ліворуч від осі Oy
     y > 0 &&                 // точка вище осі Ox
     x * x + y * y > r * r && // точка знаходиться поза колом
     y < -x)                  // точка нижче діагоналі y = -x

    ||

    // Права нижня коричнева частина кола
    (x > 0 &&                 // точка праворуч від осі Oy
     y < 0 &&                 // точка нижче осі Ox
     x * x + y * y <= r * r)  // точка знаходиться всередині кола
   )
{
    cout << "Точка належить фігурі";
}
else
{
    cout << "Точка не належить фігурі";
}

    return 0;
}
