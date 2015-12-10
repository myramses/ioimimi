#include<iostream>

using namespace std;

class AddDigits{
  public:
    int addNums(int num){
		if(num<10)
			return num;
		else{
			int result = 0;
			result = result + num%10 + addNums(num/10);
			return result;
		}
		
	}

};

int main(){
	AddDigits a;
	cout<< a.addNums(38)<<endl;
	return 0;
}