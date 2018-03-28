#include <string>
#include "celebrity.h"


celebrity::celebrity(std::string &name, int &desperation, std::string &field, bool &met):
name(name), desperation(desperation), field(field), met(met){}

void celebrity::setName(std::string &name){
  this->name = name;
}

std::string celebrity::getName() const{
  return name;
}

void celebrity::setDesperation(int &desperation){
  this->desperation = desperation;
}

int celebrity::getDesperation() const{
  return desperation;
}

void celebrity::setField(std::string &field){
  this->field = field;
}


std::string celebrity::getField() const{
  return field;
}

void celebrity::setMet(bool &met){
  this->met = met;
}

bool celebrity::getMet() const{
  return met;
}

bool celebrity::&operator <(celebrity &other){
  if(this->desperation != other->desperation)
    return this->desperation < other.desperation;
  else if(this->met != other.met)
    return this->met;

  return this->name < other.name;
}

