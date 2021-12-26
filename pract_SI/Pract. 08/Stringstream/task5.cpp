#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <algorithm>

int main()
{
    std::string line, word;
    std::set<std::string> words;
    
    getline(std::cin, line);
    std::istringstream lineStream(line);
    
    while(lineStream >> word)
        if(word.size() < 5)
        {
			transform(word.begin(), word.end(), word.begin(),[](unsigned char c){ return tolower(c); });
            words.insert(word);
        }
    if (words.size() > 0) 
    {
    for (std::set<std::string>::iterator it = words.begin(); it != --words.end(); ++it)
    {
		 std::cout << *it << ", ";
    }
    }
    
    std::cout << *(--words.end());
    return 0;
}