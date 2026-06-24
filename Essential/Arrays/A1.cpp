#include<iostream>
#include<stdio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n{};
	cout << "Enter size of Array " << endl;
	cin >> n;


	int* A = new int[n];


	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << endl;
	}

	delete[] A;
	return 0;
}