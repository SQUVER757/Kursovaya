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
		TIME(); // конструктор нулевого времени D
		TIME(int h, int m, int s); // конструктор с параметрами D
		TIME(const TIME& copy); // конструктор копирования D
		~TIME(); // деструктор

		void printt(); // вывод времени на экран 

		TIME operator+(TIME& add); //D
		TIME& operator++(); // D
		TIME operator++(int); // D

		TIME operator-(TIME& subtr); // D
		TIME& operator--(); // D
		TIME operator--(int); // D

		TIME operator*(int multi); // D
		TIME operator/(int div); // D

		TIME operator+=(TIME& add); // D
		TIME operator-=(TIME& subtr); // D 
		TIME operator=(const TIME& equal); // D

		bool operator<(TIME& compare);
		bool operator>(TIME& compare);
		bool operator==(TIME& compare);
		bool operator!=(TIME& compare);

		int& operator[](int index); // D
		operator int*(); // возвращение объекта класса в виде одномерного массива (преобразование к базовому типу) D
};