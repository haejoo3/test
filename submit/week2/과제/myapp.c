#include "header.h"

int * count_page(const int n) {
	int *list = (int *)calloc(n, sizeof(9));

	if(list == NULL) {
		fprintf(stderr, "Error: Memory allocation \n");
		exit(-1);
	}

	for(int i = 1; i < n; i++) {
		int check = i;
		while(check) {
			list[check%10]++;
		check /= 10;
		}
	}

	return list;
}