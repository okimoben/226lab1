//Q1
#include <iostream>
using namespace std;

int main(){
    string name;
    string id;

    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name << ".\n",

    cout << "What is your Student ID?\n";
    cin >> id;
    cout << "Your ID is " << id << ".\n";


//Q2

    double var1, var2, sum, diff, prod;

    cout << "Enter var1 value:\n";
    cin >> var1;
    cout << "Enter var2 value:\n";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1: " << var1 << "\nvar2: " << var2 << endl;
    cout << "sum: " << sum << endl;
    cout << "diff: " << diff << endl;
    cout << "prod: " << prod << endl;



//Q3

    string aname;
    double lab, midterm, final, last_score;

    cout << "enter student name: ";
    cin >> aname;
    cout << "enter lab grade: ";
    cin >> lab;
    cout << "enter midterm grade: ";
    cin >> midterm;
    cout << "enter final grade: ";
    cin >>
    final;

    last_score = (lab*0.25)+(midterm*0.35)+(final*0.40);

    cout << "Name: " << aname << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Final: " << final << endl;



//Q4

    cout << "\n*","\n**","\n***","\n**","\n*";

}
