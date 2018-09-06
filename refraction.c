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

  double angleOfIncidence;
  double mediumIndexOfRefraction;

  printf ("Please enter the angle of incidence:\n");
  scanf ("%lf", &angleOfIncidence);

  if(angleOfIncidence > 180 || angleOfIncidence < -180){
    printf("Invalid angle (must be [-180, 180]): %.1f\n", angleOfIncidence);
    return 0;
    }

  else{
    printf ("Please enter the index of refraction of the medium:\n");
    scanf ("%lf", &mediumIndexOfRefraction);
    }

  if(mediumIndexOfRefraction < 1){
      printf("Though theoretically possible, we don't accept indexes < 1\n");
      }

  else{
    double sinAngleOfRef = sin((angleOfIncidence * (M_PI / 180))) / mediumIndexOfRefraction;
    float angleOfRefraction = asin(sinAngleOfRef) * (180 / M_PI);

    printf ("Angle of incidence: %.1f degrees\n", angleOfIncidence);
    printf ("Index of refraction: %.3f\n", mediumIndexOfRefraction);
    printf ("\n");
    printf ("Angle of refraction: %f degrees\n", angleOfRefraction);
    }

  return 0;

}
