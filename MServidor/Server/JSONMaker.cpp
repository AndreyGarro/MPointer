//
// Created by ortegajosant on 25/09/18.
//

#include <include/rapidjson/stringbuffer.h>
#include <include/rapidjson/prettywriter.h>
#include "JSONMaker.h"

std::string JSONMaker::devolverID(std::string id, std::string accion) {

    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("accion", rapidjson::Value().SetString(accion.c_str(), alloc), alloc);
    document.AddMember("ID", rapidjson::Value().SetString(id.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

rapidjson::Document JSONMaker::parsearJSON(const char* json) {
    rapidjson::Document document;
    document.Parse(json);
    return document;
}

std::string JSONMaker::devolverAsignacion(std::string asignar) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("accion", rapidjson::Value().SetString(asignar.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(int dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(char dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(long dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(double dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(bool dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(float dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

std::string JSONMaker::devolverValor(std::string dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", rapidjson::Value().SetString(dato.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}
