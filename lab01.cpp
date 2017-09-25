#include <cmath>
#include <iostream>

int main()
{   //1
	double pi = 3.14;
	std::cout << pi << std::endl;
	//
	//2
	int a = 1;
	int b = 13;
	int c = 49;
	std::cout << a << " " << b << " " << c << std::endl;
	//
	//3
	char symbol1 = 0;
	char symbol2 = 0;
	std::cout << " write a symbol = " << std::endl;
	std::cin >> symbol1;
	std::cin >> symbol2;
	std::cout << a << symbol1 << b << symbol2 << c << std::endl;
	//
	//4
	double number1 = 0;
	double number2 = 0;
	double number3 = 0;
	std::cout << " write a three numbers = " << std::endl;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;
	std::cout << number1 << " " << number2 << " " << number3 << std::endl;
	//
	//5
	double numberA = 0;
	double x = 0;
	double y = 0;
	std::cout << " write a = " << std::endl;
	std::cin >> a;
	x = 12 * numberA * numberA + 7 * numberA - 12;
	std::cout << " x = " << x << std::endl;
	y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << " y = " << y << std::endl;
	//
	//6
	double density = 0;
	double mass = 0;
	double V = 0; 
	std::cout << " write mass = " << std::endl;
	std::cin >> mass;
	std::cout << " write V = " << std::endl;
	std::cin >> V;
	density = mass / V;
	std::cout << " density = " << density << std::endl;
	//
	//7
	double X;
	double coefficientA = 0;
	double coefficientB = 0;
	std::cout << " write coefficientA = " << std::endl;
	std::cin >> coefficientA;
	std::cout << " write coefficientB = " << std::endl;
	std::cin >> coefficientB;
	X = -coefficientB / coefficientA;
	std::cout << " X = " << X << std::endl;
	//
	//8
	double coordinateX1 = 0;
	double coordinateX2 = 0;
	double coordinateY1 = 0;
	double coordinateY2 = 0;
	double distance = 0;
	std::cout << " write coordinateX1" << std::endl;
	std::cin >> coordinateX1;
	std::cout << " write coordinateY1" << std::endl;
	std::cin >> coordinateY1;
	std::cout << " write coordinateX2" << std::endl;
	std::cin >> coordinateX2;
	std::cout << " write coordinateY2" << std::endl;
	std::cin >> coordinateY2;
	distance = sqrt(((coordinateX1 - coordinateX2) * (coordinateX1 - coordinateX2)) + ((coordinateY1 - coordinateY2) * (coordinateY1 - coordinateY2)));
	std::cout << " distance = " << distance << std::endl;
	//
	//9
	double titleA = 0;
	double titleB = 0;
	double heightH = 0;
	double perimeter = 0;
	double side = 0;
	double sideX = 0;
	std::cout << " Enter the title A = " << std::endl;
	std::cin >> titleA;
	std::cout << " Enter the title B = " << std::endl;
	std::cin >> titleB;
	std::cout << " Enter the height H = " << std::endl;
	std::cin >> heightH;
	sideX = (titleB - titleA) / 2;
	side = sqrt(sideX * sideX + heightH * heightH);
	perimeter = titleA + titleB + 2 * side;
1	std::cout << " Perimeter is p = " << perimeter << std::endl;
	//
	//10
	double radius1 = 0;
	double radius2 = 0;
	double area = 0;
	double area1 = 0;
	double area2 = 0;
	std::cout << " write inner radius r1 = " << std::endl;
	std::cin >> radius1;
	std::cout << " write outer radius r2 = " << std::endl;
	std::cin >> radius2;
	area1 = pi * radius1 * radius1;
	area2 = pi * radius2 * radius2;
	area = area2 - area1;
	std::cout << " area = " << area << std::endl;
	//
	//11
	double edgeCube = 0;
	double VCube = 0;
	double SurfaceAreaCube = 0;
	std::cout << " write edge cube = " << std::endl;
	std::cin >> edgeCube;
	VCube = edgeCube * edgeCube * edgeCube;
	SurfaceAreaCube = 6 * edgeCube * edgeCube;
	std::cout << " cube volume V = " << VCube << std::endl;
	std::cout << " Surface area = " << SurfaceAreaCube << std::endl;
	//
	//12
	int sideA = 0;
	int perimeter1 = 0;
	std::cout << " write side A = " << std::endl;
	std::cin >> sideA;
	perimeter1 = sideA * 4;
	std::cout << " Perimeter is p = " << perimeter1 << std::endl;
	//
	//13
	int radius = 0;
	int diameter = 0;
	std::cout << " Radius r = " << std::endl;
	std::cin >> radius;
	diameter = radius * 2;
	std::cout << " Diameter d = " << diameter << std::endl;
	//
	return 0;
}
	
	
	
	
	
