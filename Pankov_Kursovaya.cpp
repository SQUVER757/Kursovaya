#include "TIME.h"

int main()
{
	setlocale(LC_ALL, "rus");
	TIME null;
	cout << "Время, заданное конструктором нулевого времени:" << endl;
	null.printt();
	TIME parameter(21, 12, 34);
	cout << "Время, заданное конструктором с параметрами:" << endl;
	parameter.printt();
	TIME copy(parameter);
	cout << "Копия времени, заданного конструктором с параметрами:" << endl;
	copy.printt();
	cout << "Время, заданное конструктором с параметрами, возвращенное в ввиде одномерного массива:" << endl;
	int* A = parameter;
	cout << "[" << A[0] << ":" << A[1] << ":" << A[2] << "]" << endl;
	delete[] A;


	TIME add1(23, 45, 58), add2(7, 23, 36);
	TIME sum = add1 + add2;
	cout << "Время [" << add1[0] << ":" << add1[1] << ":" << add1[2] << "]" << " + " 
		<< "Время [" << add2[0] << ":" << add2[1] << ":" << add2[2] << "]:" << endl;
	sum.printt();
	cout << "Время [" << add1[0] << ":" << add1[1] << ":" << add1[2] << "]" << " ++ в префиксной форме:" << endl;
	++add1;
	add1.printt();
	cout << "Время [" << add1[0] << ":" << add1[1] << ":" << add1[2] << "]" << " ++ в постфиксной форме:" << endl;
	add1++;
	add1.printt();


	TIME min(19, 7, 18), subtr(8, 5, 27);
	TIME dif = min - subtr;
	cout << "Время [" << min[0] << ":" << min[1] << ":" << min[2] << "]" << " - "
		<< "Время [" << subtr[0] << ":" << subtr[1] << ":" << subtr[2] << "]:" << endl;
	dif.printt();
	cout << "Время [" << min[0] << ":" << min[1] << ":" << min[2] << "]" << " -- в префиксной форме:" << endl;
	--min;
	min.printt();
	cout << "Время [" << min[0] << ":" << min[1] << ":" << min[2] << "]" << " -- в постфиксной форме:" << endl;
	min--;
	min.printt();


	TIME time(15, 57, 45);
	TIME prod = time * 11;
	cout << "Время [" << time[0] << ":" << time[1] << ":" << time[2] << "]" << " * 11:" << endl;
	prod.printt();
	TIME quot = time / 5;
	cout << "Время [" << time[0] << ":" << time[1] << ":" << time[2] << "]" << " / 5:" << endl;
	quot.printt();


	TIME add3(17, 51, 20), add4(20, 31, 14);
	cout << "Время [" << add3[0] << ":" << add3[1] << ":" << add3[2] << "]" << " += "
		<< "Время [" << add4[0] << ":" << add4[1] << ":" << add4[2] << "]:" << endl;
	add3 += add4;
	add3.printt();
	TIME dif1(15, 22, 39), dif2(5, 23, 40);
	cout << "Время [" << dif1[0] << ":" << dif1[1] << ":" << dif1[2] << "]" << " -= "
		<< "Время [" << dif2[0] << ":" << dif2[1] << ":" << dif2[2] << "]:" << endl;
	dif1 -= dif2;
	dif1.printt();


	TIME compare1(19, 11, 44), compare2(17, 11, 43);
	cout << "Время [" << compare1[0] << ":" << compare1[1] << ":" << compare1[2] << "]" << " < "
		<< "Время [" << compare2[0] << ":" << compare2[1] << ":" << compare2[2] << "] ?:" << endl;
	if (compare1 < compare2) cout << "ДА" << endl;
	else cout << "НЕТ" << endl;

	cout << "Время [" << compare1[0] << ":" << compare1[1] << ":" << compare1[2] << "]" << " > "
		<< "Время [" << compare2[0] << ":" << compare2[1] << ":" << compare2[2] << "] ?:" << endl;
	if (compare1 > compare2) cout << "ДА" << endl;
	else cout << "НЕТ" << endl;

	cout << "Время [" << compare1[0] << ":" << compare1[1] << ":" << compare1[2] << "]" << " == "
		<< "Время [" << compare2[0] << ":" << compare2[1] << ":" << compare2[2] << "] ?:" << endl;
	if (compare1 == compare2) cout << "ДА" << endl;
	else cout << "НЕТ" << endl;

	cout << "Время [" << compare1[0] << ":" << compare1[1] << ":" << compare1[2] << "]" << " != "
		<< "Время [" << compare2[0] << ":" << compare2[1] << ":" << compare2[2] << "] ?:" << endl;
	if (compare1 != compare2) cout << "ДА" << endl;
	else cout << "НЕТ" << endl;


	return 0;
}
