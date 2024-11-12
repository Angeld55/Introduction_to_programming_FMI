#include <stdio.h>

int main()
{
	// task 1
	int number = 15;
	int isEven = (number % 2 == 0); // or !(num % 2)

	// task 2 
	int number = 25;
	int divider = 7;

	int quotient = number / divider;
	int remainder = number % divider;

	// task 3
	int number = 5139;

	int digit4 = number % 10;
	number /= 10; // same as number = number / 10;

	int digit3 = number % 10;
	number /= 10;

	int digit2 = number % 10;

	int digit1 = number / 10;

	// task 4
	int firstNumber = 5;
	int secondNumber = 10;

	int getBigger = (firstNumber < secondNumber) && (firstNumber = secondNumber);
	// the bigger number is stored in firstNumber

	// task 5
	char symbol = 'g';
	int positionInAlphabet1 = symbol - 'a' + 1;

	// additional task
	char symbol = 'A';
	char subtractionSymbol = 'a';

	int getPosition = ('A' <= symbol && symbol <= 'Z') && (subtractionSymbol = 'A');
	int positionInAlphabet2 = symbol - subtractionSymbol + 1;

	// task 6	
	int grade = 6;
	int isValid = (2 <= grade && grade <= 6);

	// task 7
	int number = 582;

	int digit3 = number % 10;
	number /= 10;
	int digit2 = number % 10;
	int digit1 = number / 10;

	int reversed = (digit3 * 100) + (digit2 * 10) + digit1;
	reversed = reversed + 1;

	// task 8
	int centimeters = 3;
	double inches = centimeters * 0.393701;

	// task 9
	int a = 5;
	int b = 7;

	int sumToPowerOfFour = (a + b) * (a + b) * (a + b) * (a + b);
	int differenceToPowerOfTwo = (a - b) * (a - b);

	int result = sumToPowerOfFour - differenceToPowerOfTwo;

	// task 10
	int levs = 193;

	int hundreds = levs / 100;
	levs = levs % 100;

	int fifties = levs / 50;
	levs = levs % 50;

	int twenties = levs / 20;
	levs = levs % 20;

	int tens = levs / 10;
	levs = levs % 10;

	int fives = levs / 5;
	levs = levs % 5;

	int twos = levs / 2;
	levs = levs % 2;

	int ones = levs / 1;
	levs = levs % 1;

	// task 11	
	int number = 234;

	int isTwoDigit = (number < 10 || 99 < number) && (number = number % 10);
	// in number is stored the last digit if the number is not two-digit number

	// task 12
	int a = 5;
	int b = 10;

	a = a * b; //a=50 (5*10)    
	b = a / b; //b=5 (50/10)    
	a = a / b; //a=10 (50/5)   
	// OR 
	a = a + b; //a=15 (5+10)    
	b = a - b; //b=5 (15-10)    
	a = a - b; //a=10 (15-5) 

	// task 13 
	char symbol1 = 'a';
	char symbol2 = 'b';
	char symbol3 = 'c';
	char symbol4 = 'd';
	char symbol5 = 'f';
	char symbol6 = 'z';

	int symbolsASCIISum = (symbol1 + symbol2 + symbol3 + symbol4 + symbol5 + symbol6);

	int isDivisibleByThree = (symbolsASCIISum % 3 == 0);

	// task 14
	int number = 9;
	int sumFromOneToNumber = (number * (number + 1)) / 2;

	// task 15 
	int number1 = 2;
	int number2 = 3;
	int number3 = 5;
	int number4 = 8;
	int number5 = 13;

	int isFibbonacci = (number3 == number2 + number1) && 
		(number4 = number3 + number2) && 
		(number5 == number4 + number3);

	// task 16
	int firstIntervalA = 2;
	int firstIntervalB = 5;

	int secondIntervalA = 1;
	int secondIntervalB = 4;

	int areIntersecting = (firstIntervalA <= secondIntervalB && secondIntervalB <= firstIntervalB) ||
		(firstIntervalA <= secondIntervalA && secondIntervalA <= firstIntervalB);

	// first condition is if the right end of second interval is inside the first interval
	// second condition is if the left end of second interval is inside the first interval

	// task 17

	int seconds = 533628;

	int days = seconds / (24 * 3600);
	seconds %= (24 * 3600);

	int hours = seconds / 3600;
	seconds %= 3600;

	int minutes = seconds / 60;
	seconds = seconds % 60;
}
