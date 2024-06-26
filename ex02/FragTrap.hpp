#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        FlagTrap();
        FlagTrap(const std::string& name);
        FlagTrap(const FlagTrap& ft);
        ~FlagTrap();
        FlagTrap& operator=(const FlagTrap& ft);
        void highFivesGuys(void);
};

#endif