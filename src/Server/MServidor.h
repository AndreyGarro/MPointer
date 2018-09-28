//
// Created by ortegajosant on 24/09/18.
//

#ifndef MPOINTER_MSERVIDOR_H
#define MPOINTER_MSERVIDOR_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <string.h>


class MServidor {

public:
    int run();

private:
    struct sockaddr_in direccionServidor;
    struct sockaddr_in direccionCliente;
    int servidor;
    int cliente;
};

#endif //MPOINTER_MSERVIDOR_H
