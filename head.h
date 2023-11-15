#ifndef __CARINLINE_H__
#define __CARINLINE_H__
#include <iostream>

using namespace std;

class Printer
{
private:
	char letter[50][10];
	int cnt = 0;

public:
	void save(char * sen);
	void load();
};
#endif