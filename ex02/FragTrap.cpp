#include "FragTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
    std::cout << "Default constructor for child class ScavTrap called" << std::endl;
    this->name = "";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}
FlagTrap::FlagTrap(const std::string& name) : ClapTrap(name)
{

}
FlagTrap::FlagTrap(const FlagTrap& ft) : ClapTrap(ft)
{

}
FlagTrap::~FlagTrap()
{

}
FlagTrap& FlagTrap::operator=(const FlagTrap& ft)
{
    if (this != &ft) {
        this->name = ft.name;
        this->energyPoints = ft.energyPoints;
        this->hitPoints = ft.hitPoints;
        this->attackDamage = ft.attackDamage;
    }
}
void FlagTrap::highFivesGuys(void)
{}