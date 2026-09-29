#include<iostream>
using namespace std;

class Employee{
    public: 
    string name;
    string dept;
    string company;
    string role;
    double age;

    void IntroduceYourself (){
 cout<<" Name " << " = " <<name <<endl;
 cout<<" dept " << " = " <<dept <<endl;
 cout<<" company " << " = " <<company <<endl;
 cout<<" role " << " = " <<role <<endl;
 cout<<" age " << " = " <<age <<endl;
    }
//constructor

Employee(string Name , string Dept, string Company, string Role, double Age){

    name = Name;
    dept = Dept;
    company = Company;
    role = Role;
    age = Age;
}
};


int main(){
    // Basic understanding

// Employee employee1;
// employee1.name = "Amarnath";
// employee1.dept = "Development";
// employee1.company = "IB Arts";
// employee1.role = "Web Developer";
// employee1.age = 22;
// employee1.IntroduceYourself();

Employee employee1 = Employee("Amarnath", "Development", " IB ARTS", " WEB DEVELOPER", 22);
employee1.IntroduceYourself();
Employee employee2 = Employee("RAJ", "Development", " IB ARTS", " WEB DEVELOPER", 23);
employee2.IntroduceYourself();
Employee employee3 = Employee("Manov", "Development", " PRISM", " WEB DEVELOPER", 22);
employee3.IntroduceYourself();
Employee employee4 = Employee("AAKASH", "Development", " SNU", " WEB DEVELOPER", 20);
employee4.IntroduceYourself();
Employee employee7 = Employee("Ashish", "Development", " IB ARTS", " WEB DEVELOPER", 25);
employee7.IntroduceYourself();
Employee employee5 = Employee("Gopal", "Development", " TCS ", " WEB DEVELOPER", 22);
employee5.IntroduceYourself();

    return 0;
}