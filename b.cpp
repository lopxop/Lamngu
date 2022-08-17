#include <stdio.h>
#include <string.h>
int main(){
	int arr[10][10];

	for(int i=0;i<10;i++){
		//arr[i]
		for(int j=0;j<10;j++){
			//arr[i][j]
		}
	}
	char arrs[5][20];//1 array 5 strings, moi string toi da 20 characters
	for(int i=0;i<5;i++){
		scanf("%s",arrs[i]);
	}

	int max = 0;
	char stringHigh[200];
	strcpy(stringHigh,"");
	for(int i=0;i<5;i++){
		if(strlen(arrs[i]) > max){
			max = strlen(arrs[i]);
		}
	}
	for(int i=0;i<5;i++){
		if(strlen(arrs[i]) == max){
			strcat(stringHigh,arrs[i]);
			strcat(stringHigh,"-");
		}
	}
	printf("Chuoi dai nhat: %s",stringHigh);
}