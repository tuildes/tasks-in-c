/* 	Um servidor TCP/IP Iterativo
	Baseado no codigo de Elias P. Duarte Jr. */

#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define TAMFILA      5
#define MAXHOSTNAME 30

void cleanBuffer(char buffer[]) {
	for(int i = 0; i < BUFSIZ; i++) 
		buffer[i] = '\0';
}

int main (int argc, char *argv[]) {
	int socketList, socketAccept;
	unsigned int i;
        char buffer [BUFSIZ + 1];
	struct sockaddr_in sa, isa;
	struct hostent *hp;
	char localhost [MAXHOSTNAME];

	if (argc != 2) {
		puts("Uso correto: servidor <porta>");
		exit(1);
	}

	gethostname (localhost, MAXHOSTNAME);

	if ((hp = gethostbyname( localhost)) == NULL){
		puts("Nao consegui meu proprio IP");
		exit(1);
	}	
	
	sa.sin_port = htons(atoi(argv[1]));

	bcopy((char *) hp->h_addr, (char *) &sa.sin_addr, hp->h_length);

	sa.sin_family = hp->h_addrtype;

	if ((socketList = socket(hp->h_addrtype,SOCK_STREAM,0)) < 0){
        puts("Nao consegui abrir o socket");
		exit(1);
	}	

	if (bind(socketList, (struct sockaddr *) &sa, sizeof(sa)) < 0){
		puts("Nao consegui fazer o bind");
		exit(1);
	}		
 
	listen (socketList, TAMFILA);
	
	while (1){
		i = sizeof(sa);
		if ((socketAccept = accept(socketList, (struct sockaddr *) &isa, &i)) < 0){
			puts("Nao consegui estabelecer conexao");
			exit(1);
		}	

		cleanBuffer(buffer);
		read(socketAccept, buffer, BUFSIZ);
		printf("Sou o servidor, recebi a mensagem: %s\n", buffer);
		write(socketAccept, buffer, BUFSIZ);
		close(socketAccept);
   }
   exit(0);
}
