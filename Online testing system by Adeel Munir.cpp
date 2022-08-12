#include<iostream>
#include<string>
#include<stdlib.h>                                          // used for color of console.
using namespace std;
int guess;
int total;
class question
{
	private:
		string question_text;
		string answer_1;
		string answer_2;
		string answer_3;
		string answer_4;
		int correct_answer;
		int question_score;
		
		public:
			void setvalues(string,string,string,string,string,int ca,int pa);
			void askquestion();
};
int main()
{
            system("color B0");
         	cout<<"\t\t  ************************************"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
        	cout<<"\t\t* * WELCOME TO Online Testing Srvice*  *"<<endl;
        	cout<<"\t\t*--------------------------------------*"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
         	cout<<"\t\t*        *MADE BY Adeel Munir*         *"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
        	cout<<"\t\t  ************************************"<<endl;
        	cout<<endl;
        	cout<<"press enter to start the quiz"<<endl;
        	cin.get();
    string name;
    int age;
    cout<<"\tyour name :"<<endl;
    cin>>name;
    cout<<endl;
    cout<<"\tyour age :"<<endl;
    cin>>age;
    cout<<endl;
    string Response;
    cout<<"\t ready for quiz"<<name<<"? yes/no"<<endl;
    cin>>Response;
    
    if(Response=="yes"){
    	cout<<endl;
    	cout<<"\tok, GOOD LUCK"<<endl;
    	cout<<endl;
	}
	else{
		cout<<"\t ok, GOOD BYE"<<endl;
		return 0;
	}
	question Q1;
	question Q2;
	question Q3;
	question Q4;
	question Q5;
	Q1.setvalues("\t12+12 =?",
	               "54",
				   "56",
				   "24",
				   "64",
				     3,
					 20);
    Q2.setvalues("\t3+34 =?",
	               "544",
				   "560",
				   "23",
				   "37",
				     4,
					 20);
    Q3.setvalues("\t2/2 =?",
	               "1",
				   "2",
				   "4",
				   "6",
				     1,
					 20);
    Q4.setvalues("\t10*2 =?",
	               "50",
				   "60",
				   "20",
				   "30",
				     3,
					 20);
	Q5.setvalues("\t33-32 =?",
	               "-1",
				   "1",
				   "3",
				   "5",
				     2,
					 20);
	Q1.askquestion();
	Q2.askquestion();
	Q3.askquestion();
	Q4.askquestion();
	Q5.askquestion();
	cout<<"\t total score = "<<total<< "out of 100" <<endl;
	cout<<endl;
	if (total>=70){
		cout<<"\t\tYOU PASSED!!"<<endl;
		cout<<endl;
		cout<<"\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		cout<<"\t\t$                          $"<<endl;
		cout<<"\t\t$    *CONGRATULATION*      $"<<endl;
		cout<<"\t\t$                          $"<<endl;
		cout<<"\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	}
	else {
		cout<<"\t SORRY , YOU FAILED!! "<<endl;
		cout<<endl;
		cout<<"\ttry next time"<<endl;
		}
	}
void question::setvalues(string q,string a1,string a2,string a3,string a4,int ca,int pa)
{
	question_text=q;
	answer_1=a1;
	answer_2=a2;
	answer_3=a3;
	answer_4=a4;
	correct_answer=ca;
	question_score=pa;
	}
void question::askquestion() {
    cout<<endl;
	cout<<question_text<<endl;
	cout<<"\t1."<<answer_1<<endl;
	cout<<"\t2."<<answer_2<<endl;
	cout<<"\t3."<<answer_3<<endl;
	cout<<"\t4."<<answer_4<<endl;
	cout<<endl;
	cout<<"\tyour answer ?"<<endl;
	cin>>guess;
	if (guess==correct_answer){
		cout<<endl;
		cout<<"\tyou are correct " <<endl;
		total=total+question_score;
		cout<<" \t score "<<question_score<< " out of " <<question_score<<""<<endl;
		cout<<endl;
	}
	else {
		cout<<"\t you are wrong "<<endl;
		cout<<"\t score:0 "<<question_score<<"  "<<endl;
		cout<<"\t correct answer is "<<correct_answer<<"  "<<endl;
		cout<<endl;
	}
	}
			

