// 정수를 입력받아서 첫 번째, 두 번째 세 번째 자릿수를 출력

#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "정수를 입력하세요: ";
  cin >> num;

  cout << "첫 번째 자릿수: " << (num % 1000) / 100 << endl;
  cout << "두 번째 자릿수: " << (num % 100) / 10 << endl;
  cout << "세 번째 자릿수: " << num % 10 << endl;
  
  return 0;
}