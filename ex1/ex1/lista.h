#ifndef _LISTA_H_
#define _LISTA_H_

typedef struct n{
	int num;
	struct n *ant;
	struct n *sig;
}Node;

typedef struct {
	Node *pri;
	Node *ult;
	Node *pdi;
}lbo;

lbo LlistaBidOrd_crea();
void LlistaBidOrd_insereixDavantOrdenat(lbo *l, int num);
void LlistaBidOrd_insereixDarrereOrdenat(lbo *l, int num);
int LlistaBidOrd_consulta (lbo l);
void LlistaBidOrd_avanza(lbo *l);
void LlistaBidOrd_retrocedeix(lbo *l);
int LlistaBidOrd_fi(lbo l);
int LlistaBidOrd_Vesinici(lbo *l);
int LlistaBidOrd_buida (lbo l);

#endif
