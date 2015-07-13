#include <stdio.h>
#include <string.h>

int main(){

	char data[55];
	scanf("%s", data);
	
	int stack[55];
	int top = 0;
	int result[55];
	int k = 0;

	for (int i = 0; i < strlen(data); i++){
		if (data[i] == '('){
			stack[top++] = i;
		}
		else if (data[i] == ')'){
			if (top != 0){
				result[k++] = stack[--top];
				result[k++] = i;
			}
			else{
				result[0] = -1;
				break;
			}
		}
	}
	if (result[0] == -1 || top != 0)
		printf("not match");
	else
		for (int i = 0; i < k; i=i+2)
			printf("%d %d\n", result[i], result[i+1]);

}