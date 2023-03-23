#include<stdio.h>
void main() {
	int Tall[3][4] = { 167, 170, 175, 178, 180, 177, 165, 167, 169, 173, 172, 171 }, i, j;//初始化数组
	int Tallest = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {	//遍历数组
			if (Tallest < Tall[i][j])		//最大的数沉淀
				Tallest = Tall[i][j];
		}
	}
	printf("The tallest is:%d", Tallest);
	getch();
}