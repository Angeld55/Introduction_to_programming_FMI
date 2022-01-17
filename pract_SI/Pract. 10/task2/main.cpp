#include "ListofPoints.h"

int main()
{
    ListofPoints list;
    Point A;
    Point B;
    A.x = A.y = 9;
    B.x = B.y = 4;
  
    for (size_t i = 0; i < 10; i++)
    {
        list.addPoint(A);
    }
    list.addPoint(B);
    list.Print();
    std::cout << list.size<<std::endl;
    list.pop();
    list.Print();
    list.clear();
    std::cout << list.size;
    
}