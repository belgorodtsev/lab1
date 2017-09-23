#include <cmath>
#include <iostream>

int main()

{   	////1
	double pi = 3.14;
	std::cout << pi << std::endl;
	////////////

	/////2
	int a = 1, b = 13, c = 49;
	std::cout << a << " " << b << " " << c << std::endl;
	//////////

	/////3
	char a1, a2;
	std::cout << " write a symbol = " << std::endl;
	std::cin >> a1;
	std::cin >> a2;
	std::cout << a << a1 << b << a2 << c << std::endl;
	//////

	/////4
	double b1, b2, b3;
	std::cout << " write a three numers = " << std::endl;	std::cin >> b1;
	std::cin >> b2;
	std::cin >> b3;
	std::cout << b1 << " " << b2 << " " << b3 << std::endl;
	//////////
	//////5
	double a3, x, y;
	std::cout << " write a = " << std::endl;
	std::cin >> a3;
	x = 12 * a3 * a3 + 7 * a3 - 12;
	std::cout << " x = " << x << std::endl;
	y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << " y = " << y << std::endl;
	//////////

	//////6
	double p, m, V;
	std::cout << " write m = " << std::endl;
	std::cin >> m;
	std::cout << " write V = " << std::endl;
	std::cin >> V;
	p = m / V;
	std::cout << " p = " << p << std::endl;
	/////

	///////7
	double x1, a11, b11;
	std::cout << " write a = " << std::endl;
	std::cin >> a11;
	std::cout << " write b = " << std::endl;
	std::cin >> b11;
	x1 = -b11 / a11;
	std::cout << " x = " << x1 << std::endl;
	//////////

	///////8
	double x11, x12, y11, y12, d1;
	std::cout << " write x1" << std::endl;
	std::cin >> x11;
	std::cout << " write y1" << std::endl;
	std::cin >> y11;
	std::cout << " write x2" << std::endl;
	std::cin >> x12;
	std::cout << " write y2" << std::endl;
	std::cin >> y12;
	d1 = sqrt(((x11 - x12) * (x11 - x12)) + ((y11 - y12) * (y11 - y12)));
	std::cout << " distance =" << d1 << std::endl;
	////////

	////9
	double a9, b9, c9, h9, x9, p9;
	std::cout << " Enter the title a = " << std::endl;
	std::cin >> a9;
	std::cout << " Enter the title b = " << std::endl;
	std::cin >> b9;
	std::cout << " Enter the height h = " << std::endl;
	std::cin >> h9;
	x9 = (b9 - a9) / 2;
	c9 = sqrt(x9 * x9 + h9 * h9);
	p9 = a9 + b9 + 2 * c9;
	std::cout << " Perimeter is p = " << p9 << std::endl;
	/////////////

	////10
	double r1, r2, s, s1, s2;
	std::cout << " write inner radius r1 = " << std::endl;
	std::cin >> r1;
	std::cout << " write outer radius r2 = " << std::endl;
	std::cin >> r2;
	s1 = pi * r1 * r1;
	s2 = pi * r2 * r2;
	s = s2 - s1;
	std::cout << " s = " << s << std::endl;
	///////

	////11
	double a111, Vk, sb;
	std::cout << " write a = " << std::endl;
	std::cin >> a111;
	Vk = a111 * a111 * a111;
	sb = 6 * a111 * a111;
	std::cout << " cube volume V = " << Vk << std::endl;
	std::cout << " Surface area = " << sb << std::endl;
	//////

	/////12
	int a12, p12;
	std::cout << " write a = " << std::endl;
	std::cin >> a12;
	p12 = a12 * 4;
	std::cout << " Perimeter is p = " << p12 << std::endl;
	///////

	//////13
	int r, d13;
	std::cout << " Radius r = " << std::endl;
	std::cin >> r;
	d13 = r * 2;
	std::cout << " Diameter d = " << d13 << std::endl;
	/////////

	return 0;

}
	

	
