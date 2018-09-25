#include <stdio.h>

main()
{
	float raio, perimetro;
	double pi=3.1415927, area;
	
	printf("Introduza o raio da circunferência: ");
	scanf("%f",&raio);
	
	perimetro=2*pi*raio;
	area=pi*raio*raio;
	
	printf("O perimet da circunferência é %f e a sua área é %f.\n",perimetro,area);
	
}
