#include "MapNode.h"

const std::string &MapNode::getID() const {
    return ID;
}

void MapNode::setID(const std::string &ID) {
    MapNode::ID = ID;
}

int MapNode::getOffset() const {
    return offset;
}

void MapNode::setOffset(int offset) {
    MapNode::offset = offset;
}

const std::string &MapNode::getTipo() const {
    return tipo;
}

void MapNode::setTipo(const std::string &tipo) {
    MapNode::tipo = tipo;
}

void MapNode::asignarValores(std::string ID, int offset, std::string tipo) {
    this->ID = ID;
    this->offset = offset;
    this->tipo = tipo;
}
