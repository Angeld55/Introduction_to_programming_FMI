//#include <iostream>
//
//int distance(int p1, int p2)
//{
//	int distance = p2 - p1;
//	return distance *= distance;
//}
//
//// formula for distance between two points -> sqrt((x2 - x1)^2 + (y2 - y1)^2) 
//double distanceBetweenTwoPoints(int x1, int y1, int x2, int y2)
//{
//	return sqrt(distance(x1, x2) + distance(y1, y2));
//}
//
//int main()
//{
//	int x1, y1, x2, y2;
//
//	std::cout << "Enter the first x and y coordinates: ";
//	std::cin >> x1 >> y1;
//
//	std::cout << "Enter the second x and y coordinates: ";
//	std::cin >> x2 >> y2;
//
//	std::cout << "The distance between the two points is: " << distanceBetweenTwoPoints(x1, y1, x2, y2) << std::endl;
//
//	return 0;
//}