#include <sys/types.h>

#define RICHIESTE 5
#define CLIENT 3

/* TBD: Definire una struct "msg_richiesta" per i messaggi dal client al server */
struct msg_richiesta{
       long pid;
	int v1;
	int v2;


};
/* TBD: Definire una struct "msg_risposta" per i messaggi dal server al client */
struct msg_risposta{
	long pid;	
	int v3;
};


void client(int id_c, int id_s);
void server(int id_c, int id_s);
void* Prodotto(void*);
