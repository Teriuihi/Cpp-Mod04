#ifndef BRAIN_H
#define BRAIN_H
#include <string>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const std::string ideas[]);
	Brain(Brain const &);
	Brain& operator=(Brain const &);
	~Brain();
};


#endif
