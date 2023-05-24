#pragma once

#include <iostream>
#include <locale.h>

using namespace std;

class TIME
{
	private:
		int H; // ����
		int M; // ������
		int S; // �������

	public:
		TIME(); // ����������� �������� ������� 
		TIME(int h, int m, int s); // ����������� � �����������  
		TIME(const TIME& copy); // ����������� ����������� 

		~TIME(); // ����������


		void printt(); // ����� ������� �� ����� 


		TIME operator+(TIME add); // ����� + ����� 
		TIME operator+(int add); // ����� + ����� 

		TIME operator+=(TIME add); //  ����� += ����� 
		TIME operator+=(int add); // ����� += ����� 

		TIME& operator++(); //   ++time 
		TIME operator++(int); // time++ 


		TIME operator-(TIME subtr); //  ����� - ����� 
		TIME operator-(int add); // ����� - ����� 

		TIME operator-=(TIME subtr); //   ����� -= ����� 
		TIME operator-=(int subtr); // ����� -= ����� 

		TIME& operator--(); // --time 
		TIME operator--(int); // time-- 


		TIME operator*(int multi); //  ����� * ����� 
		TIME operator/(int div); //  ����� / ����� 


		TIME operator=(const TIME& equal); //  ����� = ����� 
		TIME operator=(int equal); // ����� = ����� 


		bool operator<(TIME compare);  // ����� < �����
		bool operator>(TIME compare);  // ����� > �����
		bool operator==(TIME compare);  // ����� == �����
		bool operator!=(TIME compare);  // ����� != �����


		int& operator[](int index); //  ������ �������� ������ �� �������
		operator int*(); // ����������� ������� ������ � ���� ����������� ������� (�������������� � �������� ����) 
};