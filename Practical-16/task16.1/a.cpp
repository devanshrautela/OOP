#include <iostream>
using namespace std;
template <typename T>
T add(T x,T y)
{
	return x+y;
}

int main()
{
	cout << add<int>(12.1, 7) << endl;
	return 0;
}