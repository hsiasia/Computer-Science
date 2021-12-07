#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
    Student(string Id, string Name, int ChineseScore, int MathScore, int ScienceScore, int EnglishScore);
    string getId();
    string getName();
    int getChineseScore();
    int getMathScore();
    int getScienceScore();
    int getEnglishScore();
    void setChineseScore(int);
    void setMathScore(int);
    void setScienceScore(int);
    void setEnglishScore(int);
    float getAverage();
    void setAverage();
private:
    string Id;
    string Name;
    int ChineseScore;
    int MathScore;
    int ScienceScore;
    int EnglishScore;
    float Average;
};
Student::Student(string id, string name, int chineseScore, int mathScore, int scienceScore, int englishScore)
{
    Id = id;
    Name = name;
    ChineseScore = chineseScore;
    MathScore = mathScore;
    ScienceScore = scienceScore;
    EnglishScore = englishScore;
    setAverage();
}
string Student::getId()
{
    return Id;
}
string Student::getName()
{
    return Name;
}
int Student::getChineseScore()
{
    return ChineseScore;
}
int Student::getMathScore()
{
    return MathScore;
}
int Student::getScienceScore()
{
    return ScienceScore;
}
int Student::getEnglishScore()
{
    return EnglishScore;
}
void Student::setChineseScore(int Score)
{
    ChineseScore = Score;
    setAverage();
}
void Student::setMathScore(int Score)
{
    MathScore = Score;
    setAverage();
}
void Student::setScienceScore(int Score)
{
    ScienceScore = Score;
    setAverage();
}
void Student::setEnglishScore(int Score)
{
    EnglishScore = Score;
    setAverage();
}
float Student::getAverage()
{
    return Average;
}
void Student::setAverage()
{
    Average = (float)(getChineseScore()+getMathScore()+getScienceScore()+getEnglishScore())/4;
}


class StudentList{
public:
    StudentList();
    void addStudent(Student);
    void ChangeScore(string, int, int);
    void Printall();
    void Delete(string);
private:
    vector<Student> List;
};
StudentList::StudentList(){}
void StudentList::addStudent(Student NewStudent){
    if(List.size()==0)
        List.push_back(NewStudent);
    else{
        for(int x=0;x<List.size();x++){
            if(NewStudent.getId()<List[x].getId()){
                List.insert(List.begin()+x,NewStudent);
                return;
            }
        }
        List.push_back(NewStudent);
    }
}
void StudentList::ChangeScore(string id, int subject, int score){
    for(int x=0;x<List.size();x++){
        if(List[x].getId()==id){
            switch(subject){
            case 1:
                List[x].setChineseScore(score);
                break;
            case 2:
                List[x].setMathScore(score);
                break;
            case 3:
                List[x].setScienceScore(score);
                break;
            case 4:
                List[x].setEnglishScore(score);
                break;
            default:
                break;
            }
        }
    }
}
void StudentList::Printall(){
    for(int x=0;x<List.size();x++){
        cout<<List[x].getId()<<" "<<List[x].getName()<<" "<<List[x].getChineseScore()<<" "<<List[x].getMathScore()<<" "<<List[x].getScienceScore()<<" "<<List[x].getEnglishScore()<<" "<< fixed << setprecision(2) << List[x].getAverage()<<endl;
    }
}
void StudentList::Delete(string id){
    for(int x=0;x<List.size();x++){
        if(List[x].getId()==id){
            List.erase(List.begin()+x);
        }
    }
}

StudentList myList;

void Insert(){
    cout<<"Please enter student id/name/scores(Chinese/Math/Science/English"<<endl;
    string Id, Name;
    int ChineseScore, MathScore, ScienceScore, EnglishScore;


    cin>>Id>>Name>>ChineseScore>>MathScore>>ScienceScore>>EnglishScore;
    Student NewStudent(Id, Name, ChineseScore, MathScore, ScienceScore, EnglishScore);
    myList.addStudent(NewStudent);
}

int main()
{
    int x=1;
    int op;
    string id;
    int subject, score;
    while(x){
        cout<<"(1) Insert (2) Change score (3) Print all (4) Delete (5) Exit"<<endl;
        cin>>op;
        switch(op){
        case 1:
            Insert();
            break;
        case 2:
            cout<<"Please enter student id"<<endl;
            cin>>id;
            cout<<"Which subject? (1) Chinese (2) Math (3) Science (4) English"<<endl;
            cin>>subject;
            cout<<"Please enter new score"<<endl;
            cin>>score;
            myList.ChangeScore(id, subject, score);
            break;
        case 3:
            myList.Printall();
            break;
        case 4:
            cout<<"Please enter student id"<<endl;
            cin>>id;
            myList.Delete(id);
            break;
        default:
            x=0;
            break;
        }
    }
    return 0;
}
