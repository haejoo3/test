#include <stdio.h>
#include <stdlib.h>

int scan_int(FILE* fp);

void print_int(const int *list, const size_t size, FILE * fp);

int* count_page(const int n);