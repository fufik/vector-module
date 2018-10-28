#ifndef VMODULE_H
#define VMODULE_H

typedef struct vec3f
{
	float x;
	float y;
	float z;
} vec3f;
extern vec3f* sumVec3f(vec3f* a,vec3f* b);
extern vec3f* subtractVec3f(vec3f* a,vec3f* b);
extern vec3f* multByScalarVec3f(vec3f* vec, float scalar);
extern float  magnitudeVec3f(vec3f* vec);
#endif
