//ask the user to enter a floating point value that is the radius of a sphere.
//The program will then use it to calculate the volume of a sphere.

// 4/3 pi r^3

#include <stdio.h>
int main(void){
	double radius;
	double volume;
	printf("enter the radius of the sphere: ");
	scanf("%lf", &radius);
	volume = 4.0/3 * 3.14159 * radius * radius * radius;
	printf("volume is : %.2lf\n",volume);
	return 0;
}
