#pragma once
#include <iostream>
#include <locale.h>
using namespace std;

class TIME
{
	private:
		int H;
		int M;
		int S;

	public:
		TIME(); // конструктор с нулевым временем
		TIME(int h, int m, int s); // конструктор с параметрами
		TIME(const TIME& copy); // конструктор копирования
		~TIME(); // деструктор, пустой, т.к. при работе с членами класса динамическая память используется в 1 методе, в котором и очищается
		void print_time(); // вывод времени на экран
		TIME operator=(TIME& other);
		bool operator<(TIME& other);
		bool operator>(TIME& other);
		bool operator==(TIME& other);
		bool operator!=(TIME& other);
		operator int*(); // возвращение объекта класса в виде одномерного массива (преобразование к базовому типу)
};