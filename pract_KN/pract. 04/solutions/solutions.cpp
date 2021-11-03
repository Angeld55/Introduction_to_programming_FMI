#include<iostream>

int sumInInterval(int n, int m) {
	int result = 0;
	for (int i = n; i <= m; i++)
		result += i;

	return result;
}

double power(double number, int n) {
	double result = 1;
	for (int i = 0; i < n; i++)
		result *= n;
	return result;
}

int absolute(int n) {
	if (n < 0)
		return -n;
	return n;
}

double dist(double x1, double y1, double x2, double y2) {
	return sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
}

double perimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
	return dist(x1, y1, x2, y2) + dist(x1, y1, x3, y3) + dist(x2, y2, x3, y3);
}

int fact(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

bool isNumber(char n) {
	return (n >= '0' && n <= '9');
}

//Защо това работи?
int f(int a, int b) {
	return (a + b) * (a + b + 1) / 2 + b;
}

void play() {
	int computerNumber = rand() % 100 + 1;
	int myNumber = 0;
	while (myNumber != computerNumber) {
		std::cout << "Enter a number -> ";
		std::cin >> myNumber;
		if (myNumber > computerNumber)
			std::cout << "Try smaller number" << std::endl;
		else if (myNumber < computerNumber)
			std::cout << "Try bigger number" << std::endl;
	}
	std::cout << "Rigth!!!" << std::endl;
}

int main() {
	//(...)
}