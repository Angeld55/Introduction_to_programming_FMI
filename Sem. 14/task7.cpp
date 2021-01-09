#include <iostream>
#include <cstring>
using namespace std;

const int MAXLEN =  1024;

//creates a matrix of the words in the sentence.
int fillWords(const char* str, char words[MAXLEN][MAXLEN])
{
    int len = strlen(str);
    
    int currentWordCursorInMatrix = 0;
    int count = 0 ; //also the index of the row in the matrix.
    
    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ') // the current word ends here.
        {
            if(currentWordCursorInMatrix != 0) // check if we have writen at least one symbol in the current word.
            {
                words[count][currentWordCursorInMatrix] = '\0';
                count++;
                currentWordCursorInMatrix = 0;
            }
        }
        else
        {
            words[count][currentWordCursorInMatrix] = str[i]; // we write the symbol in the current word.
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
	    if(j != 0)
	    	strcat(newSentence, " "); //the space between the words
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
