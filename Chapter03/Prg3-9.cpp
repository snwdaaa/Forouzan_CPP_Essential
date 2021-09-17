// 부가 작용이 없는 암묵적 자료형 변환

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // 선언
  int x = 123;
  long y = 140;
  double z = 114.56;

  // 표현식 x + y의 자료형과 값 확인
  // int + long -> x가 long으로 자료형 변경
  cout << "x + y의 자료형: " << typeid(x+y).name() << endl;
  cout << "x + y의 값: " << x+y << endl;

  // 표현식 x + y + z의 자료형과 값 확인
  // x + y + z -> x와 y가 double로 자료형 변경
  cout << "x + y + z의 자료형: " << typeid(x+y+z).name() << endl;
  cout << "x + y + z의 값: " << x+y+z << endl;

  return 0;
}