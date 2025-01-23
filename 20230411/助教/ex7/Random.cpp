#include"Random.h"
using namespace std;
Random::Random(int a) {
	seed = a;
}
Random::Random() {
	seed = 0;
}
void Random::set(int a) {
	seed = a;
	srand(seed);
}
int Random::get() {
	return rand();
}