#pragma once
class Logical
{
private:
	bool* key;
public:
	Logical(bool* key);
	bool* getKey(void);
	void setKey(bool* key);
};

