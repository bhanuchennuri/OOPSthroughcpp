#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class exam{
	public:
		string name,rollno;
		int marks;
		float perc;
		exam(string rollno,string name,int marks,float perc)
		{
		this->rollno=rollno;
		this->name=name;
		this->marks=marks;
		this->perc=perc;
		}

		void display()
		{
			cout<<rollno<<""<<name<<" "<<marks<<" "<<perc<<" "<<endl;
		}
	};
int main()
{
	exam s1("BHANU","22A91A1296",567,98.96);
	s1.display();
	
}
