#include "TIME.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int add = 127;
	TIME timeNULL;
	TIME timeParameter(20, 13, 47);
	TIME timeCopy(timeParameter);

	cout << "Время, созданное конструктором нулевого времени: "; timeNULL.printt();
	cout << endl;
	cout << "\nВремя, созданное конструктором времени с параметрами: "; timeParameter.printt();
	cout << endl;
	cout << "\nСкопированное время, созданное конструктором с параметрами: "; timeCopy.printt();
	cout << endl;


	cout << "\nПрисвоение времени "; timeParameter.printt(); cout << " параметров времени "; timeNULL.printt();
	timeParameter = timeNULL;
	cout << " : время после присвоения"; timeParameter.printt();
	cout << endl;

	cout << "\nПрисвоение времени "; timeParameter.printt(); cout << " значения числа " << add ;
	timeParameter = add;
	cout << " : время после присвоения "; timeParameter.printt();
	cout << endl;


	TIME timeAdd1(21, 50, 57), timeAdd2(7, 37, 57);
	TIME timeSum = timeAdd1 + timeAdd2; // ВРЕМЯ + ВРЕМЯ
	cout << "\nВремя "; timeAdd1.printt(); cout << " + "; cout << "Время "; timeAdd2.printt();
	cout << " = "; timeSum.printt();
	cout << endl;
 
	cout << "\nВремя "; timeSum.printt(); cout << " + "; cout << add; // ВРЕМЯ + ЧИСЛО
	timeSum = timeSum + add;
	cout << " = "; timeSum.printt();
	cout << endl;

	cout << "\nВремя "; timeSum.printt(); cout << " += "; cout << "Время "; timeAdd1.printt(); // ВРЕМЯ += ВРЕМЯ
	timeSum += timeAdd1;
	cout << " = "; timeSum.printt();
	cout << endl;

	cout << "\nВремя "; timeSum.printt(); cout << " += "; cout << add; // ВРЕМЯ += ЧИСЛО
	timeSum += add;
	cout << " = "; timeSum.printt();
	cout << endl;

	cout << "\nВремя "; timeSum.printt(); cout << " ++ в префиксной форме "; // ++ВРЕМЯ 
	++timeSum;
	cout << " = "; timeSum.printt();
	cout << endl;

	cout << "\nВремя "; timeSum.printt(); cout << " ++ в постфиксной форме "; // ВРЕМЯ++ 
	timeSum++;
	cout << " = "; timeSum.printt();
	cout << endl;


	TIME timeMinuend(21, 12, 17), timeSubtr(12, 21, 51); // ВРЕМЯ - ВРЕМЯ
	TIME timeDiff = timeMinuend - timeSubtr;
	cout << "\nВремя "; timeMinuend.printt(); cout << " - "; cout << "Время "; timeSubtr.printt();
	cout << " = "; timeDiff.printt();
	cout << endl;

	cout << "\nВремя "; timeDiff.printt(); cout << " - "; cout << add; // ВРЕМЯ - ЧИСЛО
	timeDiff = timeDiff - add;
	cout << " = "; timeDiff.printt();
	cout << endl;

	cout << "\nВремя "; timeDiff.printt(); cout << " -= "; cout << "Время "; timeSubtr.printt(); // ВРЕМЯ -= ВРЕМЯ
	timeDiff -= timeSubtr;
	cout << " = "; timeDiff.printt();
	cout << endl;

	cout << "\nВремя "; timeDiff.printt(); cout << " -= "; cout << add; // ВРЕМЯ -= ЧИСЛО
	timeDiff -= add;
	cout << " = "; timeDiff.printt();
	cout << endl;

	cout << "\nВремя "; timeDiff.printt(); cout << " -- в префиксной форме "; // --ВРЕМЯ 
	--timeDiff;
	cout << " = "; timeDiff.printt();
	cout << endl;

	cout << "\nВремя "; timeDiff.printt(); cout << " -- в постфиксной форме "; // ВРЕМЯ-- 
	timeDiff--;
	cout << " = "; timeDiff.printt();
	cout << endl;


	int multi = 7; // ВРЕМЯ * ЧИСЛО
	TIME timeMultiplied(17, 21, 43);
	TIME timeProduct = timeMultiplied * multi;
	cout << "\nВремя "; timeMultiplied.printt(); cout << " * "; cout << multi;
	cout << " = "; timeProduct.printt();
	cout << endl;

	int div = 3; // ВРЕМЯ / ЧИСЛО
	TIME timeDivisible(19, 15, 31);
	TIME timeQuot = timeDivisible / div;
	cout << "\nВремя "; timeDivisible.printt(); cout << " / "; cout << div;
	cout << " = "; timeQuot.printt();
	cout << endl;

	// ОПЕРАЦИИ СРАВНЕНИЯ
	TIME timeCompare1(3, 2, 2), timeCompare2(1, 33, 7);

	cout << "\nВремя "; timeCompare1.printt(); cout << " <  Времени "; timeCompare2.printt(); cout << " ? " << endl;
	if (timeCompare1 < timeCompare2) cout << "\nДА!" << endl;
	else cout << "\nНЕТ!" << endl;

	cout << "\nВремя "; timeCompare1.printt(); cout << " >  Времени "; timeCompare2.printt(); cout << " ? " << endl;
	if (timeCompare1 > timeCompare2) cout << "\nДА!" << endl;
	else cout << "\nНЕТ!" << endl;

	cout << "\nВремя "; timeCompare1.printt(); cout << " ==  Времени "; timeCompare2.printt(); cout << " ? " << endl;
	if (timeCompare1 == timeCompare2) cout << "\nДА!" << endl;
	else cout << "\nНЕТ!" << endl;

	cout << "\nВремя "; timeCompare1.printt(); cout << " !=  Времени "; timeCompare2.printt(); cout << " ? " << endl;
	if (timeCompare1 != timeCompare2) cout << "\nДА!" << endl;
	else cout << "\nНЕТ!" << endl;


	TIME time4other(19, 16, 6); // ОСТАЛЬНОЕ

	cout << "\nВзятие элементов члена класса "; time4other.printt(); 
	cout << " по индексам его элементов : Часы Времени ["; cout << time4other[0];
	cout << "] Минуты времени ["; cout << time4other[1]; cout << "] Секунды времени ["; 
	cout << time4other[2]; cout << "]" << endl;

	int* A = time4other;
	cout << "\nВремя "; time4other.printt(); cout << " возвращенное в виде одномерного массива ";
	cout << " [";
	for (int i = 0; i < 3; i++) cout << " " << A[i] << " ";
	cout << "]" << endl;
	delete[] A;


	return 0;
}
