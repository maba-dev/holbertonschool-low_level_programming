#ifndef dog_H
#define dog_H

/**
* struct dog - struture of a dog
* @name: char
* @age: float
* @owner: char
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
#endif
