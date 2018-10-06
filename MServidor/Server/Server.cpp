#include <unistd.h>
#include "Server.h"

using namespace std;

/**
 * Inicia el servidor y la memoria
 * @param tamano tamaño de la memoria
 * @return entero
 */
int Server::run(int tamano) {

    memory = new Memoria((size_t)tamano);

    this->direccionServidor.sin_family = AF_INET;
    this->direccionServidor.sin_addr.s_addr = INADDR_ANY;
    this->direccionServidor.sin_port = htons(5555);

    this->servidor = socket(AF_INET, SOCK_STREAM, 0);
    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));


    if (bind(servidor, (struct sockaddr *) &this->direccionServidor, sizeof(this->direccionServidor)) != 0) {
        perror("Falló el bind");
        printf("Se inicia a escuchar");
    }

    listen(servidor, 5);

    unsigned int tamanoDireccion;

    char *buffer = (char *) malloc(1000);

    std::string respuestaFinal;

    ssize_t bytes = 0;

    while(true) {
        cliente = accept(servidor, (struct sockaddr *) &direccionCliente, &tamanoDireccion);
        printf("Recibí el cliente: %d!!\n", cliente);
        bytes = recv(cliente, buffer, 1000, 0) <= 0;
        if (bytes < 0) {
            perror("Se desconectó el cliente\n");
            break;
        }
        printf("Recibí: %d con el mensaje: %s\n", (int) bytes, buffer);

        respuestaFinal = std::string(buffer);

        std::cout<<respuestaFinal<<endl;

        std::string envio = memory->verificarSolicitud(respuestaFinal);

        send(cliente, envio.c_str(), envio.length(), 0);
        memset(buffer, 0, 999);
        close(cliente);
    }

    free(buffer);

}


