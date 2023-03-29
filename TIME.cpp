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

TIME::~TIME() // деструктор, пустой, т.к. при работе с членами класса динамическая память используется в 1 методе, в котором и очищается
{

}

void TIME::print_time() // вывод времени на экран
{
	cout << "[" << H << ":" << M << ":" << S << "]" << endl;
}

TIME TIME::operator+(TIME& sum)
{
	TIME temp(0,0,0);
	if (this->S + sum.S >= 60 )
	{
		temp.S += (this->S + sum.S) - 60;
		temp.M += 1;
	}
		else
		{
			temp.S += this->S + sum.S;
		}
	if (this->M + sum.M + temp.M >= 60)
	{
		temp.M += (this->M + sum.M) - 60;
		temp.H += 1;
	}
		else
		{
			temp.M += this->M + sum.M;
		}
	if (this->H + sum.H + temp.H >= 24)
		{
			temp.H += (this->H + sum.H) - 24;         
		}
		else
		{
			temp.H += this->H + sum.H;
		}
	return temp;
}

TIME& TIME::operator++()
{
	TIME temp(0, 0, 1);
	*this = *this + temp;
	return *this;
}

TIME TIME::operator++(int)
{
	TIME temp(*this);
	++(*this);
	return temp;
}

TIME TIME::operator-(TIME& dif)
{
	TIME temp(0, 0, 0);
	if (this->S - dif.S < 0)
	{
		temp.S += 60 + (this->S - dif.S);
		temp.M -= 1;
	}
		else
		{
			temp.S += this->S - dif.S;
		}
	if (this->M + temp.M - dif.M < 0)
	{
		temp.M += 60 + (this->M - dif.M);
		temp.H -= 1;
	}
		else
		{
			temp.M += this->M - dif.M;
		}
	if (this->H + temp.H - dif.H < 0)
	{
		temp.H += 24 + (this->H - dif.H);
	}
		else
		{
			temp.H += this->H - dif.H;
		}
	return temp;
}

TIME& TIME::operator--()
{
	TIME temp(0, 0, 1);
	*this = *this - temp;
	return *this;
}

TIME TIME::operator--(int)
{
	TIME temp(*this);
	--(*this);
	return temp;
}

TIME TIME::operator*(int multi)
{
	int secs = this->S + this->M * 60 + this->H * 3600;
	secs *= multi;
	int h = secs / 3600 % 24;
	int m = secs % 3600 / 60;
	int s = secs % 3600 % 60;
	TIME result(h, m, s);
	return result;
}

TIME TIME::operator/(int div)
{
	int secs = this->S + this->M * 60 + this->H * 3600;
	secs /= div;
	int h = secs / 3600 % 24;
	int m = secs % 3600 / 60;
	int s = secs % 3600 % 60;
	TIME result(h, m, s);
	return result;
}

TIME TIME::operator+=(TIME& other)
{
	*this = *this + other;
	return *this;
}

TIME TIME::operator-=(TIME& other)
{
	*this = *this - other;
	return *this;
}

TIME TIME::operator=(const TIME& other)
{
	this->H = other.H;
	this->M = other.M;
	this->S = other.S;
	return *this;
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
	else if (this->H == other.H && this->M > other.M)
		{
			return true;
		}
		else if (this->M == other.M && this->S > other.S)
			{
				return true;
			}
			else
			{
				return false;
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

int& TIME::operator[](int index)
{
	if (index == 0)
		return H;
	else if (index == 1)
		return M;
	else if (index == 2)
		return S;
	else
		throw out_of_range("Index out of range");
}

TIME::operator int*() // возвращение объекта класса в виде одномерного массива (преобразование к базовому типу)
{
	int* A = new int [3];
	A[0] = H;
	A[1] = M;
	A[2] = S;
	return A;
}