/**
*
*Author: Drew Lauby
*Collaborators: Jarrod Blaser, Daniel Cornelius
*
*This program prompts the user for the latitude and
*longitude coordinates of two locations and
*computes the distance between them.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

double latA;
double longA;
double latB;
double longB;
double distance;
int R = 6371;
double latARad;
double longARad;
double latBRad;
double longBRad;
  printf ("Please enter the origin's latitude:\n");
  scanf ("%lf,", &latA);

  printf ("Please enter the origin's longitude:\n");
  scanf ("%lf,", &longA);

  printf ("Please enter the destination's latitude:\n");
  scanf ("%lf,", &latB);

  printf ("Please enter the destination's longitude:\n");
  scanf ("%lf,", &longB);

  latARad = latA * (M_PI / 180);
  longARad = longA * (M_PI / 180);
  latBRad = latB * (M_PI / 180);
  longBRad = longB * (M_PI / 180);
  double longdif = (longBRad - longARad);

  double airDis = acos(sin(latARad) * sin(latBRad) + cos(latARad) * cos(latBRad) * cos(longdif)) * R;

  printf ("Location Distance\n");
  printf ("======================\n");
  printf ("Origin:    (%f, %f,\n)", latA, longA);
  printf ("Destination:   (%f, %f\n,\n)", latB, longB);
  printf ("Air distance is %f kms\n,\n", airDis);


}
