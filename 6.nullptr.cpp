/*6.Пользуясь указателем на массив целых чисел, изменить порядок
следования элементов массива на противоположный. Использовать
арифметику указателей для продвижения по массиву, а также оператор
разыменования.*/
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	int *p = nullptr; /*в современной версии более рекомендуемый
					  вариант. Значение по умолчанию, если его
					  не будет, будет какой-то мусор.*/
	cout << p << "\n";

	return 0;
}