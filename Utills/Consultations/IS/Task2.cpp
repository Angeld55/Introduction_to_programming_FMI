/*
 * Задача: Да се напише функция, която приема две естествени числа и връща ново число, което е тяхната конкатенация.
 *
 * Вход: 19 32, Изход: 1932
 *
 */

unsigned int concatDigitOnBack(unsigned int a, unsigned int digit)
{
    if(digit > 9)
        return 0;
    return a * 10 + digit;   
}

unsigned int reverse(unsigned int n)
{
    unsigned reversed = 0;
 
    while(n != 0)
    {
        (reversed *= 10) += (n % 10);
        n/=10;
    }
    return reversed;
}

unsigned int concatNumbers(unsigned int a, unsigned int b)
{
    unsigned int result = a; 
    unsigned int reversedB = reverse(b);
 
    while(reversedB != 0)
    {
        int lastDigit = reversedB % 10;
        result = concatDigitOnBack(result, lastDigit);
        reversedB /= 10;
    }
    return result;
}
 
int main()
{
    cout<<concatNumbers(123, 456);
 
    return 0;
}