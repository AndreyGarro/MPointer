#include "MapNode.h"

/**
 * Retorna el ID de un dato guardado en memoria
 * @return std::string
 */
const std::string &MapNode::getID() const {
    return ID;
}

/**
 * Cambia el ID de un dato
 * @param ID
 */
void MapNode::setID(const std::string &ID) {
    MapNode::ID = ID;
}

/**
 * Obtiene la compensación que se le debe hacer a la memoria para llegar a la posición en la que está el dato.
 * @return int
 */
int MapNode::getOffset() const {
    return offset;
}

/**
 * Modifica el offset
 * @param offset
 */
void MapNode::setOffset(int offset) {
    MapNode::offset = offset;
}

/**
 * Obtiene el tipo de dato
 * @return std::string
 */
const std::string &MapNode::getTipo() const {
    return tipo;
}

/**
 * Modifica el tipo de dato, de ser necesario
 * @param tipo
 */
void MapNode::setTipo(const std::string &tipo) {
    MapNode::tipo = tipo;
}

/**
 * Asigna los valores iniciales para cada dato almacenado
 * @param ID std:string
 * @param offset int
 * @param tipo std::string
 */
void MapNode::asignarValores(std::string ID, int offset, std::string tipo) {
    this->ID = ID;
    this->offset = offset;
    this->tipo = tipo;
}
