#include "vmodule.h"
vec3f* sumVec3f(vec3f* a,vec3f* b)
{
	vec3f* result = (vec3f *)malloc(sizeof (vec3f));
	*result = (vec3f){a->x+b->x,
		   a->y+b->y,
		   a->z+b->z};
	return result;
}
