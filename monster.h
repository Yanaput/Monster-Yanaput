#ifndef monster_h
#define monster_h
#include <iomanip>
#include <iostream>
using namespace std;
class monster{
private:
	string name;
	int hp,potion;
public:
  void Attack(monster &); 
  void print(); // to print all data
  void set_hp(int);
  void set_potion(int);
  monster(string=":-:", int=100,int=0);
  ~monster();
};
void monster:: Attack(monster & b){
  cout<<name<<" ATTACK!!! "<<b.name<<endl;
  if(b.hp>10)
    b.hp-=10;
  else{
    b.hp=0;
    cout<<b.name<<"ded \n";
  }
}
  
monster:: monster(string a, int b,int c){
  name = a;
  hp = b;
  potion = c;
  cout<<"Monster "<<name<<"\n";
  cout<<"Hp : "<<hp<<" potion : "<<potion<<"\n";
  cout<<setw(30)<<setfill('=')<<"\n";
}
monster:: ~monster(){
  cout<<name<<" deconstracted\n";
}

void monster:: print(){
  cout<<"Monster "<<name<<"\n";
  cout<<"Hp : "<<hp<<" potion : "<<potion<<"\n";
  if(hp==0 && potion==0){
    cout<<name<<" ded\n";
  }
  cout<<setw(30)<<setfill('=')<<"\n";
}

void monster:: set_hp(int new_hp){
  hp = new_hp;
}
void monster:: set_potion(int new_potion){
  hp = new_potion;
}
#endif
