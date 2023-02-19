#include "TIME.h"

TIME::TIME() // ����������� � ������� ��������
{
	H = 0;
	M = 0;
	S = 0;
}

TIME::TIME(int h, int m, int s) // ����������� � �����������
{
	H = h;
	M = m;
	S = s;
}

TIME::TIME(const TIME& copy) // ����������� �����������
{
	this->H = copy.H;
	this->M = copy.M;
	this->S = copy.S;
}

TIME::~TIME() // ����������, ������, �.�. ��� ������ � ������� ������ ������������ ������ ������������ � 1 ������, � ������� � ���������
{

}

void TIME::print_time() // ����� ������� �� �����
{
	cout << "[" << H << ":" << M << ":" << S << "]" << endl;
}

TIME TIME::operator=(TIME& other)
{
	this->H = other.H;
	this->M = other.M;
	this->S = other.S;
	return other;
}
bool TIME::operator<(TIME& other)
{
	if (this->H < other.H)
	{
		return true;
	}
	else
	{
		if (this->H == other.H && this->M < other.M)
		{
			return true;
		}
		else
		{
			if (this->M == other.M && this->S < other.S)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

bool TIME::operator>(TIME& other)
{
	if (this->H > other.H)
	{
		return true;
	}
	else
	{
		if (this->H == other.H && this->M > other.M)
		{
			return true;
		}
		else
		{
			if (this->M == other.M && this->S > other.S)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

bool TIME::operator==(TIME& other)
{
	if (this->H == other.H && this->M == other.M && this->S == other.S)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TIME::operator!=(TIME& other)
{
	if (this->H != other.H || this->M != other.M || this->S != other.S)
	{
		return true;
	}
	else
	{
		return false;
	}
}

TIME::operator int*() // ����������� ������� ������ � ���� ����������� ������� (�������������� � �������� ����)
{
	int* A = new int [3];
	A[0] = H;
	A[1] = M;
	A[2] = S;
	return A;
	delete[] A;
}