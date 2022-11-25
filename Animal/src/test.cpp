#include "test.h"
#include "animal.h"

void test()
{
Animal A("Katu");

	Cat my_cat( "Murzik" );
	my_cat.toFeed();
	my_cat.makeSound();
	my_cat.setID(101);
	my_cat.setBREED("Persian");
	my_cat.setCOLOR("white");

	my_cat.about();
//	std::cout << std::endl;
	
	Dog my_dog;
	my_dog.toFeed();
	my_dog.makeSound();
	my_dog.setNAME("Sharik");
	my_dog.setID(102);
	my_dog.setBREED("Rottweller");
	my_dog.setCOLOR("black");

	my_dog.about();
	
}
