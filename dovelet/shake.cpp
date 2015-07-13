#include <stdio.h>

void swap(int &, int &);
int main(){

	int n;
	int data[1010];
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);
	data[n] = 0xfffffff;

	int low = 0, high = n;
	while (1){
		int thigh = 0;
		int tlow = n;
		for (int i = low; i < high; i++){
			if (data[i] > data[i + 1]){
				swap(data[i], data[i + 1]);
				thigh = i;
			}
		}
		for (int i = high-1; i > low; i--){
			if (data[i] < data[i - 1]){
				swap(data[i], data[i - 1]);
				tlow = i;
			}
		}
		low = tlow;
		high = thigh;
		count++;
		if (low >= high)
			break;
	}
	printf("%d", count);
}

void swap(int &s1, int &s2){
	int temp = s1;
	s1 = s2;
	s2 = temp;
}