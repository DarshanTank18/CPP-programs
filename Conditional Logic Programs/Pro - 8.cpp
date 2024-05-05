//WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

main()
{
    float Height;

    printf("Input person height(in centimetres) :");
	scanf("%f", &Height);

    if (Height < 140.0)
        printf("person is short. \n");
    else if ((Height >= 140.0) && (Height < 160.0))
        printf("person is average heighted. \n");
    else if ((Height >= 160.0) && (Height <= 180.0))
        printf("person is taller. \n");
    else
        printf("Abnormal height.\n");
}

