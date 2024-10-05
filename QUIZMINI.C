#include<stdio.h>
#include<conio.h>
int main()
{
int ch,ans,total=0;
char name[20];
clrscr();
printf("Enter your name\n");
scanf("%s",&name);

printf("\nPress 1 for qustions on C programming\n");
printf("\nPress 2 for qustions on M1\n");
printf("\nPress 3 for question on Civil\n");
printf("\nPress 4 for qustions on Mechinical\n");
printf("\nPress 5 for qustions on Physics\n");
printf("\nPress 6 for qustions on Electronics\n");
printf("\nPress 7 for qustions on Electrical\n");
printf("\nPress 8 for qustions on CAED\n");
printf("Enter the subject with which you want to play\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Q1.who is developer c language\n");
printf("1->j.j thomson\n");
printf("2->Thomes Alva Edison\n");
printf("3->Albert Einstein\n");
printf("4->Dannis Ritchie\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.In which year c was developed\n");
printf("1->1970\n");
printf("2->1971\n");
printf("3->1972\n");
printf("4->1973\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");

}
printf("\nQ3.how many control statements are there \n");
printf("1->one\n");
printf("2->two\n");
printf("3->three\n");
printf("4->four\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d marks",name,total);
}
break;

case 2:
printf("Q1.d/dx(x^3)\n");
printf("1->x^4\n");
printf("2->3x^2\n");
printf("3->x^4/4\n");
printf("4->none of these\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==2)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.d/dx(log x)\n");
printf("1->log x^2\n");
printf("2->2log x\n");
printf("3->1/x\n");
printf("4->1/log x\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.k^-3k+2=0 find the roots of k\n");
printf("1->k=1,2\n");
printf("2->k=3,1\n");
printf("3->k=1,3\n");
printf("4->k=2,1\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks dammmm! your good in maths",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;
case 3:
printf("Q1.the expression for Lami's therom is\n");
printf("1->F1/sin α != F2 /sin β = F3 /sin γ\n");
printf("2->F1/sin α = F2 /sin β = F3 /sin γ\n");
printf("3->F1/sin α = F2 /sin β = F3 /sin γ\n");
printf("4->F1/sin α != F2 /sin β != F3 /sin γ\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.Total load=?\n");
printf("1->area+intensity of load\n");
printf("2->area-intensity of load\n");
printf("3->area*intensity of load\n");
printf("4->area/intensity of load\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.What is co-efficent of friction?\n");
printf("1->limiting friction:normal rection\n");
printf("2->angle of incidence:angle of difflection \n");
printf("3->angle of repose:angle of friction\n");
printf("4->limiting friction:angle of friction\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;
case 4:
printf("Q1.what is the full form of CFC\n");
printf("1->carbon fixing cation\n");
printf("2->carbon flourine carbon\n");
printf("3->chlorine flourine carbon\n");
printf("4->chloroflorocarbon\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2. which of the following can be done to control global warming\n");
printf("1->use fridges\n");
printf("2->use electric cars\n");
printf("3->release more amount of green house gases\n");
printf("4->cut more trees\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==2)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.which type of electricity generators  uses wind as source of energy\n");
printf("1->necular power plant\n");
printf("2->wind nuclear plant\n");
printf("3->wind plant\n");
printf("4->wind mill\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;
case 5:
printf("Q1.what is the full form YAG\n");
printf("1->yttrium aluminum garnet\n");
printf("2->yttrium aluminum garminium\n");
printf("3->yellow aluminum garnet\n");
printf("4->none of these\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2. how many bravias lattice are there\n");
printf("1->13\n");
printf("2->14\n");
printf("3->15\n");
printf("4->16\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==2)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.what is hook's law\n");
printf("1->1/stress∝strain\n");
printf("2->stress∝1/strain\n");
printf("3->stress∝strain\n");
printf("4->none of these\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;
case 6:
printf("Q1.how many types for bias are there\n");
printf("1->4\n");
printf("2->3\n");
printf("3->2\n");
printf("4->1\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.what is the full form of CRO \n");
printf("1->Cathode Ray Oscilloscope\n");
printf("2->Cathode Ray Oscilator\n");
printf("3->Cathode Range Oscilloscope\n");
printf("4->none of these\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.convert binary of 101 to decimal\n");
printf("1->1/\n");
printf("2->2\n");
printf("3->4\n");
printf("4->5\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;

case 7:
printf("Q1.What is the full form of VAW\n");
printf("1->voltage current watt\n");
printf("2->voltage drop current drop watt drop\n");
printf("3->both 1 and 2\n");
printf("4->voltmeter ammeter wattmeter\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.formula of Lenz's law\n");
printf("1->Є = -N (dФ/dt)\n");
printf("2->Є = N (dФ/dt)\n");
printf("3->Є = -N (dx/dy)\n");
printf("4->none of these\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ3.full form of MCB\n");
printf("1->multiple Circuit Bender/\n");
printf("2->Multiple Circuit Breaker\n");
printf("3->Miniature center Breaker\n");
printf("4->5\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==3)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);
}
break;

case 8:
printf("Q1.line AB 80mm long has its end A 20mm above HP and 30mm infront of VP lies in\n");
printf("1->1st quadrant\n");
printf("2->2nd quadrant\n");
printf("3->3rd quadrant\n");
printf("4->4th quadrant\n");
printf("\nEnter your option\n");
scanf("%d",&ans);
if(ans==1)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.line AB 80mm long has its end A 20mm below HP and 30mm infront of VP lies in\n");
printf("1->1st quadrant\n");
printf("2->2nd quadrant\n");
printf("3->3rd quadrant\n");
printf("4->4th quadrant\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==4)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
printf("\nQ2.line AB 80mm long has its end A 20mm above HP and 30mm behind of VP lies in\n");
printf("1->1st quadrant\n");
printf("2->2nd quadrant\n");
printf("3->3rd quadrant\n");
printf("4->4th quadrant\n");
printf("\nenter your option\n");
scanf("%d",&ans);
if(ans==2)
{
printf("your answer is correct\n");
total=total+1;
}
else
{
printf("sry your answer is wrong\n");
}
if(total==3)
{
printf("congo %s your have scored out of out i.e %d marks",name,total);
}
else
{
printf("%s you have scored %d/3 marks",name,total);

}
default:
printf("choice a valid number\n");
break;
}
}