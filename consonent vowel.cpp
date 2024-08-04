#include<iostream>
using namespace std;

class A
{
	char ch;
	public:
		void input()
		{
			cout<<"enter the char";
			cin>>ch;
		}
		void show()
		{
			if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'|| ch=='u')
			{
				cout<<" vowel";
			}
			else
			{
				cout<<"consonent";
			}
		}
};
int main()
{
A obj;
obj.input();
obj.show();	
return 0;
}
