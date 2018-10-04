#include "LISTA.H"
#include <stdio.h>

int main(void){
	int num, num_consulta, o=1, trobat=0;
	lbo l;
	
	l = LlistaBidOrd_crea();
	while (o){
		printf ("\n\nQuieres ingresar un nuevo numero?\n");
		printf ("SI=1 / NO=0\n\n");
		scanf ("%d", &o);
		if (o==1){
			printf("\nNumero? ->  ");
			scanf ("%d", &num);
			if (LlistaBidOrd_buida(l)){
				LlistaBidOrd_insereixDavantOrdenat(&l, num);
			}else{
				LlistaBidOrd_Vesinici(&l);
				trobat=0;
				while (!trobat && !LlistaBidOrd_fi(l)){
					num_consulta = LlistaBidOrd_consulta (l);
					if (num_consulta>num){
						LlistaBidOrd_avanza(&l);
					}else{
						trobat=1;
						LlistaBidOrd_insereixDavantOrdenat(&l, num);
					}
				}
				if (!trobat){
					LlistaBidOrd_retrocedeix(&l);
					LlistaBidOrd_insereixDarrereOrdenat(&l, num);
				}
			}
		}
		printf ("\nNumeros introducidos ordenados de forma decreciente:\n");
		LlistaBidOrd_Vesinici(&l);
		while (!LlistaBidOrd_fi(l)){
			printf("%d / ", LlistaBidOrd_consulta (l));
			LlistaBidOrd_avanza(&l);
		}
	}
	return 0;
}