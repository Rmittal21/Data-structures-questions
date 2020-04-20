#include<bits/stdc++.h>
 
char stack[50];
int ST[50];
int itop=-1,ctop=-1;
void ipush(int);
void cpush(char);
int ipop();
char cpop();
int prec(char);
void in_to_post(char *);
int evaluate(char);

void main()
{
	char in[50];
	gets(in);
	in_to_post(in);
	getch();
}

void ipush(int i)
{
	//check overflow
	if(itop>=49)
		printf("Stack overflow!");
	else
	{
		itop=itop+1;
		ST[itop]=i;
	}
}

void cpush(char c)
{
	//check overflow
	if(itop>=49)
		printf("Stack overflow!");
	else
	{
		ctop=ctop+1;
		stack[ctop]=c;
	}
}

int ipop()
{
	//check underflow
	if(itop<-1)
		printf("Stack underflow!");
	else
	{
		int i=ST(itop);
		itop=itop-1;
		return i;
	}
}

char cpop()
{
	//check underflow
	if(itop<-1)
		printf("Stack underflow!");
	else
	{
		char c=stack(ctop);
		ctop=ctop-1;
		return c;
	}
}

int prec(char c)
{
	switch(c)
	{
		case '^':return(5);
		case '*':
		case '/':return(4);
		case '+':
		case '-':return(3);
		default:return(2);
	}
}

void in_to_post(char in[])
{
	int index=0;
	char s,t;
	while(in[index]!='\0')
	{
		s=in[index];
		switch(s)
		{
			case'(':cpush(s);
					break;
			case')':while(stack(ctop)!='(')
					{
						c=cpop();
						eval(c);
					}
					cpop();
					break;
			case'+':
			case'-':
			case'*':
			case'/':
			case'^':while(prec(s)<prec(stack(ctop)))
					{
						cpop();
						eval(c);
					}
					cpush();
					break;
			default:eval(s);
					break;
		}//end of switch
	index++;
	}//end of while
	while(ctop>=0)
	{
		c=pop();
		eval(c);
	}
}


