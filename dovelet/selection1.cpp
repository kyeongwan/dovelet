#include <stdio.h>

int main(){

	int n, s;
	int data[1010];
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (int i = 0; i < s; i++){
		int minIdx = i;
		for (int j = i+1; j < n; j++){
			if (data[minIdx] > data[j])
				minIdx = j;
		}
		int temp = data[i];
		data[i] = data[minIdx];
		data[minIdx] = temp;
	}
	for (int i = 0; i < n-1; i++)
		printf("%d ", data[i]);
	printf("%d", data[n - 1]);
}