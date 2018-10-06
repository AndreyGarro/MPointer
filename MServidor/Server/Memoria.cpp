#include <cstdlib>
#include "Memoria.h"

/**
 * Constructor de Memoria
 * @param tamano Tamaño de la memoria a crear
 */
Memoria::Memoria(size_t tamano) {
    this->heap = malloc(tamano);
    this->posicionFinal = 0;
    maximo = (int) tamano;
}

/**
 * Asigna un ID para el dato agregado a la memoria
 * @return std::string
 */
std::string Memoria::asignarID() {
    return "S-" + to_string(posicionFinal);
}

// Reserva de memoria para cada tipo de dato

/**
 * Reserva el espacio en memoria para un entero
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarInt() {
    if ((posicionFinal + sizeof(int)) > maximo) {
        return jsonMaker.devolverID("", "no");;
    } else {
//        int *numero = (int *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "int");
        mapa->add(node);
        posicionFinal += sizeof(int);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un char
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarChar() {
    if ((posicionFinal + sizeof(char)) > maximo) {
        return jsonMaker.devolverID("", "no");;
    } else {
//        char *numero = (char *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "char");
        mapa->add(node);
        posicionFinal += sizeof(char);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un long
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarLong() {
    if ((posicionFinal + sizeof(long)) > maximo) {
        return jsonMaker.devolverID("", "no");;
    } else {
//        long *numero = (long *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "long");
        mapa->add(node);
        posicionFinal += sizeof(long);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un double
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarDouble() {
    if ((posicionFinal + sizeof(double)) > maximo) {
        return jsonMaker.devolverID("", "no");
    } else {
//        double *numero = (double *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "double");
        mapa->add(node);
        posicionFinal += sizeof(double);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un bool
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarBool() {
    if ((posicionFinal + sizeof(bool)) > maximo) {
        return jsonMaker.devolverID("", "no");;
    } else {
//        bool *numero = (bool *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "bool");
        mapa->add(node);
        posicionFinal += sizeof(bool);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un float
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarFloat() {
    if ((posicionFinal + sizeof(float)) > maximo) {
        return jsonMaker.devolverID("", "no");;
    } else {
//        float *numero = (float *) (heap + posicionFinal);
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "float");
        mapa->add(node);
        posicionFinal += sizeof(float);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

/**
 * Reserva el espacio en memoria para un string
 * @return JSON con la información del ID del dato
 */
std::string Memoria::iniciarString() {
    if ((posicionFinal + sizeof(std::string)) > maximo) {
        return jsonMaker.devolverID("", "no");
    } else {
        MapNode node;
        node.asignarValores(asignarID(), posicionFinal, "string");
        mapa->add(node);
        posicionFinal += sizeof(std::string);
        return jsonMaker.devolverID(node.getID(), "realizada");
    }
}

// Asignacion

/**
 * Asigna el valor para el dato con un ID específico
 * @param doc JSON con la información del dato
 * @return std::string JSON de la asigancion realizada
 */
std::string Memoria::asignarValor(rapidjson::Document &doc) {

    std::string tempID = doc["id"].GetString();
    MapNode tempNode;
    for (int i = 0; i < mapa->getLenght(); i++) {
        if (mapa->getMPointer(i).getID() == tempID) {
            tempNode = mapa->getMPointer(i);
            break;
        }
    }

    if (tempNode.getTipo() == "int") {
        int *numero = (int *) (heap + tempNode.getOffset());
        *numero = doc["Dato"].GetInt();

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "char") {
        char *numero = (char *) (heap + tempNode.getOffset());

        char dato = char(doc["Dato"].GetInt());

        std::cout<<"El dato es:" <<dato<<endl;

        *numero = dato;

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "long") {
        long *numero = (long *) (heap + tempNode.getOffset());
        string temp = doc["Dato"].GetString();
        *numero = std::stol(temp);

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "double") {
        double *numero = (double *) (heap + tempNode.getOffset());
        *numero = doc["Dato"].GetDouble();

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "bool") {
        bool *numero = (bool *) (heap + tempNode.getOffset());
        *numero = doc["Dato"].GetBool();

        cout<< "El valor booleano es: "<<*numero<<endl;

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "float") {
        float *numero = (float *) (heap + tempNode.getOffset());
        *numero = doc["Dato"].GetFloat();

        return jsonMaker.devolverAsignacion("realizado");
    } else if (tempNode.getTipo() == "string") {
        std::string * numero = (std::string*) (heap + tempNode.getOffset());
        *numero = doc["Dato"].GetString();

        return jsonMaker.devolverAsignacion("realizado");
    }
}
/**
 * Retorna el valor solicitado para un ID específico
 * @param doc JSON con la información del dato a retornar
 * @return std::string JSON con el dato
 */
std::string Memoria::retornarValor(rapidjson::Document &doc) {

    std::string tempID = doc["id"].GetString();
    MapNode tempNode;
    for (int i = 0; i < mapa->getLenght(); i++) {
        if (mapa->getMPointer(i).getID() == tempID) {
            tempNode = mapa->getMPointer(i);
            break;
        }
    }

    if (tempNode.getTipo() == "int") {
        int valor = *((int *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);
    } else if (tempNode.getTipo() == "char") {
        char valor = *((char *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;
        return jsonMaker.devolverValor(valor);

    } else if (tempNode.getTipo() == "long") {
        long valor = *((long *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);

    } else if (tempNode.getTipo() == "double") {
        double valor = *((double *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);

    } else if (tempNode.getTipo() == "float") {
        float valor = *((float *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);
    } else if (tempNode.getTipo() == "bool") {
        bool valor = *((bool *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);
    } else if (tempNode.getTipo() == "string") {
        std::string valor = *((std::string *) (heap + tempNode.getOffset()));
        std::cout<<std::endl<<"El valor a retornar es: "<<valor<<std::endl;

        return jsonMaker.devolverValor(valor);
    }
}

/**
 * Verifica la solicitud proveniente del cliente para ser procesada por Memoria
 * @param document std::string con la solicitud
 * @return std::string JSON con la respuesta
 */
std::string Memoria::verificarSolicitud(std::string document) {
    rapidjson::Document doc = jsonMaker.parsearJSON(document.c_str());

    std::string solicitud = doc["solicitud"].GetString();

    if (solicitud == "reservar") {
        std::string tipo = doc["tipo"].GetString();
        if (tipo == "i") {
            return this->iniciarInt();
        } else if (tipo == "c") {
            return this->iniciarChar();
        } else if (tipo == "l") {
            return this->iniciarLong();
        } else if (tipo == "d") {
            return this->iniciarDouble();
        } else if (tipo == "f") {
            return this->iniciarFloat();
        } else if (tipo == "b") {
            return this->iniciarBool();
        } else if (tipo == typeid(std::string).name()) {
            return this->iniciarString();
        }
    } else if (solicitud == "asignar") {
        return this->asignarValor(doc);
    } else if (solicitud == "retornar") {
        return this->retornarValor(doc);
    }
}