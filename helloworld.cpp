#include <iostream>

using namespace std;

int main()
{
	//Hash is 1f1a7d6
	time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
	cout << "Hello, User! Today is" << now->tm_mday << '.' << now->tm_mon+1 << '.' << now->tm_year+1900;
}
