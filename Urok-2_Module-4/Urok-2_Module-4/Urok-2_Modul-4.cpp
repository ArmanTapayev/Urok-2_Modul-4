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

	cout << "\n����. �����, ������������� ���������\n";
	cout << "\n������� �������� 9 �����.\n";
start:
	cout << "\n������� ����� ������.\n";
	cout << "n = ";
	cin >> n;
	do
	{
		switch (n)
		{
#pragma region Task1
		case 1:
			int A, B;
			cout << "\n������ �1\n";

			cout << "\n1. ���� ��� ����� ����� A � B (A < B).\n";
			cout << "����� ��� ����� �����, ������������� ����� ������� �������\n";
			cout << "(�� ������� ���� ��� �����),\n";
			cout << "� ������� �� ��������, � ����� ���������� N ���� �����.\n";
		mark1:
			cout << "������� ��� ����� ����� � � �:\n";
			cout << "A = ";
			cin >> A;
			cout << "B = ";
			cin >> B;
			cout << endl;

			if (A >= B)
			{
				cout << "�� ������� � < B.\n";
				cout << "������� ����� ��� ���.\n";
				goto mark1;
			}

			for (i = B - 1; i > A; i--)
			{
				cout << i << endl;
			}

			cout << endl;
			cout << "���������� ����� = " << B - A - 1 << endl;
			cout << endl;

			system("pause");
			system("cls");

			goto start;
			break;
#pragma endregion

#pragma region Task2
		case 2:
			cout.precision(3);

			cout << "\n������ �2\n";

			cout << "\n2. ���� ����� ����� N (> 2) � ��� ������������ �����: A, B (A < B).\n";
			cout << "������� F(X) ������ �������� F(X) = 1 � sin(X).\n";
			cout << "����� �������� ������� F � N �������������� ������,\n";
			cout << "���������� ��������� ������� [A, B]:\n";
			cout << "F(A), F(A + H), F(A + 2H),... , F(B).\n";
			cout << endl;

			int N;
			double A2, B2, H;

		mark2:
			cout << "������� ����� ����� N>2:\n";
			cout << "N = ";
			cin >> N;

			if (N <= 2)
			{
				cout << "�� ������� N > 2.\n";
				cout << "������� N ��� ���.\n";
				goto mark2;
			}

			cout << endl;
		mark3:
			cout << "������� ��� ������������ ����� � � �:\n";
			cout << "A = ";
			cin >> A2;
			cout << "B = ";
			cin >> B2;
			cout << endl;

			if (A2 >= B2)
			{
				cout << "�� ������� � < B.\n";
				cout << "������� ����� ��� ���.\n";
				goto mark3;
			}

			H = (B2 - A2) / (N + 1);
			cout << "��� � = " << H;
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

			cout << "\n������ �3\n";

			cout << "\n3. ���� ����� D (> 0).������������������ ����� AN \n";
			cout << "������������ ��������� �������: A1 = 1, A2 = 2, AN = (AN�2 + AN�1)/2, N = 3, 4, ... \n";
			cout << "����� ������ �� ������� K, ��� ������� ����������� �������\n";
			cout << "AK - AK�1 < D, � ������� ���� �����, � ����� ����� AK�1 � AK.\n";
			cout << endl;

			float D;

		mark4:
			cout << "������� ����� D>0.\n";
			cout << "D = ";
			cin >> D;

			if (D <= 0)
			{
				cout << "����� D ������ ��� ������ ����. ������� D ��� ���.\n";
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
			cout << "A" << i - 1 << " = " << an_2 << "   " << "A" << i << " = " << an << "   " << "AK - AK�1 = " << abs(an - an_2) << endl;

			system("pause");
			system("cls");

			goto start;
			break;
#pragma endregion

#pragma region Task4
		case 4:
			cout << "\n������ �4\n";

			cout << "\n4. ������ ����������� ����� �� 10 �� N. ������� �������� ������� ���� �����.\n";
			cout << "������� ����������� ����� N:\n";
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
			cout << "\n������ �5\n";

			cout << "\n5. ������� �������� ����� �� 11 �� 99.\n";
			cout << endl;

			cout << "--------------------------- " << endl;
			cout << "  �����  | ������� �����  |  " << endl;
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

			cout << "\n��������� ����� � ��������\n" << endl;

			cout << "\n������ �1\n";

			cout << "\n1. ���� ������������������ �� n ������������ �����, ������������ �\n";
			cout << "�������������� �����. ����������, ����� ���������� �������������\n";
			cout << "����� �������� � ������ ������������������.\n";
			cout << "�������� �������� �� ������������.\n";
			cout << endl;

			cout << "������� ���������� ����� � ������������������ n:\n";
			cout << "n = ";
			cin >> n;

			cout << "������� ������������������ ������������ �����:\n";
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
			cout << "���������� ������������� �����: " << s << endl;
			cout << endl;

			system("pause");
			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Task7
		case 7:
			int current, prev;
			cout << "\n��������� ����� � ��������\n" << endl;

			cout << "\n������ �2\n";

			cout << "\n2. ���� ������������������ ����� ����� 1 2 18 , , ..., , a a a � ������ ������� \n";
			cout << "�������� ��������� ������ ����� ����� ���������. ���������� \n";
			cout << "���������� ����� ��������� ������������������.\n";
			cout << "�������� �������� �� ������������.\n";
			cout << endl;

			cout << "������� ���������� ����� � ������������������ n:\n";
			cout << "n = ";
			cin >> n;

			cout << "������� ������������������ ������������ �����:\n";
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
			cout << "���������� ���������� �����: " << s << endl;
			cout << endl;

			system("pause");
			system("cls");
			goto start;
			break;
#pragma endregion

#pragma region Task8
		case 8:
			cout << "\n������������� ��������� ��������� ����� ���������� ����� � ��������\n";
			cout << "\n������ �1\n";
			cout << "\n1. �������� ������ �� ����������� ������� �� 20 �������� ������.\n";
			cout << "� ������ ������ ����������� ��� �������, ����� ��� ��������� ������. \n";
			cout << "������� �������� ����� �� ����������� ������ \"5\"?\n";
			cout << "�������� �������� �� ������������.\n";
			cout << "����������� ��� ������:\n";
			cout << "a.	��������, ��� ������� ����� �� ��� ������� ������\n";
			cout << "b.	�����������, ��� ������� ����� ����� ��� ������� ������\n";
			cout << endl;
			cout << "�. ������� ���������� ������� � ������ (���������� ������ ���� ������ 20):\n";

			int five;

			s = 0;

			do
			{
				cin >> five;
				s++;

			} while (five == 5);

			cout << endl;
			cout << "���������� ������: " << s - 1 << endl;
			cout << endl;
			cout << endl;

			cout << "b. ������� ���������� ������� � ������ (���������� ����� ���� ������ 20):\n";

			bool val;
			int w;
			s = 0;
			n = 20;//���������� �������� � ������
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
			cout << "���������� ������: " << s - w << endl;
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
			cout << "\n������������� ��������� ��������� ����� ���������� ����� � ��������\n" << endl;

			cout << "\n������ �2\n";

			cout << "\n2. �������� �������� � ���������� �������, �������� �� ������ ���� ���.\n";
			cout << "������� ��� ������� �� ����. ����������, � ������� ������ ����������\n";
			cout << "������ ���� ������ ����������, ������� � ������� ���, ������� �� ����?\n";
			cout << "�������� �������� �� ������������.\n";
			cout << "����������� ��� ������:\n";
			cout << "a. ��������, ��� � �����-�� ��� ��� ������ ��������\n";
			cout << "b.	�����������, ��� ������� ����� �� ���� �� � ����� ���� ���.\n";
			cout << endl;
			cout << "�. ���������� ������� ��������� 0. ��������� 0 ����� �������� ���� ��� �������:\n";

			s = 0;

			do
			{
				cin >> day;
				s++;
			} while (day == 0);

			cout << endl;
			cout << "���������� ���� ��� �������: " << s - 1 << endl;
			cout << endl;
			cout << endl;

			cout << "b. ��������, ��� ������� ����� �� ���� �� � ����� ���� ��� (���������� ���� � ��� 31):\n";

			bool gul;
			int po;

			s = 0;
			n = 31;//���������� ���� � ���

			do
			{
				cin >> day;
				gul = (day != 0);
				s++;
				n--;
			} while (day == 0 && n>0);

			po = int(gul);
			cout << endl;
			cout << "���������� ���� ��� �������: " << s - po << endl;
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
			cout << "\n��� ������ �� ������� ������� 0.\n";
			cout << "��� ����������� ������� 1.\n";
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
	cout << "\n�������!\n";
	system("pause");
}