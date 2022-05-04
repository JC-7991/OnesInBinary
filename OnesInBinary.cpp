#include <iostream>

std::string toBinary(int n){
  
  std::string r;

  while(n != 0){
    r = (n % 2 == 0 ? "0" : "1") + r;
    n /= 2;
  }
  
  return r;

}

int consOnes(std::string r, int size){

  int max = 0;
  int p = 0;

  for(int i = 0; i < size; i++){
    
    if(r.substr(i, 1) == "1"){
      p++;

      if(p > max){
        max = p;
      }

    }

    else{
      p = 0;
    }

  }
  
  return max;

} 

int main(){

  int n;
  std::cin >> n;
  
  std::string r = toBinary(n);
  std::cout << consOnes(r, r.length());
    
  return 0;

}