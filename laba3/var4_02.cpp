#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, y, z, p, v;
	printf("Write x, y, z");
	scanf_s("%f", & x); scanf_s("%f", &y); scanf_s("%f", &z) ;
	p = (x + y + z) / 3;
	v = sqrt(abs(x) * abs(y) * abs(z));
	printf("p= %.f\n", p);
	printf("v= %.f\n", v);
	return 0;
}