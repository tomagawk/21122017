
#include <iostream>
using namespace std;
//	9.  ������� ������� �������� ������������ �����.(while).

int main()
{
	setlocale(LC_ALL, "");

	int number = 0, a = 1, b = 1;

	cout << "����i�� ���������� �����:\t";
	cin >> number;

	while (number%a == 0)
	{
		cout << number << endl;
		a++;
	}

	//for (a = 1; a <= number; ++a)
	//{

	//	if (number%a == 0)
	//	{
	//		cout << number << ", ";
	//	}
	//	
	//}
	cout << endl;
	system("pause");
}