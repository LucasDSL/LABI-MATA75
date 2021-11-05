#include <stdio.h>

int main(){
	int m, n, i, j, v, g, p1, p2, h, k, l;
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &v);
	scanf("%d", &g);
	int campo[m+2][n+2], campoaux[m+2][n+2];
	for(i=0;i<m+2;i++){
		for(j=0;j<n+2;j++){//preenche o campo e o auxiliar com 0
			campo[i][j]=0;
			campoaux[i][j]=0;
		}
	}
	for(i=0;i<v;i++){//coloca 1 nas posi��es das c�lulas vivas
		scanf("%d", &p1);
		scanf("%d", &p2);
		campo[p1+1][p2+1]=1;
		campoaux[p1+1][p2+1]=1;
	}
	int redor=0;
	for(h=0;h<g;h++){//loop para as gera��es
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){//compara��o com as 8 posi��es ao redor da posi��o, acumulando +1 cada vez que tiver uma c�lula viva
				if(campo[i-1][j-1]==1){
					redor++;
				}
				if(campo[i-1][j]==1){
					redor++;
				}
				if(campo[i-1][j+1]==1){
					redor++;
				}
				if(campo[i][j-1]==1){
					redor++;
				}
				if(campo[i][j+1]==1){
					redor++;
				}
				if(campo[i+1][j-1]==1){
					redor++;
				}
				if(campo[i+1][j]==1){
					redor++;
				}
				if(campo[i+1][j+1]==1){
					redor++;
				}
				if(redor<2){//campo auxiliar � alterado de acordo com as regras do jogo
					campoaux[i][j]=0;
				}else if(redor>3){
					campoaux[i][j]=0;
				}else if(redor==3){
					campoaux[i][j]=1;
				}
				redor=0;
			}
		}
		for(i=1;i<=m;i++){//campo � atualizado e impresso depois de ser totalmente analisado
			for(j=1;j<=n;j++){
				campo[i][j]=campoaux[i][j];
				printf("%d ", campo[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
