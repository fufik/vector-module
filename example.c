#include <stdio.h>
#include <stdlib.h>
#include "src/vmodule.h"
int main()
{
	vec3f * a = (vec3f *)malloc(sizeof (vec3f)),
	      * b = (vec3f *)malloc(sizeof (vec3f)), 
	      * sum, * sub, * mul;
	float magn;
	*a = (vec3f){3.0,2.0,1.5};
	*b = (vec3f){2.0,3.0,3.5};
	sum = sumVec3f(a,b);
	sub = subtractVec3f(a,b);
	mul = multByScalarVec3f(a,0);
	magn = magnitudeVec3f(a);
	printf("Sum - vec3f{.x=%f, .y=%f, .z=%f}\n", sum->x, sum->y, sum->z);
	printf("Sub - vec3f{.x=%f, .y=%f, .z=%f}\n", sub->x, sub->y, sub->z);
	printf("Mul - vec3f{.x=%f, .y=%f, .z=%f}\n", mul->x, mul->y, mul->z);
	printf("Mag - %f\n",magn);
	return 0;
}

