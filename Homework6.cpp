#include <iostream>
using namespace std;
int main()
{ 
		char grade;
		cout<<"Enter grade(A-E) : ";
		cin>>grade;
		switch(grade)
		{
			case'A':cout<<"Your Score 80-100 Points"<<endl;
			break;
			case'B':cout<<"Your Score 70-79 Points"<<endl;
			break;
			case'C':cout<<"Your Score 60-69 Points"<<endl;
			break;
			case'D':cout<<"Your Score 50-59 Points"<<endl;
			break;
			case'F':cout<<"Your Score <=49 Points"<<endl;
			break;
			default:cout<<"Please Enter Character (A-F) Only,Thank you"<<endl;		
		}
	return 0;
}