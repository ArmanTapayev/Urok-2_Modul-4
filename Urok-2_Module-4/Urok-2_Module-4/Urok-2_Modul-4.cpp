#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

void main()
{
	system("color 1A");
	setlocale(LC_ALL, "Rus");
	int n = 1;
	int i, s;

	cout << "\nТЕМА. Циклы, использование отладчика\n";
	cout << "\nЗадание содержит 9 задач.\n";
start:
	cout << "\nВведите номер задачи.\n";
	cout << "n = ";
	cin >> n;
	do
	{
		switch (n)
		{
#pragma region Task1
		case 1:
			int A, B;
			cout << "\nЗадача №1\n";

			cout << "\n1. Даны два целых числа A и B (A < B).\n";
			cout << "Найти все целые числа, расположенные между данными числами\n";
			cout << "(не включая сами эти числа),\n";
			cout << "в порядке их убывания, а также количество N этих чисел.\n";
		mark1:
			cout << "Введите два целых числа А и В:\n";
			cout << "A = ";
			cin >> A;
			cout << "B = ";
			cin >> B;
			cout << endl;

			if (A >= B)
			{
				cout << "По условию А < B.\n";
				cout << "Введите числа еще раз.\n";
				goto mark1;
			}

			for (i = B - 1; i > A; i--)
			{
				cout << i << endl;
			}

			cout << endl;
			cout << "Количество чисел = " << B - A - 1 << endl;
			cout << endl;

			system("pause");
			system("cls");

			goto start;
			break;
#pragma endregion

#pragma region Task2
		case 2:
			cout.precision(3);

			cout << "\nЗадача №2\n";

			cout << "\n2. Дано целое число N (> 2) и две вещественные точки: A, B (A < B).\n";
			cout << "Функция F(X) задана формулой F(X) = 1 – sin(X).\n";
			cout << "Найти значения функции F в N равноотстоящих точках,\n";
			cout << "образующих разбиение отрезка [A, B]:\n";
			cout << "F(A), F(A + H), F(A + 2H),... , F(B).\n";
			cout << endl;

			int N;
			double A2, B2, H;

		mark2:
			cout << "Введите челое число N>2:\n";
			cout << "N = ";
			cin >> N;

			if (N <= 2)
			{
				cout << "По условию N > 2.\n";
				cout << "Введите N еще раз.\n";
				goto mark2;
			}

			cout << endl;
		mark3:
			cout << "Введите два вещественных числа А и В:\n";
			cout << "A = ";
			cin >> A2;
			cout << "B = ";
			cin >> B2;
			cout << endl;

			if (A2 >= B2)
			{
				cout << "По условию А < B.\n";
				cout << "Введите числа еще раз.\n";
				goto mark3;
			}

			H = (B2 - A2) / (N + 1);
			cout << "Шаг Н = " << H;
			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "      X     |     F(X)       " << endl;
			cout << "--------------------------- " << endl;

			do
			{
				cout << "   " << A2 << "\t    |    " << 1 - sin(A2) << endl;
				A2 = A2 + H;
			} while (A2 < B2);

			cout << "   " << B2 << "\t    |    " << 1 - sin(B2) << endl;
			cout << endl;

			system("pause");
			system("cls");

			goto start;

			break;
#pragma endregion

#pragma region Task3
		case 3:
			cout.precision(8);

			cout << "\nЗадача №3\n";

			cout << "\n3. Дано число D (> 0).Последовательность чисел AN \n";
			cout << "определяется следующим образом: A1 = 1, A2 = 2, AN = (AN–2 + AN–1)/2, N = 3, 4, ... \n";
			cout << "Найти первый из номеров K, для которых выполняется условие\n";
			cout << "AK - AK–1 < D, и вывести этот номер, а также числа AK–1 и AK.\n";
			cout << endl;

			float D;

		mark4:
			cout << "Введите число D>0.\n";
			cout << "D = ";
			cin >> D;

			if (D <= 0)
			{
				cout << "Число D должно быь больше нуля. Введите D еще раз.\n";
				goto mark4;
			}

			float an_1;
			float an_2;
			float an;

			an_1 = 1;
			an_2 = 2;
			an = (an_2 + an_1) / 2;
			i = 3;

			while (abs(an - an_2) >= D)
			{
				i++;
				an_1 = an_2;
				an_2 = an;
				an = (an_2 + an_1) / 2;
			}

			cout << endl;
			cout << "K = " << i << endl;
			cout << "A" << i - 1 << " = " << an_2 << "   " << "A" << i << " = " << an << "   " << "AK - AK–1 = " << abs(an - an_2) << endl;

			system("pause");
			system("cls");

			goto start;
			break;
#pragma endregion

#pragma region Task4
		case 4:
			cout << "\nЗадача №4\n";

			cout << "\n4. Задано натуральные числа от 10 до N. Вывести нечетные кратные пяти числа.\n";
			cout << "Введите натуральное число N:\n";
			cout << "N = ";
			cin >> N;
			cout << endl;

			for (i = 10; i <= N; i++)
			{
				if (i % 2 != 0 && i % 5 == 0)
				{
					cout << "    " << i << endl;
				}
			}

			cout << endl;
			system("pause");
			system("cls");

			goto start;

			break;
#pragma endregion

#pragma region Task5
		case 5:
			cout << "\nЗадача №5\n";

			cout << "\n5. Вывести квадраты чисел от 11 до 99.\n";
			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "  Число  | Квадрат числа  |  " << endl;
			cout << "--------------------------- " << endl;

			for (i = 11; i <= 99; i++)
			{
				cout << "    " << i << "\t |\t" << i*i << "\t  |" << endl;
			}

			cout << endl;
			system("pause");
			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Task6
		case 6:

			cout << "\nОператоры цикла с условием\n" << endl;

			cout << "\nЗадача №1\n";

			cout << "\n1. Дана последовательность из n вещественных чисел, начинающаяся с\n";
			cout << "отрицательного числа. Определить, какое количество отрицательных\n";
			cout << "чисел записано в начале последовательности.\n";
			cout << "Условный оператор не использовать.\n";
			cout << endl;

			cout << "Введите количество чисел в последовательности n:\n";
			cout << "n = ";
			cin >> n;

			cout << "Введите последовательность вещественных чисел:\n";
			cout << endl;

			double x;

			s = 0;

				for (i = 1; i <= n; i++)
				{
					cin >> x;
					while (x < 0)
					{
						s++;
						break;
					}
				}

			cout << endl;
			cout << "Количество отрицательных чисел: " << s << endl;
			cout << endl;

			system("pause");
			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Task7
		case 7:
			int current, prev;
			cout << "\nОператоры цикла с условием\n" << endl;

			cout << "\nЗадача №2\n";

			cout << "\n2. Дана последовательность целых чисел 1 2 18 , , ..., , a a a в начале которой \n";
			cout << "записано несколько равных между собой элементов. Определить \n";
			cout << "количество таких элементов последовательности.\n";
			cout << "Условный оператор не использовать.\n";
			cout << endl;

			cout << "Введите количество чисел в последовательности n:\n";
			cout << "n = ";
			cin >> n;

			cout << "Введите последовательность вещественных чисел:\n";
			cin >> prev;

			s = 1;

			for (i = 1; i<n; i++)
			{
				cin >> current;

				while (prev == current)
				{
					s++;
					break;
				}

				prev = current;
			}

			cout << endl;
			cout << "Количество одинаковых чисел: " << s << endl;
			cout << endl;

			system("pause");
			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Task8
		case 8:
			cout << "\nИспользование условного оператора после операторов цикла с условием\n";
			cout << "\nЗадача №1\n";
			cout << "\n1. Известны оценки по информатике каждого из 20 учеников класса.\n";
			cout << "В начале списка перечислены все пятерки, затем все остальные оценки. \n";
			cout << "Сколько учеников имеют по информатике оценку \"5\"?\n";
			cout << "Условный оператор не использовать.\n";
			cout << "Рассмотреть два случая:\n";
			cout << "a.	известно, что пятерки имеют не все ученики класса\n";
			cout << "b.	допускается, что пятерки могут иметь все ученики класса\n";
			cout << endl;
			cout << "а. Введите количество пятерок в классе (количество должно быть меньше 20):\n";

			int five;

			s = 0;

			do
			{
				cin >> five;
				s++;

			} while (five == 5);

			cout << endl;
			cout << "Количество пятёрок: " << s - 1 << endl;
			cout << endl;
			cout << endl;

			cout << "b. Введите количество пятерок в классе (количество может быть равным 20):\n";

			bool val;
			int w;
			s = 0;
			n = 20;//количество учеников в классе
			val = 0;

			do
			{
				cin >> five;
				val = five % 5;
				s++;
				n--;
			} while (five == 5 && n>0);

			w = int(val);
			cout << endl;
			cout << "Количество пятёрок: " << s - w << endl;
			cout << endl;
			cout << endl;

			system("pause");
			system("cls");

			goto start;
			break;
#pragma endregion

#pragma region Task9
		case 9:
			int day;
			cout << "\nИспользование условного оператора после операторов цикла с условием\n" << endl;

			cout << "\nЗадача №2\n";

			cout << "\n2. Известны сведения о количестве осадков, выпавших за каждый день мая.\n";
			cout << "Первого мая осадков не было. Определить, в течение какого количества\n";
			cout << "первых дней месяца непрерывно, начиная с первого мая, осадков не было?\n";
			cout << "Условный оператор не использовать.\n";
			cout << "Рассмотреть два случая:\n";
			cout << "a. известно, что в какие-то дни мая осадки выпадали\n";
			cout << "b.	допускается, что осадков могло не быть ни в какой день мая.\n";
			cout << endl;
			cout << "а. Отсутствие осадков обозначим 0. Введенный 0 будет означать день без осадков:\n";

			s = 0;

			do
			{
				cin >> day;
				s++;
			} while (day == 0);

			cout << endl;
			cout << "Количество дней без осадков: " << s - 1 << endl;
			cout << endl;
			cout << endl;

			cout << "b. Допустим, что осадков могло не быть ни в какой день мая (количество дней в мае 31):\n";

			bool gul;
			int po;

			s = 0;
			n = 31;//количество дней в мае

			do
			{
				cin >> day;
				gul = (day != 0);
				s++;
				n--;
			} while (day == 0 && n>0);

			po = int(gul);
			cout << endl;
			cout << "Количество дней без осадков: " << s - po << endl;
			cout << endl;
			cout << endl;

			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Default
		default:
		mark_def:
			int z;
			cout << "\nДля выхода из задания нажмите 0.\n";
			cout << "Для продолжения введите 1.\n";
			cin >> z;

			if (z == 0)
			{
				goto end;
			}
			else if (z == 1)
			{
				goto start;
			}

			goto mark_def;
			break;
#pragma endregion
		}
	} while (n);
end:
	cout << "\nСпасибо!\n";
	system("pause");
}