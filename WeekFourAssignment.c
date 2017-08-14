
#include "stdafx.h"
#include "stdio.h"


void main()
{
		int Triangle = 1;
		int Square = 2;
		int Rectangle = 3;
		int Parallelogram= 4;
		int Trapezoid = 5;
		int Circle = 6;
		int Ellipse = 7;
		int Sector = 8;
		int Choice;

		printf("Area Calculator \nEnter Choice:\n");
		
		printf("1 <Triangle>\n");
		printf("2 <Square>\n");
		printf("3 <Rectangle>\n");
		printf("4 <Parallelogram>\n");
		printf("5 <Trapezoid>\n");
		printf("6 <Circle>\n");
		printf("7 <Ellipse>\n");
		printf("8 <Sector>\n");
		
		printf("Choice: ");
		scanf_s("%d", &Choice);
		
		if (Choice == 1) {
			double triangleBaseLength;
			double triangleHeight;
			double triangleArea;
			
			printf("Enter length of base: ");
			scanf_s("%lf", &triangleBaseLength);
			printf("Enter vertical height: ");
			scanf_s("%lf", &triangleHeight);
			triangleArea = (triangleBaseLength / 2) * triangleHeight;
			printf("Area of triangle = %.2lf \n", triangleArea);
		}
		
		else if (Choice == 2) {
			double squareSideLength;
			double squareArea;
			
			printf("Enter side length: ");
			scanf_s("%lf", &squareSideLength);
			squareArea = squareSideLength * squareSideLength;
			printf("Area of Square = %.2lf \n", squareArea);
		}

		else if (Choice == 3) {
			double rectangleLength;
			double rectangleWidth;
			double rectangleArea;
			
			printf("Enter length: ");
			scanf_s("%lf", &rectangleLength);
			printf("Enter width: ");
			scanf_s("%lf", &rectangleWidth);
			rectangleArea = rectangleLength * rectangleWidth;
			printf("Area of rectangle = %.2lf \n", rectangleArea);
		}

		else if (Choice == 4) {
			double parallelogramBase;
			double parallelogramHeight;
			double parallelogramArea;
			
			printf("Enter length of base: ");
			scanf_s("%lf", &parallelogramBase);
			printf("Enter height: ");
			scanf_s("%lf", &parallelogramHeight);
			parallelogramArea = parallelogramBase * parallelogramHeight;
			printf("Area of parallelogram = %.2lf \n", parallelogramArea);
		}

		else if (Choice == 5) {
			double trapezoidBaseWidth;
			double trapezoidTopWidth;
			double trapezoidHeight;
			double trapezoidArea;
			
			printf("Enter width of base: ");
			scanf_s("%lf", &trapezoidBaseWidth);
			printf("Enter width of top: ");
			scanf_s("%lf", &trapezoidTopWidth);
			printf("Enter vertical height: ");
			scanf_s("%lf", &trapezoidHeight);
			trapezoidArea = ((trapezoidBaseWidth + trapezoidTopWidth) / 2) * (trapezoidHeight);
			printf("Area of trapezoid = %.2lf \n", trapezoidArea);
		}
		
		else if (Choice == 6) {
			
			double Pi = 3.141592;
			double circleRadius;
			double circleArea;
									
			printf("Enter radius: ");
			scanf_s("%lf", &circleRadius);
			circleArea = Pi * (circleRadius * circleRadius);
			printf("Area of cirlce = %.3lf \n", circleArea);
		}

		else if (Choice == 7) {
			
			double Pi = 3.141592;
			double ellipseMajorRadius;
			double ellipseMinorRadius;
			double ellipseArea;

			printf("Enter major radius: ");
			scanf_s("%lf", &ellipseMajorRadius);
			printf("Enter minor radius: ");
			scanf_s("%lf", &ellipseMinorRadius);
			ellipseArea = Pi * ellipseMajorRadius * ellipseMinorRadius;
			printf("Area of ellipse = %.3lf \n", ellipseArea);
		}

		else if (Choice == 8) {

			double sectorRadius;
			double sectorAngle;
			double sectorArea;

			printf("Enter radius of sector: ");
			scanf_s("%lf", &sectorRadius);
			printf("Enter angle in radians: ");
			scanf_s("%lf", &sectorAngle);
			sectorArea = 1/2 * (sectorRadius * sectorRadius) * sectorAngle;
			printf("Area of sector = %.3lf\n", sectorArea);
		}

		else {
			printf("Invalid Choice");
		}

}
