#include <iostream>
using namespace std;


bool wordSymbol(char ch)
{
    return  (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
unsigned getWordsCount(const char* str)
{
    unsigned count = 0;
    while(*str)
    {
        if(wordSymbol(*str) && !wordSymbol(*(str + 1)))
            count++;
        str++;
    }
    return count;
}

void skipInvalid(const char*& str)
{
    while(*str && !wordSymbol(*str))
        str++;
}

char* getNextWord(const char*& str)
{
    unsigned ind = 0;
    
    while(wordSymbol(str[ind]))
    {
        ind++;
    }
    char* word = new char[ind + 1];
    word[ind] = '\0';
    
    for(int i = 0; i < ind; i++)
        word[i] = str[i];
    str += ind;
    return word;
}

char** tokenize(const char* str, size_t& size)
{
    unsigned wordsCount = getWordsCount(str);
    char** words = new char*[wordsCount];
    
    unsigned currentWordIndex = 0;
    while(*str)
    {
        skipInvalid(str);

        if (!(*str))
        {
            break;
        }
        
        char* word = getNextWord(str); 
            
        words[currentWordIndex++] = word;
        //we wont increment str since it's beeing changed in the skipInvalid/getNextWord functions.
    }
    size = wordsCount; //or we can skip the size and use a santinel -> nullptr
    return words;
}

void printWords(char** words, size_t size)
{
    for(unsigned i = 0; i < size; i++)
        cout << words[i] << endl;
}

void free(char** words, size_t size)
{
     for(unsigned i = 0; i < size; i++)
         delete[] words[i];
     delete[] words;
}
int main()
{
    size_t count;
    char** res = tokenize("hello i am a sentence", count);
    
    printWords(res, count);
    free(res, count);
    return 0;
}
