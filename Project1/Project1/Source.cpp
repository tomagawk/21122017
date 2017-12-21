
#include <iostream>
using namespace std;
//	9.  Вивести дільники заданого натурального числа.(while).

int main()
{
	setlocale(LC_ALL, "");

	int number = 0, a = 1, b = 1;

	cout << "введiть натуральне число:\t";
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