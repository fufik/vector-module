#include <stdio.h>
#include <stdlib.h>
#include "src/vmodule.h"
int main()
{
	vec3f * a = (vec3f *)malloc(sizeof (vec3f)),
	      * b = (vec3f *)malloc(sizeof (vec3f)), 
	      * c;
	*a = (vec3f){3.0,2.0,1.5};
	*b = (vec3f){2.0,3.0,3.5};
	c = sumVec3f(a,b);
	printf("vec3f{.x=%f, .y=%f, .z=%f}\n",c->x,c->y,c->z);
	
}

