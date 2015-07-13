#include <stdio.h>

int main(){

	int n, s;
	scanf("%d %d", &n, &s);

	int data[1010];
	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);
	//init end

	for (int i = 0; i < s; i++){
		for (int j = 0; j < n-1; j++){
			if (data[j]>data[j + 1]){
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	int i;
	for (i = 0; i < n-1; i++)
		printf("%d ", data[i]);
	printf("%d", data[i]);
}