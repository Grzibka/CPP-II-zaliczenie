#include "Discipline.h"

Discipline::Discipline(const std::string& name) : name(name) {}

std::string Discipline::getName() const { return name; }
void Discipline::setName(const std::string& name) { this->name = name; }
