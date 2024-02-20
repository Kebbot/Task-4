#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int min, sec;
	double dis, time, speed;

	cout << "Вычисление скорости\n";
	cout << "Введите дистанцию (метров): ";
	cin >> dis;
	cout << "\nВведите время (мин.сек): ";
	cin >> time;
	min = time;
	sec = (time - min) * 100;
	time = (min * 60) + sec;
	speed = (dis / time) * 3.6;
	cout << "\nДистанция: " << dis << " м.";
	cout << "\nВремя: " << min << " мин. " << sec << " сек." << " = " << time << " Сек.";
	cout << "\n Вы бежали со скоростью: " << speed << " км/ч\n";


	return 0;
}
