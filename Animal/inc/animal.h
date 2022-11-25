#ifndef __ANIMAL__
#define __ANIMAL__
#include <string>

class Animal
{
    public:
        Animal();
     
	Animal(std::string);

        virtual void toFeed();

        virtual void makeSound() {}
       
        int getID() const;
       	void setID( int );
        std::string getNAME() const;
        void setNAME( std::string );

    protected:
        int m_id;
        std::string m_name;
};

class Dog: public Animal
{
    public:
        Dog();

        Dog(std::string dogname);

        void toFeed() override;

        void makeSound() override;
        
        std::string getBREED() const;
        void setBREED( std::string breed );
        std::string getCOLOR() const;
        void setCOLOR( std::string color );
        
        void about();

    private:
        std::string m_breed;
        std::string m_color;
};

class Cat: public Animal
{
    public:
        Cat();

        Cat( std::string catname );

        void toFeed() override;

        void makeSound() override;
        
        std::string getBREED() const;
        void setBREED( std::string breed );
        std::string getCOLOR() const;
        void setCOLOR( std::string color );
        
        void about();

    private:
        std::string m_breed;
        std::string m_color;
}; 

#endif //__ANIMAL__
