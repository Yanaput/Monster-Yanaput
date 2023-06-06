#include"monster.h"
#ifndef Thanos_h
#define Thanos_h
#include <iomanip>
#include <iostream>
using namespace std;


class Thanos{
  private:
    int hp,stone;
    string name = "Thanos";
  public:
    Thanos(int =0,int =1000); 
    ~Thanos();
    void snap_finger(monster[],int);
    void operator++();
};
Thanos:: Thanos(int curr_stone,int curr_hp){
  stone = curr_stone;
  hp = curr_hp;
  cout<<name<<"\nHp : "<<hp<<" obtained "<<stone<<" stone\n";
  cout<<setw(30)<<setfill('=')<<"\n";
}
Thanos:: ~Thanos(){
  cout<<name<<" deconstracted\n";
}

void Thanos:: operator++(){
  stone ++;
  cout<<name<<"\n"<<" get a stone"<<"\nHp : "<<hp<<" obtained "<<stone<<" stone(s)\n";
  cout<<setw(30)<<setfill('!')<<"\n";
}

void Thanos:: snap_finger(monster m[], int monster_num){
  if(stone==6){
    cout<<"\n"<<setw(30)<<setfill('*')<<"\n";
    cout<<setw(16)<<setfill(' ')<<"snaped\n";
    cout<<setw(30)<<setfill('*')<<"\n\n";
    for(int i=0 ;i<monster_num;i+=2){
      m[i].set_hp(0);
      m[i].set_potion(0);
    }
  }
  else{
    cout<<"(*Thano snapped) Nahhhhhhh\n";
  }
};

#endif
