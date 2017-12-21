
#include <iostream>
using namespace std;
//	9.  Вивести дільники заданого натурального числа.(while).

int main()
{
	setlocale(LC_ALL, "");

	int number = 0, a = 1, b = 1;

	cout << "введiть натуральне число:\t";
	cin >> number;

	for (; a <= number;++a)
	{

		if (number %a == 0)
		{
			cout << number << ", ";
		}
		
	}

	system("pause");
}