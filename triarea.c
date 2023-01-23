#include <stdio.h>
/**
 * main - calculates area of a triangle
 * @b: base of triangle
 * @h: height of triangle
 *
 * Return: always 0
 */
int main()
{
	int b;
	int h;
	int Area;

	h = 45;
	b = 10;

	Area = 0.5 * b * h;

	printf("The area of triangle is: %d", Area);

	return (0);
}
 
