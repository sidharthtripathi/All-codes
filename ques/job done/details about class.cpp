#include<iostream>
using namespace std;
class students{
public:
 int roll;
 string name;
 int chem;
 int phy;
 int math;
 void get_data(){
 cout<<"Name: ";
 cin>>name;
 cout<<"Roll NO.: ";
 cin>>roll;
  cout<<"Phy: ";
 cin>>phy;
  cout<<"Math: ";
 cin>>math;
  cout<<"Chem: ";
 cin>>chem;

 }
 void show_data(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No. : "<<roll<<endl;
    cout<<"Math: "<<math<<endl;
    cout<<"Phy: "<<phy<<endl;
    cout<<"Chem: "<<chem<<endl;
    float grade = (math+chem+phy)/3;
    cout<<"Grade: "<<grade<<endl;

}
};
int main(){
    cout<<"How many students in the class: ";
    int n ;
    cin>>n;
    students class_sci[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"============"<<endl;
        cout<<i+1<<"."<<endl;
        class_sci[i].get_data();
    }
    cout<<endl<<"Loading data"<<endl;
    for(int i = 0 ; i<n ; i++){
            cout<<"=================="<<endl;
        class_sci[i].show_data();
    }





}