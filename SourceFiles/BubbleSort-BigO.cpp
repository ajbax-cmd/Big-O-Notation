#include <iostream>
#include <stdlib.h>     
#include <ctime>
#include <stdio.h> 
using namespace std;

//This simple program tests the number of operations a bubble performs for N number of items. Change the value of N to see how the number of operations changes

void swap (int &a, int &b);


int main()
{
	char input;
	do
	{
		int N;
		cout << "\nEnter an integer value for N: ";
		cin >> N;
		cout << endl;

		srand (time(0));
		int random;
		int array[N];
		
		for(int i = 0; i < N; i++)
		{
			int random = rand() % 100;
			array[i] = random;
		}
		
		for(int i = 0; i < N; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl << endl;
		
		
		int innerCount = 0;	
		int outerCount = 0;
		int total = 0;
		int ifStatement = 0;
		int worstCaseIf = 0;
		int worstCaseTotal = 0;
		for(int i = N -1; i > 0; i--)
		{
			for(int j = 0; j < i; j++)
			{
				if(array[j] > array[j+1])
				{
					swap(array[j], array[j+1]);
					ifStatement += 4;
				}
				innerCount++;
				worstCaseIf += 4;
			}
			outerCount++;
		}
		total = innerCount + outerCount + ifStatement;
		worstCaseTotal = innerCount + outerCount + worstCaseIf;
	
		for(int i = 0; i < N; i++)
		{
			cout << array[i] << " ";
		}
		
		cout << "\n\nWhen N is " << N << ":";
		cout << "\ninner: " << innerCount << "\nouter: " << outerCount << "\nworst case total: " << worstCaseTotal  <<   "\nactual total: " << total;
		cout << "\n\nRun again with a different value for N? ";
		cin >> input;
}while(input == 'Y' || input == 'y');
}
void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;	
}
