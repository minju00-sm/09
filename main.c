#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[SIZE];
	int sum=0;
	
	printf("%i���� ������ �Է��ϼ���.\n", SIZE);
	
	for (i=0; i<SIZE; i++)
	{
		printf("�л� ������ �Է��ϼ���: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	#if 0	
	for (i=0; i<SIZE; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	#endif
	
	printf("���� ���: %i\n", sum/SIZE);
	
	system("pause");
	return 0;
}
