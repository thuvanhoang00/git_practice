#include <iostream>
#include <vector>
int main()
{
	std::vector<int> vec{1,2,3,4};
	int a=101;
	std::cout << a + vec[0] << std::endl;
	int a=102;
	std::cout << a << std::endl;
	return 0;
}
