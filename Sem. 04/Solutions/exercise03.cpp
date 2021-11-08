//#include <iostream>
//
//int distance(int p1, int p2)
//{
//    int distance = p2 - p1;
//    return distance *= distance;
//}
//
//double distanceBetweenTwoPoints(int x1, int y1, int x2, int y2)
//{
//    return sqrt(distance(x1, x2) + distance(y1, y2));
//}
//
//double perimeter(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//    double side1 = distanceBetweenTwoPoints(x1, y1, x2, y2);
//    double side2 = distanceBetweenTwoPoints(x2, y2, x3, y3);
//    double side3 = distanceBetweenTwoPoints(x3, y3, x1, y1);
//    return side1 + side2 + side3;
//}
//
//int main()
//{
//    int x1, y1, x2, y2, x3, y3;
//
//    std::cout << "Enter the first x and y coordinates: ";
//    std::cin >> x1 >> y1;
//
//    std::cout << "Enter the second x and y coordinates: ";
//    std::cin >> x2 >> y2;
//
//    std::cout << "Enter the third x and y coordinates: ";
//    std::cin >> x3 >> y3;
//
//    std::cout << "The perimeter of the triangle is: " << perimeter(x1, y1, x2, y2, x3, y3) << std::endl;
//
//    return 0;
//}