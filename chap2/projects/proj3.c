// Computes volume of user-defined radius sphere

#include <stdio.h>

#define FRACTION_FACTOR (4.0f / 3.0f)
#define PI 3.14159f

int main(void)
{
	float radius, volume;

	printf("What is the radius of the sphere? ");
	scanf("%f", &radius);

	volume = FRACTION_FACTOR * PI * radius * radius * radius;

	printf("Volume of Radius %.1f sphere is %.2f\n", radius, volume);

	return 0;
}
