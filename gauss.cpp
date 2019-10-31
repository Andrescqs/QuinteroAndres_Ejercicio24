#include <iostream>
#include <cmath>
#include <random>




srand48(8);


int main(){
	
	float g(float x, float sg){
	
	exp(-(x*x)/(2.0*sg*sg))/sqrt(2.0*3.1415926*sg*sg);
	}
	
	
	float gauss(float sg, int N, float dlt){
	
	for(i=0; i < N; i++){
		float r;
		r = drand48();
		float p;
		p = r + (drand48()-0.5)*dlt;
		float alpha;
		alpha = drand48();
		if(g(alpha, 1) < g(p, 1)){
			std::cout << r << " " << p << std::endl;
		}
		
		else(){
			std::cout << r << " " << r << std::endl;
			}
		
		}
	}


	gauss(1, 10000, 1);
	
	
	return 0;
}





