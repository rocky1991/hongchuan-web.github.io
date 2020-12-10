#include <stdio.h>
#include "say_hi.h"
#define A 5
#define POWER(x) (x*x)
const int a = 5;

int incrementAge() {
	static int age = 0;
	//age = 0;
	age++;
	return age;
}

const int DEBUG = 0;


int main(int argc, char *argv[]) {
	
	printf("%d\n", __LINE__);
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);

	#ifdef A
		printf("value A is defined\n");
	#else 
		printf("value A is not defined\n");
	#endif
	
	printf("power(5) is %d\n", POWER(5));
	#if DEBUG == 0
		printf("Not debugging\n");
	#else
		printf("debugging\n");
	#endif

	say_hello();
	for(int i = 0; i < argc; i ++ ) {
		printf("%s", argv[i]);
		printf("\n");
	}

	typedef struct {
		int age;
		char *name;
	}PERSON;

	PERSON rocky = {23, "rocky"};
	printf("a person %s, age %d\n", rocky.name, rocky.age);

	struct person{
		int age;
		char *name;
	} john = {23, "John"}, a_group[20];

	john.age = 23;
	john.name = "John";
	printf("%s, age %d\n", john.name, john.age);
	
	typedef enum{
		MONDAY,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY
	}WEEKDAY;
	

	typedef int NUMBER;
	NUMBER one = 1;
	printf("one is %d\n", one);

	
	printf("new age is %d\n", incrementAge());
	printf("new age is %d\n", incrementAge());
	printf("new age is %d\n", incrementAge());
	printf("new age is %d\n", incrementAge());


	int age = 37;
	int *address = &age;
	*address = 23;
	printf("the value pointer point to is %d\n", age);
	

	int int_arr[5] = { 1,2,3,4,5};
	printf("The arr[0] is %d\n", int_arr[0]);
	// ternary operator
	//
	int a = 0;
	printf("ternary operation a = 1? a+1: a + 2\n");
	a = 0? a + 1: a + 2;
	printf("final a value is: %d\n", a);

	printf("a is %d\n\n, A is %d\n\n", a, A);
	
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("short size: %lu bytes\n", sizeof(short));
	printf("long size: %lu bytes\n", sizeof(long));
	printf("float size: %lu bytes\n", sizeof(float));
	printf("double size: %lu bytes\n", sizeof(double));
	printf("long double size: %lu bytes\n", sizeof(long double));
	return 0;
}
