#include<iostream>
#include<conio.h>
#include<string.h>

int main()
{
 char str[100], t[100];
 int i, j,data[100],l;
 std::cout<<"Please Enter Any phrase : ";
 gets(str);
 l=strlen(str);
 for(i=0; i<l; i++)
	{
		if(str[i]==' ')
		{
			for(j=i; j<l; j++)
			{
				str[j]=str[j+1];
				data[j]=data[j+1];
			}
		l--;
		}
	
	}
l=strlen(str);
	for(i=0; i<l; i++)
	{
		data[i]=0;
		
		for(j=0; j<l; j++)
		{
			if(str[i]==str[j])
			{
				
				data[i]=data[i]+1;
			}
		}
	}
	i=0;
	j=0;
	while(i<l){
		if(data[i]>1)
		{
			std::cout<<"\n " << str[i]<< " : "<< data[i];
		}
		i=i+1;
		j=j+1;
	}
	//for(i=0; i<l; i++)
	//	{
	//		std::cout<<"\n " << str[i]<< " : "<< data[i];
	//	}
	getch();
}
