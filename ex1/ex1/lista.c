#include "LISTA.H"
#include <stdio.h>

lbo LlistaBidOrd_crea(){
	lbo l;
	l.pri = (Node*) malloc (sizeof(Node));
	if (l.pri == NULL){
		printf("Error");
	}else{
		l.ult = (Node*) malloc (sizeof(Node));
		if (l.ult == NULL) {
			printf("Error");
			free(l.pri);
		}else{
			l.pdi=l.ult;
			l.pri->sig = l.ult;
			l.ult->ant = l.pri;
			l.pri->ant = NULL;
			l.ult->sig = NULL;
		}
	}
	return l;
}

void LlistaBidOrd_insereixDavantOrdenat(lbo *l, int num){
	Node *aux;
	aux=(Node*)malloc(sizeof(Node));
	if(aux==NULL){
		printf("Error");
	}else{
		aux->num = num;
		aux->sig = l->pdi;
		aux->ant=l->pdi->ant;
		l->pdi->ant=aux;
		aux->ant->sig=aux;
	}
}

void LlistaBidOrd_insereixDarrereOrdenat(lbo *l, int num){
	Node *aux;
	aux=(Node*)malloc(sizeof(Node));
	if(aux==NULL){
		printf("Error");
	}else{
		aux->num = num;
		aux->sig = l->pdi->sig;
		aux->ant=l->pdi;
		printf("HOLA5");
		aux->sig->ant=aux;
		printf("HOLA6");
		l->pdi->sig=aux;
	}
}

int LlistaBidOrd_consulta (lbo l){
	int numero;
	if(l.pdi != l.pri && l.pdi != l.ult){
		numero=l.pdi->num;
	}
	return numero;
}

void LlistaBidOrd_avanza(lbo *l){
	if (l->pdi->sig == NULL){
		printf("No es pot avançar!");
	}else{
		l->pdi=l->pdi->sig;
	}
}

void LlistaBidOrd_retrocedeix(lbo *l){
	if(l->pdi == l->pri){
		printf("Error\n");
	}else{
		l->pdi = l->pdi->ant;
	}
}

int LlistaBidOrd_fi(lbo l){
	return l.pdi==l.ult;
}

int LlistaBidOrd_Vesinici(lbo *l){
	l->pdi = l->pri->sig;
}

int LlistaBidOrd_buida (lbo l){
	return l.pri->sig == l.ult;
}
