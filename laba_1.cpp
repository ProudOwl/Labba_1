#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления периметра треугольника
double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади треугольника по формуле Герона
double calculateArea(double a, double b, double c) {
    double p = calculatePerimeter(a, b, c) / 2; // Полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Функция для проверки, является ли треугольник равнобедренным
bool isIsosceles(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

int main() {
    double a, b, c;
    
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;
    
    // Проверка на существование треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник с такими сторонами не существует!" << endl;
        return 1;
    }
    
    cout << "Периметр треугольника: " << calculatePerimeter(a, b, c) << endl;
    cout << "Площадь треугольника: " << calculateArea(a, b, c) << endl;
    
    if (isIsosceles(a, b, c)) {
        cout << "Треугольник является равнобедренным." << endl;
    } else {
        cout << "Треугольник не является равнобедренным." << endl;
    }
    
    return 0;
}
