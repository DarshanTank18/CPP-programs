// WAP to show difference between Structure and Union.
#include<stdio.h>
#include<string.h>
struct Id{
	int id;
	char nm[20];

};

union Data{
	int id;
	char nm[20];
};

main(){
	struct Id id;
	id.id = 1;
	strcpy(id.nm,"darshan");
	printf("Using structure:");
	printf("\nId:%d",id.id);
	printf("\nName:%s",id.nm);
	printf("\n");

    union Data data;
    data.id = 2;
    printf("\nUsing union:");
    printf("\nId:%d",data.id);
    strcpy(data.nm,"dharam");
    printf("\nName:%s",data.nm);
   
}
