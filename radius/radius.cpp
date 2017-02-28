#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Enter the radius:");
	const float pi=3.14;
	float r,S,l;
	scanf("%f",&r);
	S=pi*(r*r);
	l=2*pi*r;
	printf("S=%.3fm2,l=%.3fm",S,l);
	getch();
}
