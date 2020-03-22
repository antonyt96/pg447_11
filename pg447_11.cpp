//only missing input validation 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Create student object to hold values.
struct student{
	
	string name;
	double grades[4]; //4 is number of tests
	double totalScore;
	double averageScore;
	
};
int main(){
	
	char letterGrades[]={'A','B','C','D','F'};
	
	student scholars[5]; //array of multiple objects. Size 5 for number of students

	
	//Loop to get data of students needed for calculations 
	for (int a =0; a<5; a++){
		
		cout<<"Enter your name "<<a+1<<":";
		cin>>scholars[a].name;
		
	
		//nested loop to get 4 test scores for all students
		for(int i=0 ;i<4 ;i++){
			
		
			cout<<"Enter test score "<<i+1<<":";
			cin>>scholars[a].grades[i];
			
		}
		
	}
	
	// loop through students and perform calculations 
	for (int b =0; b<5; b++){
		
			//looping to add total score per student
			for(int i=0 ;i<4 ;i++){
			scholars[b].totalScore+=scholars[b].grades[i];
			}
		
		//getting average score per student
		scholars[b].averageScore= scholars[b].totalScore/4;
	}
	
	//Loop through output. Depending on score determines letter grade
	
	
	cout<<"-------------------------------"<<endl; // for looks on output console
	
	
	
	// loop and output info. conditionals determine letter grade displayed.
	for (int c =0; c<5; c++){

		if (scholars[c].averageScore>89 && scholars[c].averageScore<100){
		
			cout<<scholars[c].name<<" "<<setw(6)<<scholars[c].averageScore<<" "<<letterGrades[0]<<endl;	
		}
		else if (scholars[c].averageScore>79 && scholars[c].averageScore<90){
			
			cout<<scholars[c].name<<" "<<setw(6)<<scholars[c].averageScore<<" "<<letterGrades[1]<<endl;
		}
		else if (scholars[c].averageScore>69 && scholars[c].averageScore<80){
			
			cout<<scholars[c].name<<" "<<setw(6)<<scholars[c].averageScore<<" "<<letterGrades[2]<<endl;
		}
		else if (scholars[c].averageScore>59 && scholars[c].averageScore<70){
			
			cout<<scholars[c].name<<" "<<setw(6)<<scholars[c].averageScore<<" "<<letterGrades[3]<<endl;
		}
		else if (scholars[c].averageScore>0 && scholars[c].averageScore<60){
			
			cout<<scholars[c].name<<" "<<setw(6)<<scholars[c].averageScore<<" "<<letterGrades[4]<<endl;
		}
		else{
			
			cout<<"Critical ERROR"<<endl;
		}
	}
	
	
			
			
	return 0;
}
