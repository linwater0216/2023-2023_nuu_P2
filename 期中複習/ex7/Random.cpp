#include"Random.h"
using namespace std;
Random::Random(int a) {
	seed = a;
	srand(seed);
}
Random::Random() {
	seed = 0;
	srand(seed);
}
void Random::set(int a) {
	seed = a;
	srand(seed);
}
int Random::get() {
	return rand();
}
int Random::getseed() {
	return seed;
}