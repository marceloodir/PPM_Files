#include <stdio.h>


int main(int argc, char **argv) {
	FILE * arquivoOrigem;
	FILE * arquivoDestino;
	int i;
	int j=0;
	char linha[50];

	arquivoOrigem = fopen(argv[1],"r");
	arquivoDestino = fopen(argv[2],"w");

	for(j=0;j<4;j++) {
		fgets(linha,40,arquivoOrigem);
		fputs(linha,arquivoDestino);
	}


	while(fscanf(arquivoOrigem,"%i",&i) != EOF) {
		fprintf(arquivoDestino,"%i\n",(255-i));
	}


	printf("\nConcluído.\n\n");
	fclose(arquivoOrigem);
	fclose(arquivoDestino);
	return 0;
}
