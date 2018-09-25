#include <iostream>
#include "vec3.h"

template<class T>

int main() {
	vec3 v1(4, 4, 4);
	vec3 v2(1, 1, 1);

	//operator +

	vec3 v3 = v1 + v2;
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//operator -

	v3 = v1 - v2;
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//operator =

	v3 = v1;
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//operator +=

	v3 += v1;
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//operator -=

	v3 -= v2;
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//operator ==

	bool igual = (v1 == v2);
	if (igual) cout << "v1 is equal to v2" << endl;
	else cout << "v1 is not equal to v2" << endl;

	//normalize

	normalize(v3);
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//zero

	zero(v3);
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//is_zero

	is_zero(v3);
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

	//distance_to

	v3 = distance_to(v1, v2);
	cout << "v3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

}