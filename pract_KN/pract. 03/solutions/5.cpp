#include<iostream>

int main() {
	int number = 0;
	
	int temp = 0;
	int tempTwo = 1;

	int result = 0;

	std::cin >> number;

	for (int i = 0; i < number; i++) {
		result = tempTwo;
		tempTwo = tempTwo + temp;
		temp = result;
		//std::cout << "Local result at step " << i << " is: " << result << std::endl;
	}
	std::cout << result;

	/*При числата на фибоначи всяко следващо е сбор на предходните две.
	Започваме от 0 и 1.
	Създаваме две променливи които представляват стойностите в 0 и 1.

	0 1 1 2 3 5 8 13 (х)
	В случая х = 13 + 8.

	Премахнете коментара в цикъла за да видите подробно как работи той. Пробвайте по - големи входове (примерно 17-19).
	*/
}
