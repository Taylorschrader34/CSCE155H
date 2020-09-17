#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	
	double m, d, u;
	
	scanf("%lf", &m);
	scanf("%lf", &d);
	scanf("%lf", &u);
		
	printf("%lf days used, %lf days remaining\nAverage daily use: %lf min/day\n", d, 30 - d, u/d);
	
	if(u/d >m/30){
	  printf("You are EXCEEDING your average daily use (%lf min/day),\ncontinuing this high usage, you'll exceed your minute plan by %lf minutes.\nTo stay below your minute plan, use no more than %lf min/day.", m/30, ((u/d)*30)-m, (m-u)/(30-d));
	}else{
	  printf("You are UNDER your average daily use (%lf min/day),\nYou can safely use %lf min/day and still stay within your minute plan.", m/30, (m-u)/(30-d));
	}
	
		return 0;
}