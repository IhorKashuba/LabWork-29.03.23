#include <iostream>
#include "Points.h"

CPoint<int> read_point();

int main()
{
	//CPoint<double> A;
	//CPoint<int> B;
	//std::cout << " A = " << std::showpoint << A << '\n' << " B = " << B << "\n";

	CPoint<int> A = read_point();
	CPoint<int> B = read_point();
	CPoint<int> C = read_point();
	std::cout << " A = " << A << '\n' << " B = " << B << "\n" << " C = " << C << "\n";

}