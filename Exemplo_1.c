﻿#include <stdio.h>
#include <stdbool.h>
int main(void) {
	bool p = false, q=7;
	printf("%d %d %d\n",sizeof(bool),p,q); // 1 0 1
	return 0;
}
