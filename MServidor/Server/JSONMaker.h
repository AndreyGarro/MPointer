#ifndef UNTITLED4_JSONMAKER_H
#define UNTITLED4_JSONMAKER_H

#include <document.h>
#include <string.h>


class JSONMaker {

public:
    std::string devolverID(std::string id, std::string accion);
    std::string devolverAsignacion(std::string asignar);
    std::string devolverValor(int dato);
    std::string devolverValor(char dato);
    std::string devolverValor(long dato);
    std::string devolverValor(double dato);
    std::string devolverValor(bool dato);
    std::string devolverValor(float dato);
    std::string devolverValor(std::string dato);

    rapidjson::Document parsearJSON(const char*);

};


#endif //UNTITLED4_JSONMAKER_H
