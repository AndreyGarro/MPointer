//
// Created by ortegajosant on 24/09/18.
//

#include "MServidor.h"

using namespace std;


int MServidor::run() {
    this->direccionServidor.sin_family = AF_INET;
    this->direccionServidor.sin_addr.s_addr = INADDR_ANY;
    this->direccionServidor.sin_port = htons(5555);

    this->servidor = socket(AF_INET, SOCK_STREAM, 0);
    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));


    if (bind(servidor, (struct sockaddr *) &this->direccionServidor, sizeof(this->direccionServidor)) != 0) {
        perror("Falló el bind");
    }

    printf("Escuchando......\n");

    listen(servidor, 5);

    unsigned int tamanoDireccion;

    cliente = accept(servidor, (struct sockaddr *) &direccionCliente, &tamanoDireccion);

    printf("Recibí el cliente: %d!!\n", cliente);

    char *buffer = (char *) malloc(1000);

    ssize_t bytes = 0;

    while (!strstr(buffer, "salir")) {
        bytes = recv(cliente, buffer, 1000, 0);
        if (bytes <= 0) {
            perror("Se desconectó el cliente\n");
            return 0;
        }

        buffer[bytes] = '\0';
        printf("Recibí: %d con el mensaje: %s\n", (int) bytes, buffer);

        send(cliente, "Recibí su mensaje", strlen("Recibí su mensaje"), 0);
    }

    free(buffer);

}
