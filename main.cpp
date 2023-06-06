#include <iostream>
using namespace std;
#include "monster.h"
#include "Thanos.h"

int main() {
  int n;
  cout<<"How many monsters? ";
  cin>>n;

  monster *m=new monster[n]; //make sure they have hp
  cout<<"*Insert story here*\n";
  for(int i=0,j=1;i<n&&j<n;i++,j++){
    m[i].Attack(m[i+1]);
  }
  for(int i=0,j=1;i<n&&j<n;i++,j++){
    m[i].print();
  }
  Thanos T;
    cout<<"*Insert Thanos story here*\n";
  ++T;
      cout<<"*Insert Thanos story here*\n";
  ++T;
  T.snap_finger(m,n);
      cout<<"*Insert Thanos story here*\n";
  ++T;
      cout<<"*Insert Thanos story here*\n";
  ++T;
  T.snap_finger(m,n);
      cout<<"*Insert Thanos story here*\n";
  ++T;
      cout<<"*Insert Thanos story here*\n";
  ++T;
  T.snap_finger(m,n);
  for(int i=0;i<n;i++){
    m[i].print();
  }

  delete [] m;

}
