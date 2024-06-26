#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap( const std::string& name)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ct): name(ct.name)
{
    std::cout << "Copy constructor called" << std::endl;
    this->energyPoints = ct.energyPoints;
    this->hitPoints = ct.hitPoints;
    this->attackDamage = ct.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ct) {
        this->name = ct.name;
        this->energyPoints = ct.energyPoints;
        this->hitPoints = ct.hitPoints;
        this->attackDamage = ct.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0)
        std::cout << "I already have no hit points" << std::endl;
    else if (this->energyPoints == 0)
        std::cout << "I don't have enough energy points" << std::endl;
    else {
        this->energyPoints -= 1;
        std::cout << "Name constructor called" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0) {
        std::cout << "I already have no hitpoints" << std::endl;
        return;
    }
    std::cout << "I received damage" << std::endl;
    if ( amount >= this->hitPoints) {
        std::cout << "I fell down" << std::endl;
        this->hitPoints = 0;
    } else {
        this->hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0) {
        std::cout << "Name constructor called" << std::endl;
    } else if (this->hitPoints == 0) {
        std::cout << "Name constructor called" << std::endl;
    } else {
        std::cout << "Name constructor called" << std::endl;
        this->energyPoints -= 1;
        this->hitPoints += amount;
    }
}
