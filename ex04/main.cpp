#include <iostream>
#include <fstream> // file stream
#include <string>

int	check_input(int argc, char *argv[]);
int	print_error(std::string str);

int	main(int argc, char **argv)
{
	if (check_input(argc, argv))
		return (print_error("input error\n"));
	std::ifstream	file(argv[1]);
	if (file.fail())
		return (print_error("file open error\n"));
	std::ofstream	out(std::string(argv[1]) + ".replace");
	if (out.fail())
	{
		file.close();
		return (print_error("file open error\n"));
	}
	std::string		line;
	std::getline(file, line, '\0'); // \0 까지 전부 읽기.
	size_t	idx;
	while ((idx = line.find(argv[2])) != line.npos) // find 함수로 처음부터 끝까지 찾고 리턴으로 시작인덱스 리턴.
	{												// 못 찾으면 npos 라는 -1 상수를 리턴.(언더플로우)
		std::string	s1(argv[2]);
		out << line.substr(0, idx) << (argv[3]);
		line = line.substr(idx + s1.length()); // idx는 찾은 시작위치. substr은 인자로 받은 시작점부터 끝까지 컷트.
	}
	out << line;
	file.close();
	out.close();
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
