#include<iostream>
using namespace std;

class Man
{
  public:
	  Man();
	  virtual ~Man();
	  void setage(int age);
	  int getage(void);
  private:
	  int age;

};

class worker:public Man
{
  public:
	  worker();
	  virtual ~worker();
  

};
