// WAP to show : Vowel or Consonant using switch case

#include <iostream>
main(){
	char ch;
  
  	printf("Enter an alphabet: ");
  	scanf("%c",&ch);

  	switch(ch){
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    	case 'A':
    	case 'E':
	    case 'I':
	    case 'O':
	    case 'U':
	      printf(" is a vowel.");
	      break;
	    default:
	      printf(" is a consonant.");
  }
}
