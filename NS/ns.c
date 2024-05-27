#include <stdio.h>

void convert(unsigned int number,  unsigned int base){
	unsigned int nums[32] = {0};
	unsigned int i, b;


	for (i = 0; number != 0; i++){
		nums[i] = number % base;
		number /= base;
	}

	for (i -= 1;i != -1; i--){
		printf("%u", nums[i]);
	}
	printf("\n");
}



int main(){
	unsigned int number, base;
	if (scanf("%u%u", &number, &base) != 2){
		printf("Wrong input\n");
		return 1;
	}
	convert(number, base);
	return 0;
}


