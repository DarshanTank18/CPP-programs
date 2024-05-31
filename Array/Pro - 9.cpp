// WAP to show difference between Structure and Union.
#include<stdio.h>
#include<string.h>
struct Std{
	int rlno;
	char name[50];
	float marks;
};

union Info{
	int rlno;
	char name[50];
	float marks;
};

int main(){
	struct Std std1;
	std1.rlno=1;
	strcpy(std1.name,"darshan");
	std1.marks=99.99;
	
	printf("Using Structure:");
	printf("\nrlno Number:%d",std1.rlno);
	printf("\nName:%s",std1.name);
	printf("\namearks:%.2f",std1.marks);
	
	union Info info1;
	info1.rlno=2;
	printf("\n");
	printf("\nUsing Union:");
	printf("\nroll Number:%d",info1.rlno);
	strcpy(info1.name,"dharam");
	printf("\nName:%s",info1.name);
    info1.marks=99.98;
	printf("\nmarks:%.2f",info1.marks);
}
