#include <iostream>
using namespace std;

const int GRADES_COUNT = 5;

void printGrades(const int grades[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < grades[i]; j++)
			cout << i + 2 << " ";
	}
}
int main()
{
	int grades[GRADES_COUNT] = { 0, 0, 0, 0, 0 }; //[][][][] 0 -> 2   1 -> 3  2 ->4  3->5 4 ->6;

	int grade;
	int sum = 0, count = 0;
	cin >> grade;

	while (grade != -1)
	{
		grades[grade - 2]++;
		count++;
		sum += grade;
		cin >> grade;
	}

	printGrades(grades, GRADES_COUNT);

	cout << "Average: " << sum / (double)count;


}
