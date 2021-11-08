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
//int countPrimeDivisors(int number)
//{
//    int count = 0;
//    for (size_t div = 2; div <= number; div++)
//    {
//        if (number % div == 0 && isPrime(div))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//void primeDivisors(int a, int b, int k)
//{
//    for (size_t i = a; i <= b; i++)
//    {
//        if (countPrimeDivisors(i) == k)
//        {
//            std::cout << i << " ";
//        }
//    }
//}
//
//int main()
//{
//    int a, b, k;
//
//    std::cout << "Enter start of interval: ";
//    std::cin >> a;
//
//    std::cout << "Enter end of interval: ";
//    std::cin >> b;
//
//    std::cout << "Enter k: ";
//    std::cin >> k;
//
//    std::cout << "Numbers that have k different prime divisors: ";
//    primeDivisors(a, b, k);
//
//    return 0;
//}