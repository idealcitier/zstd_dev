#include<iostream>
#include<string>
#include"util.h"


int main() {
	std::string srcStr = "hello world";
	std::string encodeStr;
	Util::CompressString(srcStr, encodeStr, 1);
	std::cout << "encodeStr=" << encodeStr << ", size=" << encodeStr.size() << std::endl;
	
}
