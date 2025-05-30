/* Um cliente TCP/IP
   Elias P. Duarte Jr.
   Ãšltima AtualizaÃ§Ã£o: 17/08/22 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {  
    int sockdescr;
    int numbytesrecv;
    struct sockaddr_in sa;
    struct hostent *hp;
    char buf[BUFSIZ+1];
    char *host;
    char *dados;

    if(argc != 4) {
      puts("Uso correto: cliente <nome-servidor> <porta> <dados>");
      exit(1);
    }

    host = argv[1];
    dados = argv[3];

    if((hp = gethostbyname(host)) == NULL){
      puts("Nao consegui obter endereco IP do servidor.");
      exit(1);
    }

    bcopy((char *)hp->h_addr, (char *)&sa.sin_addr, hp->h_length);
    sa.sin_family = hp->h_addrtype;

    sa.sin_port = htons(atoi(argv[2]));

    if((sockdescr = socket(hp->h_addrtype, SOCK_STREAM, 0)) < 0) {
      puts("Nao consegui abrir o socket.");
      exit(1);
    }

    if(connect(sockdescr, (struct sockaddr *) &sa, sizeof sa) < 0) {
      puts("Nao consegui conectar ao servidor");
      exit(1);
    } 

    if(write(sockdescr, dados, strlen(dados)) != strlen(dados)){
      puts("Nao consegui mandar os dados"); 
      exit(1);
    }

    read(sockdescr, buf, BUFSIZ);
    printf("Sou o cliente, recebi: %s\n", buf);
   
    close(sockdescr);
    exit(0);
}
