
#include "vmodule.h"
#include "math.h"
float magnitudeVec3f(vec3f* vec)
{
	float result = sqrt(vec->x*vec->x + vec->y*vec->y + vec->z*vec->z);
	return result;
}
