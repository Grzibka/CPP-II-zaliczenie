#ifndef DISCIPLINE_H
#define DISCIPLINE_H

#include <string>

class Discipline {
public:
    Discipline(const std::string& name);

    std::string getName() const;
    void setName(const std::string& name);

private:
    std::string name;
};

#endif
