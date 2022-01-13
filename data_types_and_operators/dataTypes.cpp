#include <iostream>
using namespace std;
/*Data types
* 1.Structure
*2.Union
*3.enums
*/
//structure
struct book{
    string name;
    int price;
}book1,book2;
//union
union person{
    float name;
    int age;
};
//enums
enum names{abc, xyz, lmn};
enum colour{red = 4, blue = 6, yellow};
enum{on, off};    //anonymous enums
int main(){
    cout<<"Structure"<<endl;
    book1.name = "asd";
    book1.price = 20;
    cout<<book1.price<<" "<<book1.name<<endl;
    cout<<sizeof(book1)<<endl;  //sum of all member susing word boundary method
    //*****************************************************
    cout<<"Union"<<endl;
    person person1;
    person1.age = 20;
    cout<<"Address of members of union are same"<<&person1.age<<" "<<&person1.name;
    cout<<sizeof(person1)<<endl;  //size is equal to size of largest datatype
    //******************************************************
    cout<<"enum"<<endl;
    cout<<"lmn in names(enum) is"<<lmn<<endl;
    cout<<"blue in colour is"<<blue<<" And yellow is "<<yellow<<endl;
    cout<<"Use of enum:-"<<endl;
    cout<<"ON:-"<<on<<"\nOFF:-"<<off<<endl; 
    return 0;
}