#include "vmodule.h"
vec3f* subtractVec3f(vec3f* minuend, vec3f* subtrahend)
{
	vec3f* result = (vec3f *)malloc(sizeof(vec3f));
	*result = (vec3f){minuend->x - subtrahend->x,
		   	  minuend->y - subtrahend->y,
		   	  minuend->z - subtrahend->z};
	return result;
}
