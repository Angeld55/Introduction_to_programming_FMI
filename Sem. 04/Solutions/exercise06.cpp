#include <iostream>

void printSquareNumbers(int a, int b)
{
    for (size_t i = a; i < b; i++)
    {
        int sqrtCurr = sqrt(i);
        int sqrtB = sqrt(b);
        for (size_t j = sqrtCurr; j <= sqrtB; j++)
        {
            int copyIndex = j;
            while (copyIndex <= b)
            {
                copyIndex *= j;
                if (copyIndex == i)
                {
                    std::cout << copyIndex << std::endl;
                    break;
                }
            }
        }

    }
}

int main()
{
    int a, b;
    std::cout << "Enter start of interval: ";
    std::cin >> a;
    std::cout << "Enter end of interval: ";
    std::cin >> b;

    printSquareNumbers(a, b);
}