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
		TIME(); // ����������� � ������� ��������
		TIME(int h, int m, int s); // ����������� � �����������
		TIME(const TIME& copy); // ����������� �����������
		~TIME(); // ����������, ������, �.�. ��� ������ � ������� ������ ������������ ������ ������������ � 1 ������, � ������� � ���������
		void print_time(); // ����� ������� �� �����
		TIME operator=(TIME& other);
		bool operator<(TIME& other);
		bool operator>(TIME& other);
		bool operator==(TIME& other);
		bool operator!=(TIME& other);
		operator int*(); // ����������� ������� ������ � ���� ����������� ������� (�������������� � �������� ����)
};