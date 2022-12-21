#include<stdio.h>
	void otrisovka(int probel, int zvezdochka) 
	{
		int i;
		for(i=0; i < probel; i++)
			printf(" ");
		for(i=0; i < zvezdochka; i++)
			printf("*");
		printf("\n");
}
	int main()
	{
		int visota;
		scanf("%d",&visota);
		int i;
		for(i=1; i <= visota; i++)
			otrisovka(visota - i,i*2 - 1);
	return 0;
}