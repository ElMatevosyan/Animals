#include <iostream>

class Animal
{
public:
Animal()
        : m_id(0)
        , m_name("Animal")
    {   
    }   
   
Animal( std::string name )
        : m_id(0)
        , m_name(name)
    {   
    }   

virtual void toFeed()// virtual
    {   
        std::cout << m_name << " eats something." << std::endl;
    }   

virtual void makeSound() // virtual
    {   
        std::cout << m_name << " says something." << std::endl;
    }   

int getID() const 
    {   
        return m_id; 
    }   
void setID( int id ) 
    {   
         m_id = id; 
    }   
std::string getNAME() const 
    {   
        return m_name; 
    }   
void setNAME( std::string name ) 
    {   
        m_name = name; 
    }   
    
    protected:
        int m_id;
        std::string m_name;
};

class Dog: public Animal
{
    public:
Dog()
    : Animal()
    , m_breed("")
    , m_color("")
{
}

Dog(std::string dogname)
    : Animal( dogname )
    , m_breed("")
    , m_color("")
{
}

void toFeed() override
{
    std::cout << "Dogs like to eat bone." << std::endl;
}

void makeSound() override
{
    std::cout  << "Dogs say woof." << std::endl;
}

std::string getBREED() const { return m_breed; }
void setBREED( std::string breed ) { m_breed = breed; }
std::string getCOLOR() const { return m_color; }
void setCOLOR( std::string color ) { m_color = color; }

void about()
{
    std::cout << "\nDog name: " << m_name << "\nDog id: " << m_id << "\nDog breed: " << m_breed << "\nDog color" << m_color << std::endl;
}
    private:
        std::string m_breed;
        std::string m_color;
};


class Cat: public Animal
{
    public:
Cat()
    : Animal()
    , m_breed("")
    , m_color("")
{
}

Cat( std::string catname )
    : Animal( catname )
    , m_breed("")
    , m_color("")
{
}

void toFeed() override
{
    std::cout << "Cats like to eat fish." << std::endl;
}

void makeSound() override
{
    std::cout << "Cats say meow." << std::endl;
}

std::string getBREED() const { return m_breed; }
void setBREED( std::string breed ) { m_breed = breed; }
std::string getCOLOR() const { return m_color; }
void setCOLOR( std::string color ) { m_color = color; }

void about()
{
    std::cout << "\nCat name: " << m_name << "\nCat id: " << m_id << "\nCat breed: " << m_breed << "\nCat color: " << m_color << std::endl;
}
    private:
        std::string m_breed;
        std::string m_color;
};


int main()
{
        Cat my_cat( "Murzik" );
        my_cat.toFeed();
        my_cat.makeSound();
        my_cat.setID(101);
        my_cat.setBREED("Persian");
        my_cat.setCOLOR("white");

        my_cat.about();
      std::cout << std::endl;
        
        Dog my_dog;
        my_dog.toFeed();
        my_dog.makeSound();
        my_dog.setNAME("Sharik");
        my_dog.setID(102);
        my_dog.setBREED("Rottweller");
        my_dog.setCOLOR("black");

        my_dog.about();
    return 0;
}
