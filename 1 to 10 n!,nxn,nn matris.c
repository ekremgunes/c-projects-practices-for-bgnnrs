#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*4. 1’den 10’a kadar olan sayıların nxn, n!, nn değerlerini matrise  yazan program kodunu yazınız.*/

int main() {
	int i,j;
	int matris[10][4];
	
	for(i=1;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
			int carp=0;
			int us=1;
			int fak=1;
			
			if(j==0)
			printf(" %d ",i);
			else if(j==1)
			{
				carp=i*i;
				printf(" %d ",carp);
			}
			else if(j==2)
			{
				int sayi=i;
				while(sayi>1)
				{
					fak*=sayi;
					sayi--;
				}
				printf("%d",fak);
			}
			else if(j==3)
			{
				int a;
				for(a=1;a<=i;a++)
				{
					us*=i;
				}
				printf(" %d ",us);
			}
		}
		
	printf("\n");	
	}
	
	return 0;
}
