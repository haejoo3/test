#include "header.h"

void print_int(const int *list, const size_t size, FILE* fp) {

	if(fp == NULL) {
		return;
	}

	for(int i = 0; i < size; i++) {
		fprintf(fp, "%d ", list[i]);
	}
	putc('\n', fp);
}

int scan_int(FILE *fp) {

	if(fp == NULL) {
		return 0;
	}

	int a;
	fscanf(fp, "%d", &a);

	return a;
}