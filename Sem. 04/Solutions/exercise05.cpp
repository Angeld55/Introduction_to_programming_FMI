//#include <iostream>
//
//bool isPrime(int number)
//{
//    double temp = sqrt(number);
//    if (number < 2)
//    {
//        return false;
//    }
//    for (size_t i = 2; i <= temp; i++)
//    {
//        if (number % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//void printPrimePairs(int number)
//{
//    bool isFound = false;
//    for (size_t i = 2; i <= number / 2; i++)  // number/2 because of commutative property
//    {
//        if (isPrime(i) && isPrime(number - i))
//        {
//            std::cout << "Pair: " << i << "," << number - i << std::endl;
//            isFound = true;
//        }
//    }
//    if (!isFound)
//    {
//        std::cout << "There no such pair of numbers!" << std::endl;
//    }
//}
//
//int main()
//{
//    int number;
//
//    std::cout << "Enter a number: ";
//    std::cin >> number;
//
//    printPrimePairs(number);
//
//    return 0;
//}