#include <iostream>
#include <cmath>
using namespace std;
double perimeter(double top, double left){
    return (top+left)*2;
}

double square(double top, double left){
    return top*left;
}

double diagonal(double top, double left){
    return sqrt(pow(top, 2) + pow(left, 2));
}

int main(){
double top = 0, down, left = 0, right;
while (top <= 0|| top ) {
    cout << "Введите большую сторону прямоугольника ";
    cin >> top;
}
down = top; // две стороны равны
while (left <= 0) {
    cout << "Введите меньшую сторону прямоугольника ";
    cin >> left;
}
right = left;
cout << "Периметр = " << perimeter(top, left) << endl;
cout << "Площадь = "<< square(top, left) << endl;
cout << "Диагональ равна = " << diagonal(top, left) << endl;
return 0;
}
