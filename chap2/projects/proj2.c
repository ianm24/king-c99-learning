// Computes volume of radius 10 sphere

#include <stdio.h>

#define FRACTION_FACTOR (4.0f / 3.0f)
#define PI 3.14159f

int main(void)
{
	float radius = 10.0f;
	float volume = FRACTION_FACTOR * PI * radius * radius * radius;

	printf("Volume of Radius %.1f sphere is %.2f\n", radius, volume);

	return 0;
}
