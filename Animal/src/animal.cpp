#include <iostream>
#include "animal.h"

Animal::Animal()
        : m_id(0)
        , m_name("Animal")
    {
    }
   
Animal::Animal(std::string name)
        : m_id(0)
        , m_name(name)
    {
    }

virtual void Animal:: toFeed()// virtual
    {
        std::cout << m_name << " eats something." << std::endl;
    }

virtual void Animal:: makeSound()// virtual
    {
        std::cout << m_name << " says something." << std::endl;
    }

int Animal:: getID() const 
    { 
	return m_id; 
    }
void Animal:: setID( int id ) 
    {
	 m_id = id; 
    }
std::string Animal:: getNAME() const 
    { 
	return m_name; 
    }
void Animal::setNAME( std::string name ) 
    { 
	m_name = name; 
    }


Dog::Dog()
    : Animal()
    , m_breed("")
    , m_color("")
{
}

Dog:: Dog(std::string dogname)
    : Animal( dogname )
    , m_breed("")
    , m_color("")
{
}

void Dog:: toFeed() override
{
    std::cout << "Dogs like to eat bone." << std::endl;
}

void Dog:: makeSound() override
{
    std::cout  << "Dogs say woof." << std::endl;
}

std::string Dog::getBREED() const { return m_breed; }
void Dog::setBREED( std::string breed ) { m_breed = breed; }
std::string Dog:: getCOLOR() const { return m_color; }
void Dog::setCOLOR( std::string color ) { m_color = color; }

void dog:: about()
{
    std::cout << "\nDog name: " << m_name << "\nDog id: " << m_id << "\nDog breed: " << m_breed << "\nDog color" << m_color << std::endl;
}


Cat::Cat()
    : Animal()
    , m_breed("")
    , m_color("")
{
}

Cat::Cat( std::string catname )
    : Animal( catname )
    , m_breed("")
    , m_color("")
{
}

void Cat:: toFeed() override
{
    std::cout << "Cats like to eat fish." << std::endl;
}

void Cat:: makeSound() override
{
    std::cout << "Cats say meow." << std::endl;
}

std::string Cat:: getBREED() const { return m_breed; }
void Cat:: setBREED( std::string breed ) { m_breed = breed; }
std::string Cat:: getCOLOR() const { return m_color; }
void Cat:: setCOLOR( std::string color ) { m_color = color; }

void Cat:: about()
{
    std::cout << "\nCat name: " << m_name << "\nCat id: " << m_id << "\nCat breed: " << m_breed << "\nCat color: " << m_color << std::endl;
}
