#include <stdio.h>
#include <stdlib.h>

// if coins is already sorted and coin is unlimited
int getMax(int *coins, int coin_number, int total_money) {
	int count = 0;
	printf("total_money: %d\n", total_money);
	int largest_coin = 0;
	while (total_money > 0) {
		if (coins[largest_coin]<=total_money) {
			total_money -= coins[largest_coin];
			count += 1;
			printf("total_money_left: %d, cost: %d\n", total_money, coins[largest_coin]);
		} else {
			largest_coin += 1;
		}
	}
	return count;
}

// if coins is already sorted and coin is limited
int getMax_limited(int *coins, int coin_number, int total_money) {
	int count = 0;
	printf("total_money: %d\n", total_money);
	int largest_coin = 0;
	while (total_money > 0) {
		if (coins[largest_coin]<=total_money) {
			total_money -= coins[largest_coin];
			count += 1;
			printf("money left: %d, cost: %d\n", total_money, coins[largest_coin]);
		}
		largest_coin += 1;
	}
	return count;
}



int main() {
	int coins[9] = {50, 20, 20, 15, 10, 2, 1, 1, 1};
	getMax(coins, 9, 75);
	getMax_limited(coins, 9, 75);
}
