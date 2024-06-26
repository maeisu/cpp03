#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor for child class ScavTrap called" << std::endl;
    this->name = "";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap( const std::string& name): ClapTrap(name)
{
    std::cout << "Name constructor called" << std::endl;
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st.name)
{
    std::cout << "Copy constructor called" << std::endl;
    this->energyPoints = st.energyPoints;
    this->hitPoints = st.hitPoints;
    this->attackDamage = st.attackDamage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &st)
    {
        this->name = st.name;
        this->energyPoints = st.energyPoints;
        this->hitPoints = st.hitPoints;
        this->attackDamage = st.attackDamage;
    }
    return *this;
}
void ScavTrap::guardGate()
{
    if (this->hitPoints == 0) {

    } else if (this->energyPoints == 0) {

    } else {
        std::cout << "" << std::endl;
    }

}