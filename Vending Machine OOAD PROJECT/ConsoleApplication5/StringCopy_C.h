#pragma once
class StringCopy_C
{
protected:
	int strlen_C(const char* str) const
	{
		int count = 0;
		for (int i = 0; str[i] != '\0'; i++)
			count++;
		return count + 1;
	}

	void strcpy_C(char*& destination, const char* source) const
	{
		destination = new char[strlen_C(source)];
		for (int i = 0; i < strlen_C(source) - 1; i++)
			destination[i] = source[i];
		destination[strlen_C(source) - 1] = '\0';
	}
public:
	StringCopy_C() = default;
	~StringCopy_C() = default;
};

