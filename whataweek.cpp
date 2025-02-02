#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main ()
{
time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
string date = asctime(timeinfo);
cout << date;
return 0;
}
// 'Sun' | 'mon' | 'tue' | 'wed' | 'thu' | 'fri' | 'sat'
// 'jan' | 'feb' | 'mar' | 'apr' | 'may' | 'jun' | 'jul' | 'aug' | 'sep' | 'sept' | 'oct' | 'nov' | 'dec'