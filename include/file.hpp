#include "iostream"
#include "string"

struct File
{
public:
	std::string name;
	File(std::string name1): name(name1) {};
	~File() {};
};
