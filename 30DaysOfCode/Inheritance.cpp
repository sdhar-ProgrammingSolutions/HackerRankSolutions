#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification)
        {
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson()
        {
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person
{
	private:
		vector<int> testScores;  

        char calculateGrade(int sum)
        {
            char grade;
            if(sum>=90 && sum<=100)
            {
                grade = 'O';
            }
            else if(sum>=80 && sum<90)
            {
                grade = 'E';
            }
            else if(sum>=70 && sum<80)
            {
                grade = 'A';
            }
            else if(sum>=55 && sum<70)
            {
                grade = 'P';
            }
            else if(sum>=40 && sum<55)
            {
                grade = 'D';
            }
            else if(sum<40)
            {
                grade = 'T';
            }

            return grade;
        }
	public:
        Student(string fName, string lName, int id, vector<int> sc) : Person(fName,lName,id), testScores(sc)
        {

        }

        char calculate()
        {
            int sum = 0;
            
            for(auto val : testScores)
            {
                sum+=val;
            }

            char grade = calculateGrade(sum/testScores.size());

            return grade;
        }
};


int main() 
{
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