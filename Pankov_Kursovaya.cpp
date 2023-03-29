#include "TIME.h"

int main()
{
	setlocale(LC_ALL, "rus");
/*	int h1, m1, s1, h2, m2, s2;   //gg
	while (1)
	{
		cout << "Введите 1-е время для операций:" << endl;
		cout << "Часы:";
		cin >> h1;
		cout << "Минуты:";
		cin >> m1;
		cout << "Секунды:";
		cin >> s1;
		if (h1 <= 23 && h1 > -1 && m1 <= 59 && m1 > -1 && s1 <= 59 && s1 > -1) break;
		else
		{
			cout << "Такого формата записи времени не существует,попробуйте снова" << endl;
		}
	}

	while (1)
	{
		cout << "Введите 2-е время для операций:" << endl;
		cout << "Часы:";
		cin >> h2;
		cout << "Минуты:";
		cin >> m2;
		cout << "Секунды:";
		cin >> s2;
		if (h2 <= 23 && h2 > -1 && m2 <= 59 && m2 > -1 && s2 <= 59 && s2 > -1) break;
		else
		{
			cout << "Такого формата записи времени не существует,попробуйте снова" << endl;
		}
	}
	//TIME testsum;*/
	TIME time2(3, 22, 10);
	TIME time1(time2);
	time1.print_time();
	//TIME time2(0, 0, 0);
	//testsum = time1 + time2;
	//testsum.print_time();
	/*TIME time1(h1, m1, s1);
	TIME time2(h2, m2, s2);
	TIME time3;
	cout << "Время 1:" << endl;
	time1.print_time();
	cout << "Время 2:" << endl;
	time2.print_time();
	TIME time_copy(time1);
	cout << "Скопированное Время 1:" << endl;
	time_copy.print_time();
	cout << "Время 3 до присваивания:" << endl;
	time3.print_time();
	time3 = time2;
	cout << "Время 3 после присваивания значения Времени 2:" << endl;
	time3.print_time();
	cout << "Время 1 < Время 2:" << endl;
	if (time1 < time2)
	{
		cout << "ДА" << endl;
	}
	else
	{
		cout << "НЕТ"<< endl;
	}
	cout << "Время 1 > Время 2:" << endl;
	if (time1 > time2)
	{
		cout << "ДА" << endl;
	}
	else
	{
		cout << "НЕТ" << endl;
	}
	cout << "Время 1 == Время 2:" << endl;
	if (time1 == time2)
	{
		cout << "ДА" << endl;
	}
	else
	{
		cout << "НЕТ" << endl;
	}
	cout << "Время 1 != Время 2:" << endl;
	if (time1 != time2)
	{
		cout << "ДА" << endl;
	}
	else
	{
		cout << "НЕТ" << endl;
	}
	int* A = time1;
	cout << "Время 1, преобразованное в одномерный массив:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << A[i]<<"\t";
	}
	cout << endl;*/
	//delete[] A;
	return 0;
}
