#include <time.h>
#include <iostream>
#include "segmentation.h"
#include "merging.h"
#include "extension.h"
#include "mat.h"
using namespace std;

void readfile(char* file, char** var){

}

int main(){
	clock_t start = clock();
	//segmentation();
	emxArray_real_T *x = new emxArray_real_T;
	x->data = 0;
	clock_t end = clock();
	double time = (double)(end - start) / CLOCKS_PER_SEC;
	cout << time << "\n";

	return 0;
}