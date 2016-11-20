/*
Student Name : KABIR SHRESTHA
Subject : Programming Fundamental
Lab No. : 15
Program : Write a Menu base program.
Date : 2016-11-20
*/
#include<stdio.h>
#include<stdlib.h>
	int main(){
	int length,breadth,area,perimeter,trapezium,height;
	char a;
	
	printf("\n\t*****************************************");
	printf("\n\t*\t 1. Area of Rectangle\t\t*");
	printf("\n\t*\t 2. Perimeter of rectangle\t*");
	printf("\n\t*\t 3. Area of Trapezium\t\t*");
	printf("\n\t*\t 4. Exit\t\t\t*");
	printf("\n\t*****************************************\n");
	
	printf("\n\tEnter a number : ");
	scanf("%s",&a);
	
	switch (a){
	
	case '1' :
		printf("\nEnter the length : ");
		scanf("%d",&length);
		
		printf("\nEnter the breadth : ");
		scanf("%d",&breadth);
		
		area=length*breadth;
		
		printf("\nThe Area of the Rectangle is : %d",area);
		
		break;
		
		case'2' :
		printf("\nEnter the length : ");
		scanf("%d",&length);
		
		printf("\nEnter the breadth : ");
		scanf("%d",&breadth);
		
		perimeter=2*(length+breadth);
		
		printf("\nThe Permeter of Rectangle is :%d",perimeter);
		
		break;
		
		case '3' :
		printf("\nEnter the length : ");
		scanf("%d",&length);
		
		printf("\nEnter the breadth : ");
		scanf("%d",&breadth);
		
		printf("\nEnter the height : ");
		scanf("%d",&height);
		
		trapezium=0.5*(length+breadth)*height;
		
		printf("\nThe Area of the Trapezium is :%d",trapezium);
		
		break;
		
		case '4' :
		exit(0);
		default:
		printf("\nPLEASE VALID INPUT");
		
		}
		return 0;
	}	
	
	
	 	
