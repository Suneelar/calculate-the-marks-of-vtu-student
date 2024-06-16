#include<iostream>
using namespace std;
class findmarks{
    float IA1,IA2,IA3,quiz_marks,assMarks,finalIaMarks,External_marks;
    float percentage,IAmarks_total,External_total,marks,total_semmarks;
    string grade;
    public:
void getMarks();
void CalcMarks();
void calgrade();
void showgrade();
}obj;
int main(){
    obj.getMarks();
    obj.CalcMarks();
    obj.calgrade();
    obj.showgrade();

 cout<<"pass :)"   ;
       return 0;
}
// calculation of marks of both external and internal of vtu students
void findmarks ::getMarks(){
    cout<<"\nEnter the internal 1 marks out of (20):";
    cin>>IA1;
    cout<<"\nEnter the internal 2 marks out of (20):";
    cin>>IA2;
    cout<<"\nEnter the internal 3 marks out of (20):";
    cin>>IA3;
    cout<<"\nEnter the quiz_marks marks out of (20):";
    cin>>quiz_marks;
    cout<<"\nEnter the assigment  marks out of (20):";
    cin>>assMarks;
    cout<<"\nEnterthe marks of final term exam out of  (100):";
    cin>>External_total;
    cout<<endl;
}
void findmarks ::CalcMarks(){
finalIaMarks=IA1+IA2+IA3+quiz_marks+assMarks;
IAmarks_total=finalIaMarks/2;
External_marks=External_total/2;
total_semmarks=IAmarks_total+External_marks;
}
void findmarks ::calgrade(){
    if(total_semmarks >= 90.0)
        grade='O';
    if(total_semmarks < 90.0)
        grade='S';
        if(total_semmarks <80.0 && total_semmarks >=70.0)
            grade='A';
        if(total_semmarks <70.0 && total_semmarks >=60.0)
            grade='B';
        if(total_semmarks <60.0 && total_semmarks >=50.0)
            grade='C';
        if(total_semmarks <50.0 && total_semmarks >=45.0)
            grade='D';
        if(total_semmarks <45.0 && total_semmarks >=40.0)
            grade='E';
        if(total_semmarks <40.0)
            grade='F';
}
void findmarks ::showgrade(){
    cout<<"\n\n";
    cout<<"IA marks total out of 50::"<<IAmarks_total<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"External marks total out of 100::"<<External_marks<<endl;
    cout<<"---------------------------"<<endl;
   cout<<"total sem marks both external & internal marks::" <<total_semmarks<<endl;
    cout<<"The obtained grade:"<<grade;
    cout<<endl;
}