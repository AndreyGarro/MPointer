#ifndef UNTITLED4_SERVER_H
#define UNTITLED4_SERVER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <string>
#include <string.h>
#include "Memoria.h"

/**
 * Server inicia el servidor al que se conecta MPointer
 */
class Server {

public:
    int run(int);

private:
    struct sockaddr_in direccionServidor;
    struct sockaddr_in direccionCliente;
    int servidor;
    int cliente;
    Memoria * memory;
};


#endif //UNTITLED4_SERVER_H
