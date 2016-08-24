#include <stdio.h>

int main()
{
    int i, g, x;
	int cont = 0, inter = 0, gremio = 0, empate = 0;

	do{
		scanf("%d %d", &i, &g);
		cont++;

		if(i > g){
			inter++;
		}
		else if (i == g){
			empate++;
		}
		else{
			gremio++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);

	}
	while(x == 1);

	printf("%d grenais\n", cont);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);

	if(inter > gremio){
		printf("Inter venceu mais\n");
	}
	else{
		printf("Gremio venceu mais\n");
	}

	return 0;
}
