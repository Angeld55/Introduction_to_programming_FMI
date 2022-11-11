#include<iostream>
using namespace std;

const int MIN_GRADE = 2;
const int MAX_GRADE = 6;
const int SIZE = MAX_GRADE - MIN_GRADE + 1;

void printGrades(int grade, int count)
{
	for (int i = 0; i < count; i++)
		cout << grade << " ";
}
int main() 
{

	int gradesCount[SIZE] = {0};
	int sum = 0;
	int count = 0;

	int grade;
	cin >> grade;

	while (grade != -1)
	{
		if (grade >= MIN_GRADE && grade <= MAX_GRADE)
		{
			gradesCount[grade - MIN_GRADE]++;
			sum += grade;
			count++;

		}
		cin >> grade;
		
	}

	for (int i = 0; i < SIZE; i++)
		printGrades(i + MIN_GRADE, gradesCount[i]);

	cout << "Average: " << sum / (double)count;

	return 0;
}

