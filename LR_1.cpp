#include<iostream>
#include<cmath>
using namespace std;
double perimeter(double down, double top, double wall_left, double wall_right){
	return top+down+wall_left+wall_right;
}
double square(double top, double down, double height){
	return (top+down)/2*height;
}
double middle_line(double top, double down){
	return (top+down)/2;
}
int main(){
	double top = 0, down = 0, wall_left = 0, wall_right = 0, height;
	while (top<=0){
		cout<<"Введите большее основание трапеции = ";
		cin>>top;
	}
	while (down<=0){
		cout<<"Введите меньшее основание трапеции = ";
		cin >> down;
	}
	while (wall_left<=0){
		cout<<"Введите левую стенку трапеции = ";
		cin>>wall_left;
	}
	while (wall_right<=0){
		cout<<"Введите правую стенку трапеции = ";
		cin>>wall_right;
	}
	
        height = sqrt(pow(wall_left, 2) - pow(((pow((down-top), 2) + pow(wall_left, 2) - pow(wall_right, 2)) / (2*(down-top))),2));
        if (top>=(down+wall_left+wall_right) || down >= (top+wall_left+wall_right) || wall_left>= (top+down+wall_right) || wall_right >= (top+down+wall_left) || height == 0 || (down<=top)){
	cout<<"Такой трапеции не существует!!!";
	return 0;
        }
	cout << "Высота трапеции = " << height << endl<< "---------------------------------------------------------"<<endl;
        cout<<"Периметр = "<<perimeter(down, top, wall_left, wall_right)<<endl;
	cout<<"Площадь = "<<square(top, down, height)<<endl;
	cout<<"Средняя линия = "<<middle_line(top, down)<<endl;
	return 0;

}
