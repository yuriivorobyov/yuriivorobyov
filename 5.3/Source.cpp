#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double g = gp;
	while (g <= gk)
	{
		z = h(g * g + 1) + h(g + h(1)) + 1;
		cout << g << " " << z << endl;
		g += dg;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1)
		return ((sin(x) + 1) / (1 + cos(x)));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = x / (((2 * i - 1) * 2 * i));
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}
}
