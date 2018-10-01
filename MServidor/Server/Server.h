//
// Created by ortegajosant on 22/09/18.
//

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
