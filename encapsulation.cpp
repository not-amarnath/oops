#include<iostream>
using namespace std;
class Employee {

private:
    string name;
    string dept;
    string company;
    string role;
    double age;

public:

    // Setters
    void setName(string Name) {
        name = Name;
    }

    void setDept(string Dept) {
        dept = Dept;
    }

    void setCompany(string Company) {
        company = Company;
    }

    void setRole(string Role) {
        role = Role;
    }

    void setAge(double Age) {
        age = Age;
    }

    // Getters
    string getName() {
        return name;
    }

    string getDept() {
        return dept;
    }

    string getCompany() {
        return company;
    }

    string getRole() {
        return role;
    }

    double getAge() {
        return age;
    }

    void IntroduceYourself() {
        cout << "Name = " << name << endl;
        cout << "dept = " << dept << endl;
        cout << "company = " << company << endl;
        cout << "role = " << role << endl;
        cout << "age = " << age << endl;
    }

    // Constructor
    Employee(string Name, string Dept, string Company, string Role, double Age) {
        name = Name;
        dept = Dept;
        company = Company;
        role = Role;
        age = Age;
    }
};


int main(){
   Employee employee1 = Employee("Amarnath", "Development", " IB ARTS", " WEB DEVELOPER", 22);
employee1.IntroduceYourself();
cout<<employee1.getName();
    return 0;
}