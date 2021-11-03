#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	 double a, b, c;
	 double root1, root2, imaginary;
	 double discriminant;

	 cout << "Finding the root of the equation a * x^2 + b * x + c = 0\n";

	 cout << "Enter the value of a: ";
	 cin >> a;

	 if (a < 0.00000001)
	 {
		  cout << "If a is 0, then this is not a quadratic equation!\n";
		  return 1;
	 }

	 cout << "Enter the value of b: ";
	 cin >> b;

	 cout << "Enter the value of c: ";
	 cin >> c;

	 discriminant = (b * b) - (4 * a * c);

	 if (discriminant > 0)
	 {
		  root1 = (-b + sqrt(discriminant)) / (2 * a);
		  root2 = (-b - sqrt(discriminant)) / (2 * a);

		  cout << "Two distinct and real roots exist: " << root1 << " and " << root2 << endl;
	 }
	 else if (discriminant == 0)
	 {
		  root1 = root2 = -b / (2 * a);

		  cout << "Two equal and real roots exist: " << root1 << " and " << root2 << endl;
	 }
	 else if (discriminant < 0)
	 {
		  root1 = root2 = -b / (2 * a);
		  imaginary = sqrt(-discriminant) / (2 * a);

		  cout << "Two distinct complex roots exist: " << root1 << "+" << imaginary << "i and " << root2 << "-" << imaginary << "i\n";
	 }

	 return 0;
}