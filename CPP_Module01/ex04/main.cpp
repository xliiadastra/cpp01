#include <iostream>
#include <fstream> // file stream
#include <string>

int	check_input(int argc, char *argv[]);
int	print_error(std::string str);

int	main(int argc, char *argv[])
{
	if (check_input(argc, argv))
		return (print_error("input error\n"));

	std::string filename = argv[1];
	std::ifstream ifs; // ifs(filename); in file stream
	ifs.open(filename);
	if (ifs.fail()) // fail or is_open
		return (print_error("file open error\n"));

	std::ofstream ofs; // out file stream
	ofs.open(filename.append(".replace"));
	if (ofs.fail())
	{
		ifs.close();
		return (print_error("file create error\n"));
	}

	std::string	line;
	size_t		pos;
	size_t		rPos;
	size_t		rSize = std::strlen(argv[2]);
	while (std::getline(ifs, line))
	{
		rPos = 0;
		while (true)
		{
			pos = line.find(argv[2], rPos); // rPos 인덱스부터. return : 위치 인덱스
            // std::cout << pos << " " << std::endl;
            // std::cout << rPos << std::endl;
			if (pos == std::string::npos) // npos 는 -1을 가지는 상수. find 되지 못했을 때.
			{
				ofs << line.substr(rPos, line.length() - rPos) << std::endl; // pos + count 를 리턴.
				break ;
			}
			ofs << line.substr(rPos, pos - rPos) << argv[3]; // ofs 로 stream 을 열음.
			rPos = pos + rSize; // next index
		}
	}
	ifs.close();
	ofs.close();

	return (0);
}

int	check_input(int argc, char *argv[])
{
	if (argc != 4 || std::strlen(argv[1]) == 0 || std::strlen(argv[2]) == 0)
		return (1);
	return (0);
}

int	print_error(std::string str)
{
	std::cout << str;
	return (1);
}
