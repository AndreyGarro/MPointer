//
// Created by ortegajosant on 24/09/18.
//

#include "MCliente.h"

int MCliente::conectarse() {

    direccionSC.sin_family = AF_INET;
    direccionSC.sin_addr.s_addr = inet_addr("127.0.0.1");
    direccionSC.sin_port = htons(5555);

    cliente = socket(AF_INET, SOCK_STREAM, 0);
    if (connect(cliente, (struct sockaddr *) &direccionSC, sizeof(direccionSC)) != 0) {
        perror("No se pudo conectar");
        return 1;
    }

    char mensaje[1000];
    ssize_t bytes = 0;

    while (1) {

        scanf("%s", mensaje);

        send(cliente, mensaje, strlen(mensaje), 0);

        bytes = recv(cliente, mensaje, 1000, 0);

        mensaje[bytes] = '\0';

        if (bytes <= 0) {
            perror("Se apagó el Server");
            return 0;
        }

        printf("Mensaje recibido: %s\n", mensaje);
    }
}
