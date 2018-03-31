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

bool operator<(const celebrity & c1, const celebrity & c2){
  if(c1.desperation != c2.desperation)
    return c1.desperation < c2.desperation;
  else if(c1.met != c2.met)
    return !c1.met;

  return c1.name < c2.name;
}

bool operator<=(const celebrity & c1, const celebrity & c2){
	 return !(c1 < c2);
 }
