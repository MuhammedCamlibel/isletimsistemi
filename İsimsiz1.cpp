#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("\n\nHosgeldin\n");

	int n=0;
	int k=0;
	
	pid_t pid;

		do
		{
			printf("Collatz Conjecture'u calistirmak i�in lutfen 0'dan buyuk bir sayi girin.\n"); 
  			scanf("%d", &k);	
		}while (k <= 0);

		pid = fork();

		if (pid == 0)
		{
			printf("cocuk calisiyor ...\n");
			printf("%d\n",k);
			while (k!=1)
			{
				if (k%2 == 0)
				{
					k = k/2;
				}
				else if (k%2 == 1)
				{
					k = 3 * (k) + 1;
				}	
			
				printf("%d\n",k);
			}
		
			printf("cocuk sureci tamamland�.\n");
		}
		else
		{
			printf("Ebeveynler �ocuk surecini bekliyor ...\n");
			wait();
			printf("Ana i�lem yap�ld�.\n");
		}
	return 0; 
}
