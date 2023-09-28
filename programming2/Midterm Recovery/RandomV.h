#ifndef RANDOM_H_
#define RANDOM_H_

#include <cstdlib>
#include "Vector.h"
#include <ctime>

using namespace std;

void rand_seed();
int rand_int(int, int);

// for Vector
void random_vector(int, int, int, Vector<int>&, int);


#endif
