#include <iostream>
using namespace std;
class Fraction {
    long long int x, y;
public:
    Fraction(long long int x = 0, long long int y = 1): x(x), y(y) {}
    void show() { 
        cout << x << "/" << y; 
    } 
    void read() {
        char c;
        cin >> x >> c >> y;
    }
  Fraction operator+(Fraction& b){
    this->x =this->x*b.y+b.x*this->y;
    this->y =this->y*b.y;
    return Fraction(x,y);
  }
  
  Fraction operator*(Fraction& b){
    this->x =this->x*b.x;
    this->y =this->y*b.y;
    return Fraction(x,y);
  }
   
  
  Fraction operator-(const Fraction b) {
    this->x = this->x*b.y-b.x*this->y;
    this->y = this->y*b.y;
    return Fraction(x, y);
    }
bool operator==(const Fraction& b) {
        return this->x * b.y == this->y * b.x;
    }
   
 

  Fraction operator/(Fraction b){
        Fraction c;
        c.x = this->x * b.y;
        c.y = this->y * b.x;
        return c;
    }
  friend Fraction operator+(int a, Fraction b);  
  friend Fraction operator*(int a, Fraction b);
  friend Fraction operator/(int a, Fraction& b);
  friend istream& operator>>(istream& input, Fraction& b);
  friend ostream& operator<<(ostream& output, Fraction b);
};
Fraction operator+(int a,Fraction b){
 return Fraction(a*b.y+b.x, b.y);
    }
Fraction operator*(int a,Fraction b){
 return Fraction(a*b.x, b.y);
    }
Fraction operator/(int a,Fraction& b){
 return Fraction(a*b.y, b.x);
    }
istream& operator>>(istream& input, Fraction& b){
    char c;
    input >> b.x >> c >> b.y;
    return input;
}
ostream& operator<<(ostream& output, Fraction b){
    output << b.x << "/" << b.y<< endl;
    return output;
}
int main() {
  Fraction a, b, c, d, f;
  cin >> a >> b >> c >> d;
  f = (d*d)-((3*a)/(b*c));
  cout << f;
  return 0;
  
}
