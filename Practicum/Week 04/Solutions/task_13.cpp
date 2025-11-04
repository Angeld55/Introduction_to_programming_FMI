#include <iostream>
#include <cmath>
using namespace std;

double getDist(int x1, int y1,
            int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) +
                (y2 - y1) * (y2 - y1));    
}

double getPerimeter(double sideA, double sideB, double sideC) {
    return sideA + sideB + sideC;
}

double getPerimeter(int x1, int y1, 
                int x2, int y2, 
                int x3, int y3) {
    double side1 = getDist(x1, y1, x2, y2);
    double side2 = getDist(x1, y1, x3, y3);
    double side3 = getDist(x2, y2, x3, y3);

    return getPerimeter(side1, side2, side3);
}

double getArea(int x1, int y1,
                int x2, int y2,
                int x3, int y3) {
    double side1 = getDist(x1, y1, x2, y2);
    double side2 = getDist(x1, y1, x3, y3);
    double side3 = getDist(x2, y2, x3, y3);

    double halfPer = getPerimeter(side1, side2, side3) / 2;

    return sqrt(halfPer * (halfPer - side1) * (halfPer - side2) * (halfPer - side3));
}

double getDistFromCenter(int x, int y) {
    return sqrt(x * x + y * y);
}

bool isInCircleWithRadius(int x1, int y1,
                        int x2, int y2, 
                        int x3, int y3, 
                        int radius) {
    double distA = getDistFromCenter(x1, y1);
    double distB = getDistFromCenter(x2, y2);
    double distC = getDistFromCenter(x3, y3);

    return (distA <= radius &&
            distB <= radius &&
            distC <= radius);
}

int main() {
    int x1 = 0, y1 = 0,
        x2 = 0, y2 = 0,
        x3 = 0, y3 = 0,
        radius = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> radius;
    
    cout << getPerimeter(x1, y1, x2, y2, x3, y3) << endl;
    cout << getArea(x1, y1, x2, y2, x3, y3) << endl;
    cout << isInCircleWithRadius(x1, y1, x2, y2, x3, y3, radius) << endl; 
}