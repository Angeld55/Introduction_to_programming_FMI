#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

const unsigned CAPACITY = 1024;


void task2a(const char* text, unsigned& upperCase, unsigned& lowerCase)
{
    while(*text != '\0')
    {
        if('a' <= *text && *text <= 'z')
            lowerCase++;
            
        if('A' <= *text && *text <= 'Z')
            upperCase++;   
        
        text++;
    }
}


bool isDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}


//we assume that ch is a digit char.
int convertToInt(char ch)
{
    return ch - '0';
}

unsigned task2b(char* text)
{
	char newText[CAPACITY];
	unsigned newTextIter = 0;

	char* textIter = text;

	unsigned mult = 1;  //would be 0 for var2
	unsigned accumulatedNumber = 0;

	while (*textIter != '\0')
	{
		if (isDigit(*textIter))
		{
            (accumulatedNumber *= 10) += convertToInt(*textIter);
            textIter++;
		}
		else
		{
		    if(accumulatedNumber != 0)
		         mult *= accumulatedNumber; // += for var2
		    accumulatedNumber = 0;
		    
			newText[newTextIter++] = *textIter;
			textIter++;
		}

	}
	
	//if the string ends with a digit we should add it too.
	if(accumulatedNumber != 0)
		  mult *= accumulatedNumber; // += for var2
	
	newText[newTextIter] = '\0';
	strcpy(text, newText);
	return mult;
}


int main()
{
    char text[CAPACITY] = "Abc23ffds3ff5";

    unsigned lowerCase = 0, upperCase = 0;
    task2a(text, upperCase, lowerCase);
    cout << lowerCase << " " << upperCase << endl;
    
    cout << task2b(text) << endl;
    cout << text << endl;
}
