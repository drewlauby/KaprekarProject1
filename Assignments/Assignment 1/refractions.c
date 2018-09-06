/**
  * Author: Drew Lauby
  *
  *This program will find the angle of refraction of
  * a given angle and the index of refraction of the medium.
  */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int angleOfIncidence;
  double mediumIndexOfRefraction;

  printf ("Please enter the angle of incidence:\n");
  scanf ("%lf", &angleOfIncidence);

  if(angleOfIncidence > 180 || angleOfIncidence < -180){
      printf("Invalid angle (must be [-180, 180]): %f\n", angleOfIncidence);
    }
  else{
  printf ("Please enter the index of refraction of the medium:\n");
  scanf ("%lf", &mediumIndexOfRefraction);

  if(angleOfIncidence < 1){
      printf("Though theoretically possible, we don't accept indexes < 1\n");
      }
    }

  double sinAngleOfRef = sin(angleOfIncidence) / mediumIndexOfRefraction;
  double angleOfRefraction = asin(sinAngleOfRef);

  printf ("Angle of incidence: %f degrees\n", angleOfIncidence);
  printf ("Index of refraction: %f\n", mediumIndexOfRefraction);
  printf ("\n");
  printf ("Angle of refraction: %f degrees\n", angleOfRefraction);

  return 0
}
