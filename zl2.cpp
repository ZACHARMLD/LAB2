/* 
Латораторная работа №2. Через вызов функции автомотически перебираем все точки на кусочной функции.
*/

#include <iostream>
#include <cmath>

using namespace std;
double sum(double x);	//объявляем функцию

int main()

{
	
	double x;
	
	for (int i=-9; i<=9; i++)	//перебираем целочисленные члены функции
	{
		x = i;		//сыязываем х и i
		cout << "x=" << i;
		cout << "\t y = " << sum(x) << endl;	//выводим построчно
	}
			
}

double sum(double x)	//сама функция обработки

{
	double y;
	
	if (x>=-9 && x<-6)
			{
				y = -sqrt(9-pow((x+6),2));
			}
		if (x>=-6 && x<-3)
		{
			y = x+3;
		}
			if (x>=-3 && x<0)
			{
				y = sqrt(9-pow((x),2));
			}
		if (x>=0 && x<3)
		{
			y=3-x;
		}
			if (x>=3 && x<=9)	//определение диапазона
			{
				y =0.5*(x-3);
			}					//	вычисление значения У
		if (x>9 || x<-9)		// попадаем в определенность?
		{
			cout << " ERROR, not included in the function " << endl;	// не попали
		}
		
	return y;
}


