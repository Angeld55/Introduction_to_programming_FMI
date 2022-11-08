/*
 * Задача: Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.
 * 
 * Вход: 531261, Изход: 112356
 *
 */

int countDigitOccurences(int n, int digit)
{
    int count = 0;
    while(n != 0)
    {
        if(n % 10 == digit)
            count++;
        n /= 10;
    }
    return count;
}
 
int concatAtBack(int n, int digit, int howManyTimes)
{
    for(int i = 0; i < howManyTimes; i++)
    {
        (n *= 10) += digit;
    }
    return n;
}
 
int sortNumber(int n)
{
    int result = 0;
    for(int i = 1; i <= 9; i++)
    {
        int currentDigitOccurences = countDigitOccurences(n, i);
        result = concatAtBack(result, i, currentDigitOccurences);
    }
    return result;
}
 
int main()
{
    cout<< sortNumber(912332);
 
    return 0;
}