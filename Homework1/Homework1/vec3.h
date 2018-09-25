#ifndef VEC3_H_
#define VEC3_H_

template <class T>

class vec3 {

	T x, y, z;

	vec3() 
	{
		x = T(0);
		y = T(0);
		z = T(0);
	}

	vec3(vec3 &v) 
	{
		x = v.x;
		y = v.y;
		z = v.z;
	}

	vec3(T a, T b, T c) 
	{
		x = a;
		y = b;
		z = c;
	}

	~vec3() {}

public:

	void normalize(vec3 &v1) 
	{
		T mod = sqrt(v1.x ^ 2 + v1.y ^ 2 + v1.z ^ 2);
		v1.x = v1.x / mod;
		v1.y = v1.y / mod;
		v1.z = v1.z / mod;
	}

	void zero(vec3 &v1)
	{
		vec3.x = T(0);
		vec3.y = T(0);
		vec3.z = T(0);
	}

	bool is_zero(const vec3 &v1)
	{
		return (vec3.x == 0 && vec3.y == 0 && vec3.z == 0);
	}

	vec3 distance_to(const vec3 &v1, const vec3 &v2)
	{
		vec3 v3;
		v3.x = v1.x - v2.y;
		v3.y = v1.y - v2.y;
		v3.z = v1.z - v2.z;
		return v3;
	}

	vec3 operator+(vec3 v) 
	{ 
		vec3 vec;
		vec.x = this->x + v.x; 
		vec.y = this->y + v.y; 
		vec.z = this->z + v.z; 
		return vec;
	}

	vec3 operator-(vec3 v) 
	{ 
		vec3 vec;
		vec.x = this->x - v.x;
		vec.y = this->y - v.y;
		vec.z = this->z - v.z;
		return vec;
	}

	void operator+=(vec3 v) { this->x += v.x; this->y += v.y; this->z += v.z; }

	void operator-=(vec3 v) { this->x -= v.x; this->y -= v.y; this->z -= v.z; }

	void operator=(vec3 v) { this->x = v.x; this->y = v.y; this->z = v.z; }

	bool operator==(vec3 v) { return (this->x == v.x && this->y == v.y && this->z == v.z); }

};

#endif // !VEC3_H_
