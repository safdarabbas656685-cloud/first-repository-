	#include<iostream>//header files
	using namespace std;
	int main()//main function
	{
		float num1,num2;//variable decrialition
		char op;//decrear operator
		cout<<"<=======>SIMPLE CALCULATOR<=======>:"<<endl;
		cout<<"Enter your first Number:";
		cin>>num1;//get num1 from user
		cout<<"Enter Operator:";//As print on screen.
		cin>>op;//get operator from user.
		cout<<"Enter your Second Number:";
		cin>>num2;//get num2 from user.
		//cout<<num1 or cout<<num2 print value on screen
		   if(op=='+')
			{//num1 and num2 are add if operator is +
		   	cout<<"sum of"<<num1<<" "<<"and"<<" "<<num2<<" "<<"is:"<<num1+num2<<endl;
		   	
		   }
		   else if(op=='-'){
		   	//num1 and num2 are substric if operator is -
		  	cout<<"Subtric of "<<num1<<" " <<"and"<<" " <<num2<<" "<<"is:"<<num1-num2<<endl;
		   }
		   else if(op=='/'){
		   	//num1 and num2 are divide if operator is /
		   	  	cout<<"Division of "<<num1<<" " <<"and"<<" "<<num2<<" " <<"is:"<<num1/num2<<endl;
		   }
		   else if(op=='*'){
		   //num1 and num2 are multiply if operator is *
     	   cout<<"Multiply of "<<num1<<" " <<"and"<<" "<<num2 <<" "<<"is:"<<num1*num2<<endl;
	      }
	      else{
	      	//if operator are not +,-,/,*,print invalid statement.
	      	cout<<"Invalid operator,try again"<<endl;
	      }
	      cout<<"=======>Written By Safdar Abbas=======>:"<<endl;
	      return 0;/*
	      this progrma is written by safdar abbas.
	      */
	}
