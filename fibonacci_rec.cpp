
#include <iostream>

int fibonacci (int x);

int main () {

	for (int i  = 0; i < 12; ++i)
	{
		std::cout<<fibonacci(i)<<std::endl;

	}

	return 0;
};

int fibonacci(int x){
	if (x==0){
		return 0;
	}
	if (x==1)
	{ return 1;
	}
	else
		return fibonacci(x-2)+fibonacci(x-1);

}
