#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, b, c;
	int x, y, z;
	printf("Vvedite a: "); scanf_s("%f", &a);
	printf("Vvedite b: "); scanf_s("%f", &b);
	printf("Vvedite c: "); scanf_s("%f", &c);
	x = a / 2 && c / 2;
	y = a / 2 && b / 2;
	z = b / 2 && c / 2;
	if (x % 2)
		printf("Chetnoe chislo");
	else
		if (y & 2)
			printf("Chetnoe chislo");
		else
			if (z % 2)
				printf("Chetnoe chislo");
			else
				printf("Net takih chisel");

}
