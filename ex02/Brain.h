#ifndef BRAIN_H
#define BRAIN_H
#include <string>

class Brain {
private:
	std::string *ideas;
public:
	Brain();
	Brain(const std::string ideas[]);
	Brain(Brain const &);
	Brain& operator=(Brain const &);
	~Brain();
};


#endif
