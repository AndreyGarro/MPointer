#ifndef MPOINTER_DATO_H
#define MPOINTER_DATO_H

#include "Server/JSONMakerClient.h"
#include "Server/MCliente.h"

/**
 * Dato almacena el dato a guardar en MPointer es necesario que realice ciertas funciones
 * @tparam T Tipo de dato
 */
template<class T>
class Dato {
private:
    T *data;
    MCliente *cliente;
    JSONMakerClient jsonMaker;
    std::string IDServer;
public:
    T operator=(const T &);

    void generarIDServer();

    T retornarDatoServer();

    T getData() const;

    void New();

    T *getDataPtr();

    void setIDServer(std::string);

    std::string getIDServer();
};

template<class T>
void Dato<T>::New() {
    data = (T *) malloc(sizeof(T));
}

/**
 * Sobrecarga para =
 * @tparam T
 * @param dato
 * @return T
 */
template<class T>
T Dato<T>::operator=(const T &dato) {
    if (MCliente::esActivo()) {
        cliente->conectar(jsonMaker.solicitarAsignacion(IDServer, dato));
        return dato;
    }
    *this->data = dato;
    return *data;
}

/**
 * Genera el IDServer para un dato
 * @tparam T
 */
template<class T>
void Dato<T>::generarIDServer() {
    cliente = MCliente::getInstance();
    rapidjson::Document doc = cliente->conectar(jsonMaker.solicitarMemoria(typeid(T).name()));
    this->IDServer = doc["ID"].GetString();
}

/**
 * Retorna el dato almacenado en el server
 * @tparam T
 * @return T
 */
template<class T>
T Dato<T>::retornarDatoServer() {
    rapidjson::Document doc = cliente->conectar(jsonMaker.solicitarValor(IDServer));
    if (typeid(T).name() == typeid(int).name()) {
        return doc["dato"].GetInt();
    } else if (typeid(T).name() == typeid(bool).name()) {
        return doc["dato"].GetBool();
    } else if (typeid(T).name() == typeid(float).name()) {
        return doc["dato"].GetFloat();
    } else if (typeid(T).name() == typeid(double).name()) {
        return doc["dato"].GetDouble();
    } else if (typeid(T).name() == typeid(long).name()) {
        std::string temp = doc["dato"].GetString();
        return std::stol(temp);
    } else if (typeid(T).name() == typeid(char).name()) {
        char temp = doc["dato"].GetInt();
        return temp;
    }
}

template<class T>
T Dato<T>::getData() const {
    return *data;
}

template<class T>
T *Dato<T>::getDataPtr() {
    return data;
}

template<class T>
void Dato<T>::setIDServer(std::string a) {
    cliente = MCliente::getInstance();
    this->IDServer = a;
}

template<class T>
std::string Dato<T>::getIDServer() {
    return this->IDServer;
}

#endif //MPOINTER_DATO_H
