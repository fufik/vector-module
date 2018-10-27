#ifndef VMODULE_H
#define VMODULE_H

typedef struct vec3f
{
	float x;
	float y;
	float z;
} vec3f;
extern vec3f* sumVec3f(vec3f* a,vec3f* b);
#endif
