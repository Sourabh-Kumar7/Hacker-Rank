#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
    private:
        vector<int> testScores;  
        float a =0.0;
    public:
    Student(string firstName,string lastName,int identification,vector<int> test_Scores)
    : Person(firstName,lastName,identification),testScores(test_Scores)
    {

    }
    char calculate()
    {
        
        for(auto i: testScores)
        {
            a+=i;
        }
        a = a/testScores.size();
        char c;
        if(a<40.00)c='T';
        if(a>=40.00 && a<55.00)c='D';
        if(a>=55.00 && a<70.00)c='P';
        if(a>=70.00 && a<80.00)c='A';
        if(a>=80.00 && a<90.00)c='E';
        if(a>=90.00 && a<=100.00)c='O';

        return c;
    }

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
