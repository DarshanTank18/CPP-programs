// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

main()
{
	int a,width,hight,length;
	
	printf("Enter value of width : ",width);
	scanf("%d",&width);	
	
	printf("Enter value of hight : ",hight);
	scanf("%d",&hight);
	
	printf("Enter value of length : ",length);
	scanf("%d",&length);
	
	a = 2*(width * length + hight * length + hight * width);
	printf("area of a rectangular prism is : %d",a);
}
