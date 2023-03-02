# include <stdio.h>

int main(void){
	int c;
	int nlinhas = 0;
	FILE *fp;
	
	fp = fopen("entrada1.txt","rt");
	if(fp == NULL) {
		printf("Nao foi possivel abrir este arquivo.\n");
		return 1;
	}
	while((c = fgetc(fp)) != EOF){
		if(c == '\n')
		nlinhas++;
	}
	
	fclose(fp);
	
	printf("Numero de linhas = %d\n", nlinhas);
	return 0;
	
	
	
}
