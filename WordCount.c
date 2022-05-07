#include<stdio.h>

int main() {
  char c;
  int count = 0;
  int word = 0;
  while((c=getchar()) != EOF )
  {
  	if(c < '0' || c > '9' )
  	{
  		count++;
  		if(c ==' ' || c == ',')
  		{
  			word++;
	    }
	}
  }
  printf("×Ö·ûÊý£º%d",count);
  printf("µ¥´ÊÊý£º%d",word+1);
  return 0;
}
