#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::string str;
    std::vector<std::pair<std::string, int>> myVector;

    getline(std::cin, str);
    std::stringstream ss;
    ss << str;
    
    std::string temp;
    while (ss >> temp) {
        std::string lowString = "";
        bool is_exist = false;
        
        for (size_t i = 0; i < temp.size(); i++)
        {
            lowString += tolower(temp[i]);
        }
        
        for (size_t i = 0; i < myVector.size(); i++)
        {
            if (myVector[i].first == lowString)
            {
                myVector[i].second++;
                is_exist = !is_exist;
                break;
            }
        }
        
        if (is_exist == false)
        {
            myVector.push_back(std::make_pair(lowString, 1));
        }
    }

    std::vector<std::string> outVector;
    for (size_t i = 0; i < myVector.size(); i++)
    {
        if (myVector[i].second % 2 == 1)
        { 
            outVector.push_back(myVector[i].first);
        }
    }
    
    for (size_t i = 0; i < outVector.size() - 1; i++)
    {
        std::cout << outVector[i] << ", ";
    }
    std::cout << outVector[outVector.size() - 1] << std::endl;

    return 0;
}