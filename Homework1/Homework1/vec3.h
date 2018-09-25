#ifndef VEC3_H_
#define VEC3_H_

template <class T>

class vec3 {

	T x, y, z;

	vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	vec3(vec3 &v) {
		x = v.x;
		y = v.y;
		z = v.z;
	}

	vec3(T a, T b, T c) {
		x = a;
		y = b;
		z = c;
	}

	~vec3() {}

public:

	void normalize(vec3 &v1);

	void zero(vec3 &v1);

	bool is_zero(vec3 v1);

	vec3 distance_to(vec3 v1, vec3 v2);

	vec3 operator+(vec3 v) { this->x += v.x; this->y += v.y; this->z += v.z; }

	vec3 operator-(vec3 v) { this->x -= v.x; this->y -= v.y; this->z -= v.z; }

	void operator+=(vec3 v) { this->x += v.x; this->y += v.y; this->z += v.z; }

	void operator-=(vec3 v) { this->x -= v.x; this->y -= v.y; this->z -= v.z; }

	void operator=(vec3 v) { this->x = v.x; this->y = v.y; this->z = v.z; }

	bool operator==(vec3 v) { return (this->x == v.x && this->y == v.y && this->z == v.z); }

};

#endif // !VEC3_H_
