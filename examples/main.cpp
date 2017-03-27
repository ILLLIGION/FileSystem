#include <directory.hpp>

int main(int argc, char* argv[])
{
	Directory def_dir("default_directory");
	def_dir.create_file();
	def_dir.create_directory();
	std::cout << "gj";
	return 0;
};
