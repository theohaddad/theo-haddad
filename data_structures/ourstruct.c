#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


char stack[4];

int MAX_SIZE = 4;
int top = -1;




struct Person
{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

int push(int data) {
	if(!isFull()){
		top += 1;
		stack[top] = data;
	}
	else{
		printf("Stack is full.\n");
	}
}

char spush(char *data) {
	if(!isFull()){
		top += 1;
		stack[top] = data;
	}else{
		printf("Stack is full.\n");
	}
}

int pop(){
	int data;
	if(!isEmpty()){
		data = stack[top];
		top -= 1;
		return data;
	}
	else{
		printf("Stack is empty. No top element.\n");
	}
}

char spop() {
	char *data;
	if(!isEmpty()){
		data = stack[top];
		top -=  1;
		return data;
	}else{
		printf("Stack is empty. No top element.\n");
	}
}

int isEmpty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(){
	if(top == MAX_SIZE){
		return 1;
	}
	else{
		return 0;	
	}
}

int peek(){
	return stack[top];
}

int main()
{
	struct Person *theo = Person_create("Theo Haddad", 17, 176, 60);
	struct Person *gab = Person_create("Gabriel Zeitoun", 16, 178, 63);
	struct Person *phillip = Person_create("Phillip Budiman", 15, 178, 63);

	spush(theo->name);

	spush(gab->name);

	spush(phillip->name);

	while(!isEmpty()){
		
		char *data = spop();
		printf("%s\n", data);
	}

return 0;
}


