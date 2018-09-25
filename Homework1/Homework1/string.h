#ifndef STRING_H_
#define STRING_H_


class string {

	char *str;

	string() 
	{
		str = nullptr;
	}

	string(char* b)
	{

	}

	string()
	{

	}
	

public:


	void operator=(string a) 
	{ 
		 
	}

	bool operator==(const char *a) 
	{ 
		bool equal = true;
		for (int i = 0; i < sizeof(a); ++i)
			if (this[i] != a[i]) equal = false;
		return equal;
	}

};

#endif // !STRING_H_
