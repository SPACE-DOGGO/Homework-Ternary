#include <iostream>
using namespace std;

int main()
{
    //setlocale(0, "UKR");
    //cout << "Укажите x координату верхнего левого угла прямоугольника: ";
    //double ulx;
    //cin >> ulx;
    //cout << "\nУкажите y координату верхнего левого угла прямоугольника: ";
    //double uly;
    //cin >> uly;
    //cout << "\nУкажите x координату нижнего правого угла прямоугольника: ";
    //double lrx;
    //cin >> lrx;
    //cout << "\nУкажите y координату нижнего правого угла прямоугольника: ";
    //double lry;
    //cin >> lry;

    //cout << "\nУкажите x координату точки в декартовой системе координат: ";
    //double point1;
    //cin >> point1;
    //cout << "\nУкажите y координату точки в декартовой системе координат: ";
    //double point2;
    //cin >> point2;

    //if (point1 > ulx && point1 < lrx)
    //{
    //    if (point2 < uly && point2 > lry)
    //    {
    //        cout << "\nТочка принадлежит прямоугольнику.\n";
    //    }
    //    else
    //        cout << "\nТочка не принадлежит прямоугольнику.\n";
    //}
    //else
    //    cout << "\nТочка не принадлежит прямоугольнику.\n";

    //setlocale(0, "UKR");
    //cout << "Укажите x координату начала прямой линии: ";
    //double xstart;
    //cin >> xstart;
    //cout << "\nУкажите y координату начала прямой линии: ";
    //double ystart;
    //cin >> ystart;

    //cout << "\nУкажите x координату конца прямой линии: ";
    //double xend;
    //cin >> xend;
    //cout << "\nУкажите y координату конца прямой линии: ";
    //double yend;
    //cin >> yend;

    //if (xstart == xend)
    //{
    //    cout << "\nПрямая параллельна оси ординат.\n";
    //}
    //else if (ystart == yend)
    //{
    //    cout << "\nПрямая параллельна оси абсцисс.\n";
    //}
    //else
    //    cout << "\nПрямая не параллельна ни одной оси.\n";

    //setlocale(0, "UKR");
    //cout << "Введите число: ";
    //double num;
    //cin >> num;

    //int temp = int(num);
    //double fractional = num - temp;

    //string result = fractional > 0 ? "\nЧисло имеет вещественную часть.\n" : "\nЧисло не имеет вещественной части.\n";
    //
    //cout << result;

    setlocale(0, "UKR");
    cout << "Введите шестизначный номер трамвайного билета: ";
    int num;
    cin >> num;
    
    int units = num % 10;
    int tens = num / 10 % 10;
    int hundreds = num / 100 % 10;
    int thousands = num / 1000 % 10;
    int tthousands = num / 10000 % 10;
    int hthousands = num / 100000 % 10;

    int first = hthousands + tthousands + thousands;
    int second = hundreds + tens + units;

    string result = first == second ? "\nПоздравляем! У вас счастливый билет.\n" : "\nК сожалению, ваш билет не является счастливым.\n";

    cout << result;
}
