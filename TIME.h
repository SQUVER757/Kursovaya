#pragma once

#include <iostream>
#include <locale.h>

using namespace std;

class TIME
{
	private:
		int H; // часы
		int M; // минуты
		int S; // секунды

	public:
		TIME(); // конструктор нулевого времени 
		TIME(int h, int m, int s); // конструктор с параметрами  
		TIME(const TIME& copy); // конструктор копирования 

		~TIME(); // деструктор


		void printt(); // вывод времени на экран 


		TIME operator+(TIME add); // время + время 
		TIME operator+(int add); // время + число 

		TIME operator+=(TIME add); //  время += время 
		TIME operator+=(int add); // время += число 

		TIME& operator++(); //   ++time 
		TIME operator++(int); // time++ 


		TIME operator-(TIME subtr); //  время - время 
		TIME operator-(int add); // время - число 

		TIME operator-=(TIME subtr); //   время -= время 
		TIME operator-=(int subtr); // время -= число 

		TIME& operator--(); // --time 
		TIME operator--(int); // time-- 


		TIME operator*(int multi); //  время * число 
		TIME operator/(int div); //  время / число 


		TIME operator=(const TIME& equal); //  время = время 
		TIME operator=(int equal); // время = число 


		bool operator<(TIME compare);  // время < время
		bool operator>(TIME compare);  // время > время
		bool operator==(TIME compare);  // время == время
		bool operator!=(TIME compare);  // время != время


		int& operator[](int index); //  взятие элемента класса по индексу
		operator int*(); // возвращение объекта класса в виде одномерного массива (преобразование к базовому типу) 
};