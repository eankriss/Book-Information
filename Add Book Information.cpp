#include <iostream>
#include <string.h>
using namespace std;

class book
{
	private:
		char booknum[100];
		char booktitl[100];
		char bookauth[100];
		char bookpric[100];
		
	public:
		void addbook ();
		void dispbook ();
		void searcbook ();
		
}b[100];

int hold;

void book::addbook()
{
	cout<<"Enter Book Number: ";
	cin>>b[hold].booknum;
	
	cin.ignore();
	
	cout<<"Enter Book Title: ";
	gets(b[hold].booktitl);
	
	cout<<"Enter Book Author: ";
	gets(b[hold].bookauth);
	
	cout<<"Enter Book Price: ";
	cin>>b[hold].bookpric;
	cout<<endl;
	
	hold++;
}

void book::dispbook()
{
	cout<<"Display Book Information"<<endl;
	
	for (int i = 0; i < hold; i++)
	{
		cout<<"*******************************"<<endl;
		cout<<"Book No.: "<<b[i].booknum<<endl;
		cout<<"Book Title: "<<b[i].booktitl<<endl;
		cout<<"Book Author: "<<b[i].bookauth<<endl;
		cout<<"Book Price: P"<<b[i].bookpric<<endl<<endl;
	}
}

void book::searcbook()
{
	char z[100];
	int cnt = 0;
	
	cout<<"Enter Book ID: ";
	cin>>z;
	cout<<endl;
	
	cin.ignore();
	
	for(int i = 0; i < hold; i++)
	{
		if(strcmp(z,b[i].booknum) == 0)
		{
			cnt++;
			
			cout<<endl;
			cout<<"Book No.: "<<b[i].booknum<<endl;
			cout<<"Book Title: "<<b[i].booktitl<<endl;
			cout<<"Book Author: "<<b[i].bookauth<<endl;
			cout<<"Book Price: P"<<b[i].bookpric<<endl<<endl;
		}
		
		else
		{
			cout<<"Book not found!"<<endl<<endl;
		}
	}
	
}

int main ()
{
	cout<<endl<<"\t\t\t\tBooks Information"<<endl<<endl;
	cout<<"*******************************************************************************"<<endl;
	
	while (1)
	{
		int x;
		
		cout<<endl<<"\t\t\t\tPress the number below"<<endl;
		cout<<"[1] Add Book"<<endl;
		cout<<"[2] Display Book"<<endl;
		cout<<"[3] Search Book"<<endl;
		
		cout<<"Enter your choice: ";
		cin>>x;
		cout<<endl;
		
		switch (x)
		{
			case 1:
				b[hold].addbook();
				break;

			case 2:
				b[hold].dispbook();
				break;	
				
			case 3:
				b[hold].searcbook();
				break;	
		}
	}
	
return 0;	
}
