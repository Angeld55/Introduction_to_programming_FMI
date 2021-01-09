#include <iostream>
#include <cstring>
using namespace std;

const int MAXLEN =  1024;


int fillWords(const char* str, char words[MAXLEN][MAXLEN])
{
    int len = strlen(str);
    
    int currentWordCursorInMatrix = 0;
    int count = 0 ; 
    
    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            if(currentWordCursorInMatrix != 0)
            {
                words[count][currentWordCursorInMatrix] = '\0';
                count++;
                currentWordCursorInMatrix = 0;
            }
        }
        else
        {
            words[count][currentWordCursorInMatrix] = str[i];
            currentWordCursorInMatrix++;
        }
    }
    
    return count;
    
}

void createReversedSentence(char words[MAXLEN][MAXLEN], int wordsCount,  char* newSentence)
{
    
    for (int j = wordsCount - 1; j >= 0 ; j--)
    {
	    strcat(newSentence, words[j]);
	    strcat(newSentence, " ");
    }
}
int main()
{
    const char* str = "How are you   friends. I am fine!";
    
    char words[MAXLEN][MAXLEN];
    
    int wordsCount = fillWords(str, words);

    char* newSentense = new char[strlen(str)];
    
    createReversedSentence(words, wordsCount, newSentense);
    
    cout << newSentense << endl;
    
    delete[] newSentense;
    
    return 0;
}
