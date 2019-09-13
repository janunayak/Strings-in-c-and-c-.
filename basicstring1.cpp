#include<iostream>
#include<cstring>      //for c-style string function
#include<cctype>        // for character based function

using namespace std;
 
int main()
{
	char first_name[20] {};
	char last_name[20]  {};
	char full_name[20] {};
	char temp[50] {};   //temp is another array of character
	
	std::cout<<"please enter your first name:";
	std::cin>>first_name;
	
	std::cout<<"please enter your lastname:";
	std::cin>>last_name;
	std::cout<<"..............."<<endl;
	std::cout<<"Hello"<<first_name<<"your first name has"<<strlen(first_name)<<"characters"<<endl;
	std::cout<<"and your last name"<<last_name<<"has"<<strlen(last_name)<<"characters"<<endl;
	strcpy(full_name,first_name); //copy firts_name to full_name
	strcat(full_name," ");  //concatenate full_name and a space
	strcat(full_name,last_name);  //concatenate last_name to full_name
	std::cout<<"your full name is"<<full_name<<endl;
	std::cout<<"................."<<endl;
	
	std::cout<<"enter your full name:";
	std::cin>>full_name;
	std::cout<<"your full name is:"<<full_name<<endl;
	
	std::cout<<"enter your full name:";
	std::cin.getline(full_name,50);    // getline function is present in c style string
	std::cout<<"your full name is"<<full_name<<endl;
	
	std::cout<<".............."<<endl;
	
	strcpy(temp,full_name);
	if(strcmp(temp,full_name)==0)
	std::cout<<temp<<"and"<<full_name<<"are the same"<<endl;
	else
	std::cout<<temp<<"and"<<full_name<<"are the different"<<endl;
	std::cout<<"..........."<<endl;
	
	for(size_t i{0};i<strlen(full_name);++i)
	{
		if(isalpha(full_name[i]))
		full_name[i]=toupper(full_name[i]);
	}
	std::cout<<"your full name is:"<<full_name<<endl;
	std::cout<<"..........."<<endl;
	if(strcmp(temp,full_name)==0)
	std::cout<<temp<<"and"<<full_name<<"are the same"<<endl;
	else
	std::cout<<temp<<"and"<<full_name<<"are the different"<<endl;
	
	std::cout<<".........."<<endl;
	std::cout<<"result of comparing "<<temp<<"and"<<full_name<<":"<<strcmp(temp,full_name)<<endl;
	std::cout<<"result of comparing "<<full_name<<"and"<<temp<<":"<<strcmp(full_name,temp)<<endl;
	std::cout<<endl;
	return 0;
	
}
