#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define NOMEFILE "10451769_out.txt"

/*
Simone Mosciatti
Codice Persona: 10451769
Matricola: 810631

File compilato e testato sotto linux con:
gcc (Debian 4.7.2-5) 4.7.2
*/

struct azione{
  char control;
  int minuto;
  char name[MAX];
  struct azione * next;
};

typedef struct azione azione;

azione * buildElement(char control, int minuto, char name[]){
  // ritorna un nuovo elemento della lista
  azione * new;
  new = malloc(sizeof(azione));
  new->control = control;
  new->minuto = minuto;
  strcpy(new->name, name);
  new->next = NULL;
  return new;
}

azione * inseriscielemento(azione * a, char control, int minuto, char name[]){
  // inserisce un elemento in testa alla lista
  azione * newElement;
  newElement = buildElement(control, minuto, name);
  if (a == NULL)
    return newElement;
  newElement->next = a;
  return newElement;
}

char * canestroOFallo(char c){
  // utility per la stampa a video
  if (c == 'C')
    return "'C'anestro";
  return "'F'allo";
}

void stampalista(azione * a){
  while (a != NULL){
    printf ("[%s %d' %s]->", canestroOFallo(a->control), a->minuto, a->name);
    a = a->next;
  }
  printf("NULL\n");
}

azione * trovasignificativa(azione *a){
  azione * significativa;
  if (a != NULL)
    significativa = a;
  while(a != NULL){
    if (significativa->minuto < a->minuto)
      significativa = a;
    a = a->next;
  }
  return significativa;
}

void scrivifile(azione * a){
  FILE * f;
  f = fopen(NOMEFILE, "w");
  if (f != NULL){
    while(a != NULL){
      if (a->minuto >= 30)
	fprintf(f, "%c\n%d\n%s\n\n", a->control, a->minuto, a->name);
      a = a->next;
    }
  fclose(f);
  } else printf("Problema ad aprire il file.\n");    
}

void stampaUltimaAzione(azione * a){
  printf ("L'ultima azione è stata: \n");
  printf("[%s %d' %s]\n", canestroOFallo(a->control), a->minuto, a->name);
}

void leggifile(){
  FILE * f;
  char control;
  int minuto;
  char minutiChar[50];
  char name[50];
  azione * a = NULL;

  f = fopen(NOMEFILE, "r");
  if (f != NULL){
    while(!feof(f)){
      fgets(&control, 50, f);
      fgets(minutiChar, 50, f);
      minuto = atoi(minutiChar); //converte la stringa dei minuti in un intero
      fgets(name, 55, f); 
      name[strlen(name)-1] = '\0';
      a = inseriscielemento(a, control, minuto, name);
      fgetc(f); //non certo perchè sono necessari due fgetc e due \n nella stampa file, ma così funziona.
      fgetc(f);
    }
    fclose(f);
  }
  else printf ("Problem opening the file.\n");
  stampalista(a);
}

int main(){
  char control;
  int minuto;
  char nome[MAX];
  azione *azioni = NULL;

  printf("Inserire un comando valido, C per canestro, F per fallo e T per terminare: ");
  control = getchar();

  while (control != 'T'){ //finche l'utente non decide di uscire
    while (control != 'C' && control != 'F' && control != 'T'){ //controllo che sia stato passato un comando valido
      printf("Inserire un comando valido, C per canestro, F per fallo e T per terminare: ");
      control = getchar(); //richiedo un comando valido
    }
    if (control == 'C' || control == 'F'){ //se canestro o fallo
      printf("A che minuto ?: ");
      scanf("%d", &minuto);
      while (!(minuto > 0) || !(minuto < 40)){ //controllo che i minuti siano nel range possibile
	printf("Inserire un minuto valido, i minuti vanno da 0 a 40: ");
	scanf("%d", &minuto);
      }
      printf ("\nChi è stato ?: ");
      scanf("%s", nome);
      getchar(); // libero lo stdin
      printf("\n");
      azioni = inseriscielemento(azioni, control, minuto, nome);
      printf("Inserire una nuova azione, C per Canestro, F per Fallo, T per Terminare: ");
      control = getchar(); //richiedo un comando
    }
  }
  
  stampalista(azioni);
  printf("\n");
  stampaUltimaAzione(trovasignificativa(azioni));
  scrivifile(azioni);

  printf("\nDa lettura File:");
  leggifile();
  printf("\n");
  
  return 1;
}
