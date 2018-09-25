#include "vec3.h"
#include <math.h>

template<class T>

void vec3::normalize(vec3 &v1) {
	T mod = sqrt(v1.x ^ 2 + v1.y ^ 2 + v1.z ^ 2);
	v1.x = v1.x / mod;
	v1.y = v1.y / mod;
	v1.z = v1.z / mod;
}

template<class T>

void vec3::zero(vec3 &v1) {
	vec3.x = 0;
	vec3.y = 0;
	vec3.z = 0;
}

template<class T>

bool vec3::is_zero(vec3 v1) {
	return (vec3.x == 0 && vec3.y == 0 && vec3.z == 0);
}

template<class T>

vec3 vec3::distance_to(vec3 v1, vec3 v2) {
	vec3 v3;
	v3.x = v1.x - v2.y;
	v3.y = v1.y - v2.y;
	v3.z = v1.z - v2.z;
	return v3;
}