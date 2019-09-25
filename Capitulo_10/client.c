#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>

int puerto = 7200;

int main(void)
{
   struct sockaddr_in msg_to_server_addr, client_addr;
   int s, num[20000], res;
   
   s = socket(AF_INET, SOCK_DGRAM, 0);
   /* rellena la dirección del servidor */
   bzero((char *)&msg_to_server_addr, sizeof(msg_to_server_addr));
   msg_to_server_addr.sin_family = AF_INET;
   msg_to_server_addr.sin_addr.s_addr = inet_addr("10.100.66.27");
   msg_to_server_addr.sin_port = htons(puerto);
   
   /* rellena la direcciòn del cliente*/
   bzero((char *)&client_addr, sizeof(client_addr));
   client_addr.sin_family = AF_INET;
   client_addr.sin_addr.s_addr = INADDR_ANY;
   
   /*cuando se utiliza por numero de puerto el 0, el sistema se encarga de asignarle uno */
   client_addr.sin_port = htons(puerto);
   bind(s, (struct sockaddr *)&client_addr,sizeof(client_addr));
   num[0] = 2;
   num[1] = 5; /*rellena el mensaje */
   sendto(s, (char *)num, 16376 * sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));
   
   //valor máximo 16376 bytes los restantes 65535
   /* se bloquea esperando respuesta */
   recvfrom(s, (char *)&res, sizeof(int), 0, NULL, NULL);

   char str[INET_ADDRSTRLEN];
   struct sockaddr_in* pV4Addr = (struct sockaddr_in*)&msg_to_server_addr;
   struct in_addr ipAddr = pV4Addr->sin_addr;
   inet_ntop( AF_INET, &ipAddr, str, INET_ADDRSTRLEN );


   int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
   struct ifreq ifr;
   strcpy(ifr.ifr_name, "en1");
   if(!ioctl(sock, SIOCGIFMTU, &ifr)) {
      printf("UMT: %d \n" , ifr.ifr_mtu);
   }

   // char auxiliar[4];

   // memcpy(auxiliar, &msg_to_server_addr.sin_addr.s_addr, 4);
   // printf("IP: %d \n" , auxiliar);
   // memcpy(auxiliar, &msg_to_client_addr.sin_addr.s_addr, 4);
   // printf("IP: %d \n" , auxiliar);
   // memcpy(auxiliar, &msg_to_client_addr.sin_port, 4);
   // printf("PORT: %d \n" , auxiliar);
   
   // printf("PORT: %d \n" , (int) ntohs(pV4Addr->sin_port));

   printf("IP: %s \n" , str);
   printf("PORT: %d \n" , (int) ntohs(pV4Addr->sin_port));

   printf("2 + 5 = %d\n", res);
   close(s);
}

