#include <string>
#include <vector>
using namespace std;


class Activity {
     public:
          string name;  // name of the activity e.g. "Workshop 1"
          vector<string> problems;
          vector<string> solution;
};

class Student {
    private:
        string name;
        string id;
        

    public: 
        vector<Activity> myActivities;
        Student(string name, string id);
        string getName();
        string getID();
        void doActivity() {
             // for each problem in each of myActivities
             for (int n =0 ; n < myActivities.size(); n++){
             	myActivities.at(n).solution.push_back("Solution problem n");
             }
        }
           
};

class Lecturer {
    private:
        string id;
        vector<Student> classs;

    public:
        
        Lecturer(string id);
        string getName();
        string getID();
        void runActivity() {
            Activity nextActivity;
            nextActivity.problems.push_back("question1......");
            nextActivity.problems.push_back("question2......");
            nextActivity.problems.push_back("question3......");

            // for each student, s,  in the class do the following
            for (int i = 0; i < classs.size(); i++){
            	classs.at(i).myActivities.push_back(nextActivity);
            	classs.at(i).doActivity();
            }
            /*
                s.myActivities.push_back(nextActivity);
                s.doActivity();

                // check the solutions by accessing student.myActivities.solutions
                // remove the activities from the student's list
                s.myActivities.clear();
                */
        }
};     


int main(void) {
    string lecturerName = "Cheryl";
    Lecturer addsLecturer("a123456");
    Student addsStudent1("Jasmyn", "a55667788");
    //addsLecturer.classs.push_back(addsStudent1);
    // create rest of Students and add to Lecturer's class

    addsLecturer.runActivity();
}
