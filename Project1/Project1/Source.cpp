
#include <iostream>
using namespace std;
//	9.  ������� ������� �������� ������������ �����.(while).

int main()
{
	setlocale(LC_ALL, "");

	int number = 0, a = 1;

	cout << "����i�� ���������� �����:\t";
	cin >> number;

	while (a <= number)
	{
		if (number % a== 0)
		{
		cout << a << endl;
		}
		a++;
	}
	cout << endl;
	system("pause");
}