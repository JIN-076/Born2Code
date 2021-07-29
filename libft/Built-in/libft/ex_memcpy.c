#include <string.h>
#include <stdio.h>

struct {
	char name[40];
	int age;
} Person, Person_copy;

int main()
{
	char myname[] = "this is memcpy function for three";

	char changename[] = "this is memcpy function for two";

	puts("--------------using memcpy to copy string--------------");
	printf("Person name : %s\n", Person.name);
	memcpy(Person.name, myname, strlen(myname) + 1);
	Person.age = 23;

	printf("Person : %s, %d\n", Person.name, Person.age);
	printf("Person name : %s\n", Person.name);

	memcpy(Person.name, changename, strlen(changename));

	printf("Person : %s, %d\n", Person.name, Person.age);
	printf("Person name : %s\n", Person.name);

	puts("--------------using memcpy to copy structure--------------");

	printf("size : %lu\n", sizeof(Person));
	printf("size : %lu\n", sizeof(Person_copy));

	memcpy(&Person_copy, &Person, sizeof(Person));

	printf("Person copy : %s, %d\n", Person_copy.name, Person_copy.age);

	return (0);
}

