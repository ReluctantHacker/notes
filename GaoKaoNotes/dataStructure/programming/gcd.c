// 其實就是輾轉相除法求最大公因數, 這招又叫做歐幾里得演算法(最早有紀錄的是在幾何原本裡面出現的!!)
#include <stdio.h>
#include <stdlib.h>

// recursive method
int r_gcd(int a, int b) {
	int r = a % b;
	if (r != 0) {
		return r_gcd(b, r);
	} else {
		return b;
	}
}

int main() {
	int a = 34;
	int b = 68;
	printf("r_gcb(%d, %d): %d\n", a, b, r_gcd(a, b));
}
