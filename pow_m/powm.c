#include <stdio.h>

int pow_m(unsigned base, unsigned pow, unsigned m){
	unsigned mult = base % m;
	unsigned prod = 1;
	while(pow > 0){
		if (pow % 2 == 1){
			prod = (prod * mult) % m;
			pow -= 1;
		}
		mult = (mult * mult) % m;
		pow /= 2;
	} 
	return prod;
}

int main(){
	unsigned a, b, c;
	if (scanf("%u%u%u", &a, &b, &c) != 3){
		return 1;
	}
	printf("%u\n", pow_m(a, b, c));
	return 0;
}
