<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

class Student {

      public:
      string name;
      int age, rollNo;
      string grade;   

};

int main() {

      Student *S = new Student; 
      (*S).name = "John Doe";
      (*S).age = 10;
      (*S).rollNo = 9003;
      (*S).grade = "A+";

      cout<<S->name<<" ";
      cout<<S->age<<" ";
      cout<<S->rollNo<<" ";
      cout<<S->grade<<" ";
      

=======
#include<bits/stdc++.h>
using namespace std;

class Student {

      public:
      string name;
      int age, rollNo;
      string grade;   

};

int main() {

      Student *S = new Student; 
      (*S).name = "John Doe";
      (*S).age = 10;
      (*S).rollNo = 9003;
      (*S).grade = "A+";

      cout<<S->name<<" ";
      cout<<S->age<<" ";
      cout<<S->rollNo<<" ";
      cout<<S->grade<<" ";
      

>>>>>>> 4079a21668804dbfe4d172d5875a755eb8be9820
}