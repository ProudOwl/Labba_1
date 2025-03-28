#include <iostream>
#include <cmath>

double perimeter(double footing, double wall_left, double wall_right) {
    return (footing + wall_left + wall_right);
}

double square(double footing, double wall_left, double wall_right) {
    double s = (footing + wall_left + wall_right) / 2;
    return sqrt(s * (s - footing) * (s - wall_left) * (s - wall_right));
}

double lsosceles(double footing, double wall_left, double wall_right) {
    return (footing == wall_left || footing == wall_right || wall_left == wall_right) ? 1 : 0;
}

double inputSide(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        // Проверка на некорректный ввод
        if (std::cin.fail() || value <= 0) {
            std::cout << "Некорректный ввод! Введите положительное число." << std::endl;
            std::cin.clear(); // Сброс состояния потока
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропуск оставшегося ввода
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Открытие остатка ввода
            return value;
        }
    }
}

int main() {
    double footing = inputSide("Введите основание треугольника: ");
    double wall_left = inputSide("Введите левую сторону треугольника: ");
    double wall_right = inputSide("Введите правую сторону треугольника: ");

    if (footing >= (wall_left + wall_right) || wall_left >= (footing + wall_right) || wall_right >= (footing + wall_left)) {
        std::cout << "Такого треугольника не существует!!!" << std::endl;
        return 0;
    }

    std::cout << "Периметр = " << perimeter(footing, wall_left, wall_right) << std::endl;
    std::cout << "Площадь = " << square(footing, wall_left, wall_right) << std::endl;
    
    if (lsosceles(footing, wall_left, wall_right) == 1) {
        std::cout << "Треугольник равнобедренный" << std::endl;
    } else {
        std::cout << "Треугольник не равнобедренный" << std::endl;
    }
    
    return 0;
}

