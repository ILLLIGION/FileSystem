#include <file.hpp>
#include <vector>

struct Directory
{
public:
	std::string name;
	uint32_t num_of_files;
	uint32_t num_of_directories;
	std::vector<File> files;
	std::vector<Directory> directories;
	Directory(std::string name1): name(name1), num_of_files(0), num_of_directories(0) {};
	~Directory() {};
	
	void create_file()
	{
		std::string filename;
		std::cout << "Enter file name: ";
		std::cin >> filename;
		File file1(filename);
		files.push_back(file1);
		num_of_files++;
	}
	
	void create_directory()
	{
		std::string directoryname;
		std::cout << "Enter directory name: ";
		std::cin >> directoryname;
		Directory directory1(directoryname);
		directories.push_back(directory1);
		num_of_directories++;
	}
	
	
};		
