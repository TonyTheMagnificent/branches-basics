#include <stdio.h>

int main(){
	int a = 3.14f*1.5f;
	int b = 3.14f*1.0f;
	printf("Max num: %d", a > b? a: b);
	return 0;
}
