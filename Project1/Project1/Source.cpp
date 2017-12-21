
#include <iostream>
using namespace std;
//	9.  Вивести дільники заданого натурального числа.(while).

int main()
{
	setlocale(LC_ALL, "");

	int number = 0, a = 1;

	cout << "введiть натуральне число:\t";
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