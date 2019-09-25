#include <sys/types.h>
#include <sys/socket.h>
#include <net/if.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>


int puerto = 7200;

int main(void)
{
   int num[50];
   int s, res, clilen;
   struct sockaddr_in server_addr, msg_to_client_addr;
   int respuesta;
   s = socket(AF_INET, SOCK_DGRAM, 0);
   
   /* se asigna una direccion al socket del servidor*/
   bzero((char *)&server_addr, sizeof(server_addr));
   server_addr.sin_family = AF_INET;
   server_addr.sin_addr.s_addr = INADDR_ANY;
   server_addr.sin_port = htons(puerto);
   bind(s, (struct sockaddr *)&server_addr, sizeof(server_addr));
   clilen = sizeof(msg_to_client_addr);
   while(1) {
      respuesta = recvfrom(s, (char *) num, 50*sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, &clilen);
      printf("Tamaño del paquete: %d\n", respuesta);
      res = num[0] + num[1];
      char str[INET_ADDRSTRLEN];
      struct sockaddr_in* ip = (struct sockaddr_in*)&msg_to_client_addr;
      struct in_addr ipAdd = ip->sin_addr;
      unsigned short ipPort = ip->sin_port;
      inet_ntop(AF_INET, &ipAdd, str, INET_ADDRSTRLEN);
      printf("%s  \n", str);
      printf("%d \n", (int) ntohs(ip->sin_port));
      printf("Prueba \n");
      
      //struct ifreq ifr;
      //strcpy(ifr.ifr_name, "wlp2s0");
      //printf("%d", )
      /* envía la petición al cliente. La estructura msg_to_client_addr contiene la dirección socket del cliente */
      sendto(s, (char *)&res, sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, clilen);
   }
}

