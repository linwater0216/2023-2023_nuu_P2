#ifndef Random_h
#define Random_h
#include <iostream>
#include <string>
#include <time.h>
class Random {
private:
	int seed=0;
public:
	Random(int);
	Random();
	void set(int);
	int get();
};
#endif