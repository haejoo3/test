#include "header.h"

int main(void) {
	int digit;
	digit = scan_int(stdin);
	while(digit--) {
		int n = scan_int(stdin);
		int *list = count_page(n);
		print_int(list, 9, stdout);
		free(list);
	}

	return 0;
}