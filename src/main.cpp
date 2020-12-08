#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
	std::vector<std::string> vecTest;
	vecTest.push_back("Hello");
	vecTest.push_back("world");

	std::sort(vecTest.begin(), vecTest.end());
	
	printf("hello world from github\n");
	printf("new line\n");
	return 0;
}

