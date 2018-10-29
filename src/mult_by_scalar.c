#include "vmodule.h"
vec3f* multByScalarVec3f(vec3f* vec, float scalar)
{
	vec3f* result = (vec3f *)malloc(sizeof (vec3f));
	*result = (vec3f){vec->x * scalar,
		   	  vec->y * scalar,
		   	  vec->z * scalar};
	return result;
}
