#include <iostream>
#include <cmath>

double perimeter (double footing, double wall_left, double wall_right){
	return (footing + wall_left + wall_right);
}

double square (double footing, double wall_left, double wall_right){
	return sqrt ((footing + wall_left + wall_right)/2 * ((footing + wall_left + wall_right)/2 - footing) * ((footing + wall_left + wall_right)/2 - wall_left) * ((footing + wall_left + wall_right)/2 - wall_right));
}

double lsosceles (double footing, double wall_left, double wall_right){
  if (footing == wall_left || footing == wall_right || wall_left==wall_right){
                return 1;
        }
        else{
                return 0;
        }
}

int main()
{
        double footing = 0, wall_left = 0,  wall_right = 0; //основание, правая и левая сторона

        while(footing<=0){
        std::cout<<" Введите основание треугольника" ;
        std::cin>>footing;
        }

        while(wall_left<=0){
        std::cout<<" Введите левую сторону треугольника" ;
        std::cin>>wall_left;
        }

        while(wall_right<=0){
        std::cout<<" Введите правую сторону треугольника" ;
        std::cin>>wall_right;
	}

	if (footing>=(wall_left+wall_right) || wall_left>=(footing+wall_right) || wall_right >= (footing+wall_left)){
        std::cout<<"Такого треугольника не существует!!!"<<std::endl;
        return 0;
}


        std::cout << "Периметр = " << perimeter(footing, wall_left, wall_right) << std::endl;
        std::cout << "Площадь = " << square(footing, wall_left, wall_right) << std::endl;
        double y = lsosceles(footing, wall_left, wall_right);
        if (y==1){
                std::cout<<"Треугольник равнобедренный"<<std::endl;
        }
        else{
                std::cout<<"Треугольник не равнобедренный"<<std::endl;
        }
}       	
