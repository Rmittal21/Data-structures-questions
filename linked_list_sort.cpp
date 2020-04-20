#include<iostream>
using namespace std;

struct node
{
	int val;
	struct node *ptr;
} *first;

typedef struct node nd;

void sort()
{
	
	nd *f,*s,*temp;
	f=first;
	temp=first;
	for(f=first;f-> ptr!=NULL;f=f->ptr)
	{
		for(s=f->ptr;s!=NULL;s=s->ptr)
		{
			if(f->val>s->val)
			{
				temp=f->val;
				f->val=s->val;
				s->ptr=temp;
			}
		}
	}
}

int main()
{
	first=NULL;
	sort();
	return 0;
}
