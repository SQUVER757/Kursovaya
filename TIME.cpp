#include "TIME.h"

TIME::TIME() // конструктор с нулевым временем
{
	H = 0;
	M = 0;
	S = 0;
}

TIME::TIME(int h, int m, int s) // конструктор с параметрами
{
	H = h;
	M = m;
	S = s;
}

TIME::TIME(const TIME& copy) // конструктор копирования
{
	this->H = copy.H;
	this->M = copy.M;
	this->S = copy.S;
}

TIME::~TIME() // деструктор
{

}

//=====================================================================================

void TIME::printt() // вывод времени на экран
{
	cout << "[" << H << ":" << M << ":" << S << "]" << endl;
}

//=====================================================================================

TIME TIME::operator+(TIME& add) // время + время
{
	TIME sum(0,0,0);
	if (this->S + add.S >= 60 )
	{
		sum.S += (this->S + add.S) - 60;
		sum.M += 1;
	}
		else
		{
			sum.S += this->S + add.S;
		}
	if (this->M + add.M + sum.M >= 60)
	{
		sum.M += (this->M + add.M) - 60;
		sum.H += 1;
	}
		else
		{
			sum.M += this->M + add.M;
		}
	if (this->H + add.H + sum.H >= 24)
		{
			sum.H += (this->H + add.H) - 24;         
		}
		else
		{
			sum.H += this->H + add.H;
		}
	return sum;
}

TIME& TIME::operator++() // время + 1 секунда - префиксная форма
{
	TIME temp(0, 0, 1);
	*this = *this + temp;
	return *this;
}

TIME TIME::operator++(int) // время + 1 секунда - постфиксная форма
{
	TIME temp(*this);
	++(*this);
	return temp;
}

//=====================================================================================

TIME TIME::operator-(TIME& subtr) // время - время
{
	TIME temp(0, 0, 0);
	if (this->S - subtr.S < 0)
	{
		temp.S += 60 + (this->S - subtr.S);
		temp.M -= 1;
	}
		else
		{
			temp.S += this->S - subtr.S;
		}
	if (this->M + temp.M - subtr.M < 0)
	{
		temp.M += 60 + (this->M - subtr.M);
		temp.H -= 1;
	}
		else
		{
			temp.M += this->M - subtr.M;
		}
	if (this->H + temp.H - subtr.H < 0)
	{
		temp.H += 24 + (this->H - subtr.H);
	}
		else
		{
			temp.H += this->H - subtr.H;
		}
	return temp;
}

TIME& TIME::operator--() // время - 1 секунда - префиксная форма
{
	TIME temp(0, 0, 1);
	*this = *this - temp;
	return *this;
}

TIME TIME::operator--(int) // время - 1 секунда - постфиксная форма
{
	TIME temp(*this);
	--(*this);
	return temp;
}

//=====================================================================================

TIME TIME::operator*(int multi) // время * число
{
	int secs = this->S + this->M * 60 + this->H * 3600;
	secs *= multi;
	int h = secs / 3600 % 24;
	int m = secs % 3600 / 60;
	int s = secs % 3600 % 60;
	TIME result(h, m, s);
	return result;
}

TIME TIME::operator/(int div) // время / число
{
	int secs = this->S + this->M * 60 + this->H * 3600;
	secs /= div;
	int h = secs / 3600 % 24;
	int m = secs % 3600 / 60;
	int s = secs % 3600 % 60;
	TIME result(h, m, s);
	return result;
}

//=====================================================================================

TIME TIME::operator+=(TIME& add) // время += время
{
	*this = *this + add;
	return *this;
}

TIME TIME::operator-=(TIME& subtr) // время -= время
{
	*this = *this - subtr;
	return *this;
}

TIME TIME::operator=(const TIME& equal) // время = время
{
	this->H = equal.H;
	this->M = equal.M;
	this->S = equal.S;
	return *this;
}

//=====================================================================================

bool TIME::operator<(TIME& compare) // время < время
{
	if (this->H < compare.H) return true;
	if (this->H == compare.H && this->M < compare.M) return true;
	if (this->M == compare.M && this->S < compare.S) return true;
	return false;
}

bool TIME::operator>(TIME& compare) // время > время
{
	if (this->H > compare.H) return true;
	if (this->H == compare.H && this->M > compare.M) return true;
	if (this->M == compare.M && this->S > compare.S) return true;
	return false;
}

bool TIME::operator==(TIME& compare) // время == время
{
	if (this->H == compare.H && this->M == compare.M && this->S == compare.S) return true;
	return false;
}

bool TIME::operator!=(TIME& compare) // время != время
{
	if (this->H != compare.H || this->M != compare.M || this->S != compare.S) return true;
	return false;
}

//===============================================================================

int& TIME::operator[](int index) // взятие элемента члена класса по индексу
{
	if (index == 0) return H;
	if (index == 1) return M;
	if (index == 2) return S;
}

TIME::operator int*() // возвращение объекта класса в виде одномерного массива
{
	int* A = new int [3];
	A[0] = H;
	A[1] = M;
	A[2] = S;
	return A;
}