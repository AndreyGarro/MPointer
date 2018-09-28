//
// Created by ortegajosant on 24/09/18.
//

#ifndef MPOINTER_MCLIENTE_H
#define MPOINTER_MCLIENTE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

class MCliente {

private:
    int cliente;
    struct sockaddr_in direccionSC;
public:
    int conectarse();
};

#endif //MPOINTER_MCLIENTE_H
