#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "-------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(5) << "y" << setw(4) << " |" << endl;
	cout << "-------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -8 - R)
			y = R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = -(sqrt(pow(R, 2) - pow(x, 2) - 16 * x - 64)) + R;
			else
				if (-8 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 2)
						y = -(R / 4.) * x;
					else
						y = x - 3;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "-------------------" << endl;
	return 0;
}
