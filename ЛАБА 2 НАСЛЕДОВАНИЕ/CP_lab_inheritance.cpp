#include <string>
#include <iostream>
using namespace std;

class animal {
public:
  string name;
  int hp,pos_x,pos_y;
void move(int dx, int dy){
    pos_x+=dx;
    pos_y+=dy;
    std::cout << pos_x << " " << pos_y << "\n";
}
};
 
class insect: public animal {
public:
  int legs_number;
};
 
class bee: public insect {
public:
  bool sting;
  bee(int hp_in, int pos_x_in, int pos_y_in){
    legs_number = 6;
    sting = true;
    hp = hp_in;
    pos_x = pos_x_in;
    pos_y = pos_y_in;
  }
void to_sting(){
    if (sting) {
      std::cout << "bzhh!" << std::endl;
      sting = false;
    } else {
      std::cout << "there is no sting" << std::endl;
    }
}
};

int main(){


  bee anya(10,5,2);
  anya.to_sting();
  anya.to_sting();
  anya.move(5,5);
  return 0;
}
  