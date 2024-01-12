#include<iostream>
using namespace std;
int main()
{
	int array[10];
	cout << "Enter 10 elements" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	int even_flag = 0;
	int odd_flag = 0;
	for (int e = 0; e < 10; e++)
	{
		if (array[e] % 2 == 0)
		{
			even_flag++;
		}
		else
			odd_flag++;
	}
	cout << "The even number in the array are: " << even_flag << endl;
	cout << "The odd number in the array are: " << odd_flag << endl;
	
	return 0;
}
