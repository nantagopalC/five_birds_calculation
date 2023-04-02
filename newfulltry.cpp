#include <stdio.h>
//theipirai pagal
//#define eettime eetime
int globalk=1;
struct TIME
{
int seconds;
int minutes;
int hours;
};
int q[5];
int pirai;
int day;
struct etime
{
	int subseconds;
	int seconds;
	int minutes;
	int hours;
};
struct eetime
{
	int subsub;
	int subseconds;
	int seconds;
	int minutes;
	int hours;
};
struct etime oont,nadait,arasut,thuyilt,saavut;
void shortcutS(struct etime *threefN,struct etime halfN,struct etime quarN);
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
void jamamAddition(struct TIME startTime, struct TIME A, struct TIME *B);
void jamam(struct TIME stopTime, struct TIME A, struct TIME *B, struct TIME *userJamam,int n);
void calculatenaligai(struct TIME userJamam,struct TIME naligai, int n,struct etime *qN,struct etime *hN,struct etime *tfN,struct etime *oneN);
//void shortcut(struct etime *threefN,struct etime halfN,struct etime quarN);\
void shortcut(struct etime *threefN,struct etime halfN,struct etime quarN,struct eetime *res , struct eetime a , struct eetime b);
//shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);

void shortcut(struct etime *threefN,struct etime halfN,struct etime quarN,struct eetime *res , struct eetime a , struct eetime b);
void tholil(struct etime userJamamR,struct etime oneN, struct etime qN ,struct etime hN,struct etime tfN,struct etime oneof, struct etime oneh , struct etime onetf, struct etime two);
void caloon(struct etime *userJamamR,struct etime oneof);
void nadai(struct etime *userJamamR,struct etime oneof);
void arasu(struct etime *userJamamR,struct etime oneof);
void thuyil(struct etime *userJamamR,struct etime oneof);
void saavu(struct etime *userJamamR,struct etime oneof);
void andharam(struct etime userJamamR,struct etime oneN, struct etime qN ,struct etime hN,struct etime tfN,struct etime oneof, struct etime oneh , struct etime onetf, struct etime two);
void divideby6(struct etime A,struct etime *B);
//void calculatenaligaiA(struct etime userJamam,struct etime naligai, int n,struct etime *qN,struct etime *hN,struct etime *tfN,struct etime *oneN, struct eetime *qNAE,&hNAE,&tfNAE,&oneNAE);
void calculatenaligaiA(struct etime userJamam,struct etime naligai, int n,struct etime *qN,struct etime *hN,struct etime *tfN,struct etime *oneN,struct eetime *quarNAE,struct eetime *halfNAE,struct eetime *tfNAE, struct eetime *oneNAE);
//calculatenaligaiA(saavut,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
void caloonF(struct eetime *userJamamR,struct eetime oneof);
void nadaiF(struct eetime *userJamamR,struct eetime oneof);
void saavuF(struct eetime *userJamamR,struct eetime oneof);
void thuyilF(struct eetime *userJamamR,struct eetime oneof);
void arasuF(struct eetime *userJamamR,struct eetime oneof);
void andharamAE(struct etime userjamamRE , struct  eetime oneNAE , struct  eetime qNAE , struct  eetime hNAE , struct eetime tfNAE , struct  eetime oneofNAE , struct  eetime onehNAE , struct  eetime onetfNAE , struct  eetime twoNAE );

int main()
{
struct TIME startTime, stopTime, diff;
printf("Enter sunrise time: \n");
printf("Enter hours and minutes respectively: ");
scanf("%d:%d", &stopTime.hours, &stopTime.minutes);
printf("Enter sunset time \n");
printf("Enter hours and minutes respectively: ");
scanf("%d:%d", &startTime.hours, &startTime.minutes);
startTime.hours = startTime.hours + 12;
stopTime.seconds = 00;
startTime.seconds = 00;
//int U;
//printf("enter 1 for sunday \n 2 for monday \n 3 for tuesday \n 4 for wednesday \n 5 for thursday \n 6 for friday \n 7 for saturday!");
//scanf("%d",&U);
// Calculate the difference between the start and stop time period.
differenceBetweenTimePeriod(startTime, stopTime, &diff);
printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

printf("enter 1 for valarpirai or enter 2 for theipirai pagal or enter 3 for theipirai iravu! ");
scanf("%d",&pirai);
int h,m;
h=diff.hours;
m=diff.minutes;
int th;
th = h*60;
int tt;
tt = th+m;
int jamamM;
jamamM = tt/5;
int x = tt%5;
int y = x*60;
int jamamS = y/5;
printf("total time of one jamam %d mins %d seconds ",jamamM,jamamS);

int RJH = jamamM/60;
int RJM = jamamM%60;
int RJS = jamamS;
printf(" \n one Jamam Time is %d hours and %d mins and %d seconds",RJH,RJM,RJS);
//return 0;
struct TIME A,B,userJamam;
A.hours = RJH;
A.minutes = RJM;
A.seconds = RJS;
jamamAddition(stopTime, A,&B);
//printf("\n 1st jamam %d %d %d ",B.hours,B.minutes,B.seconds);
//printf("\n 1st jamam %d %d %d ",A.hours,A.minutes,A.seconds);
int naligaiM;
naligaiM = jamamM/6;
int naligaiS = ((jamamM%6)*60+jamamS)/6;
printf("\n**NALIGAI IS %d:%d",naligaiM,naligaiS);
struct TIME naligai,expN;
naligai.hours = 0;
naligai.minutes = naligaiM;
naligai.seconds = naligaiS;
int n;
printf("\nenter the particular JAMAM YOU WANT TO EXPLORE");
scanf("%d",&n);
n=n-1;	
//jamam(stopTime,n,&expN);
jamam(stopTime,A,&B,&userJamam,n);
printf("\n***************** %d:%d:%d",userJamam.hours,userJamam.minutes,userJamam.seconds);
struct etime exacttime;
struct etime qN,hN,tfN,oneN;
calculatenaligai(userJamam,naligai,n,&qN,&hN,&tfN,&oneN);
struct etime oneof,oneh,onetf,two;
    shortcutS(&oneof,oneN,qN);
	shortcutS(&oneh,oneN,hN);
	shortcutS(&onetf,oneN,tfN);
	shortcutS(&two,oneN,oneN);
	
		printf("\n \n 1.25**** %d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds);
	printf("\n \n 1.5**** %d:%d:%d:%d",oneh.hours,oneh.minutes,oneh.seconds,oneh.subseconds);
	printf("\n \n1.75**** %d:%d:%d:%d",onetf.hours,onetf.minutes,onetf.seconds,onetf.subseconds);
	printf("\n \n2***** %d:%d:%d:%d",two.hours,two.minutes,two.seconds,two.subseconds);
//
//switch (U)
//	{
//	
//	case '1':
//		sunday();
//		break;
//	default:
//		//
//		break;
//		
//	}
struct etime userJamamR;
userJamamR.hours = userJamam.hours;
userJamamR.minutes = userJamam.minutes;
userJamamR.seconds = userJamam.seconds;
userJamamR.subseconds = 00;

	tholil(userJamamR,oneN,qN,hN,tfN,oneof,oneh,onetf,two);
	
	//oon=oneof;
	//for oon;
	
	//to change valarpirai theipirai
	
	struct etime oonD;
	
	struct etime nadaiD, arasuD , thuyilD, saavuD;
	if(pirai==1)
	{
		//valarpirai
		oonD = oneof;
		nadaiD = oneh;
		arasuD = two;
		thuyilD = tfN ;
		saavuD = hN;
	}
	if(pirai==2)
	{
	
	oonD = two;
	nadaiD = oneh;
	arasuD = tfN;
	thuyilD = hN;
	saavuD = oneof;
	}
	if(pirai==3)
	{
		oonD = onetf;
		nadaiD = onetf;
		arasuD = tfN;
		thuyilD  = tfN;
		saavuD = oneN;
	}
//	
//	struct etime qN,hN,tfN,oneN;
//calculatenaligai(userJamam,naligai,n,&qN,&hN,&tfN,&oneN);
//struct etime oneof,oneh,onetf,two;
//    shortcut(&oneof,oneN,qN);
//	shortcut(&oneh,oneN,hN);
//	shortcut(&onetf,oneN,tfN);
//	shortcut(&two,oneN,oneN);
//struct etime Z,zapp;
//Z.hours  = 1;
//Z.minutes = 23;
//Z.seconds = 41;
//Z.subseconds = 0 ;
//divideby6(Z,&zapp);
//printf("\n \n \n %d:%d:%d:%d",zapp.hours , zapp.minutes , zapp.seconds ,zapp.subseconds);
struct etime andharaN;
 //divideby6(oonD,&andharaN);
// printf("\n IAM ANDHRA %d:%d:%d:%d",andharaN.hours,andharaN.minutes,andharaN.seconds ,andharaN.subseconds);
 struct etime qNA,hNA,tfNA,oneNA;
 //calculatenaligaiA(oont,andharaN,n,&qNA,&hNA,&tfNA,&oneNA);
 struct etime oneofA,onehA,onetfA,twoA;
//    shortcut(&oneofA,oneNA,qNA);
//	shortcut(&onehA,oneNA,hNA);
//	shortcut(&onetfA,oneNA,tfNA);
//	shortcut(&twoA,oneNA,oneNA);

	
 	//andharam(oont,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
 	
 		printf("\n enter tholil you wanna explore: \n 1 for oon \n enter 2 for nadai \n enter 3 for arasu \n enter 4 for thuyil \n enter 5 for saavu");
//	int a[5];
 	
 	
 	
 		int a;
//	int i=0;
// for(i =0; i<=4; i++) // input of array elements
 scanf("%d",&a);
 
//  for(i =0; i<=4; i++) // input of array elements
// printf("\n%d",a[i]);
 	
 	struct eetime qNAE,hNAE,tfNAE,oneNAE;
 	
 	struct eetime oneofAE,onehAE,onetfAE,twoAE;
 		if(a==1)
 		{
 			printf("\n");
 			divideby6(oonD,&andharaN);
 			calculatenaligaiA(oont,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
 			 shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);
				shortcut(&onehA,oneNA,hNA,&onehAE,oneNAE,hNAE);
				shortcut(&onetfA,oneNA,tfNA,&onetfAE,oneNAE,tfNAE);
				shortcut(&twoA,oneNA,oneNA,&twoAE,oneNAE,oneNAE);
				
 		//	andharam(oont,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
// 			andharamAE(struct etime userjamamRE , struct  eetime oneNAE , struct  eetime qNAE , struct  eetime hNAE , struct eetime tfNAE , struct  eetime oneofNAE , struct  eetime onehNAE , struct  eetime onetfNAE , struct  eetime twoNAE )
 			andharamAE(oont,oneNAE,qNAE,hNAE,tfNAE,oneofAE,onehAE,onetfAE,twoAE);
 				
 			
		 }
		 else
		 if(a==2){
		 	printf("\n");
		 	divideby6(nadaiD,&andharaN);
 			calculatenaligaiA(nadait,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
 			 shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);
				shortcut(&onehA,oneNA,hNA,&onehAE,oneNAE,hNAE);
				shortcut(&onetfA,oneNA,tfNA,&onetfAE,oneNAE,tfNAE);
				shortcut(&twoA,oneNA,oneNA,&twoAE,oneNAE,oneNAE);
 		//	andharam(nadait,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
 				andharamAE(nadait,oneNAE,qNAE,hNAE,tfNAE,oneofAE,onehAE,onetfAE,twoAE);
		 }
		 else
		 if(a==3)
		 {
		 	printf("\n");
		 	divideby6(arasuD,&andharaN);
 			calculatenaligaiA(arasut,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
 				shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);
				shortcut(&onehA,oneNA,hNA,&onehAE,oneNAE,hNAE);
				shortcut(&onetfA,oneNA,tfNA,&onetfAE,oneNAE,tfNAE);
				shortcut(&twoA,oneNA,oneNA,&twoAE,oneNAE,oneNAE);
//				printf("one one fourth AE is %d:%d:%d:%d:%d ",oneofAE.hours,oneofAE.minutes, oneofAE.seconds,oneofAE.subseconds , oneofAE.subsub );
//				printf("one and half AE is %d:%d:%d:%d:%d ",onehAE.hours,onehAE.minutes, onehAE.seconds,onehAE.subseconds , onehAE.subsub );
//				printf("one and threef  fourth AE is %d:%d:%d:%d:%d ",onetfAE.hours,onetfAE.minutes, onetfAE.seconds,onetfAE.subseconds , onetfAE.subsub );
//				printf("two AE is %d:%d:%d:%d:%d ",twoAE.hours,twoAE.minutes, twoAE.seconds,twoAE.subseconds , twoAE.subsub );
//			andharam(arasut,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
			andharamAE(arasut,oneNAE,qNAE,hNAE,tfNAE,oneofAE,onehAE,onetfAE,twoAE);
		 }
		 else
		 if(a==4)
		 {
		 	printf("\n");
		 	divideby6(thuyilD,&andharaN);
 			calculatenaligaiA(thuyilt,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
 			 shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);
				shortcut(&onehA,oneNA,hNA,&onehAE,oneNAE,hNAE);
				shortcut(&onetfA,oneNA,tfNA,&onetfAE,oneNAE,tfNAE);
				shortcut(&twoA,oneNA,oneNA,&twoAE,oneNAE,oneNAE);
				

		 //	andharam(thuyilt,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA,);
		 	andharamAE(thuyilt,oneNAE,qNAE,hNAE,tfNAE,oneofAE,onehAE,onetfAE,twoAE);
		 	
		 }
		 else
		 if(a==5)
		 {
		 	printf("\n");
		 	divideby6(saavuD,&andharaN);
 			calculatenaligaiA(saavut,andharaN,n,&qNA,&hNA,&tfNA,&oneNA,&qNAE,&hNAE,&tfNAE,&oneNAE);
 		shortcut(&oneofA,oneNA,qNA,&oneofAE,oneNAE,qNAE);
				shortcut(&onehA,oneNA,hNA,&onehAE,oneNAE,hNAE);
				shortcut(&onetfA,oneNA,tfNA,&onetfAE,oneNAE,tfNAE);
				shortcut(&twoA,oneNA,oneNA,&twoAE,oneNAE,oneNAE);
		 	//andharam(saa,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
		 	
//		 	andharam(saavut,oneNA,qNA,hNA,tfNA,oneofA,onehA,onetfA,twoA);
			 	andharamAE(saavut,oneNAE,qNAE,hNAE,tfNAE,oneofAE,onehAE,onetfAE,twoAE);		 	
		 }
 	
 		//++k;
	 
}
void calculatenaligaiA(struct etime userJamam,struct etime naligai, int n,struct etime *qN,struct etime *hN,struct etime *tfN,struct etime *oneN,struct eetime *quarNAE,struct eetime *halfNAE,struct eetime *tfNAE, struct eetime *oneNAE)
{
	 //calculatenaligaiA(oont,andharaN,n,&qNA,&hNA,&tfNA,&oneNA);
	struct TIME oon,nadai,arasu,thuyil,saavu;
	struct etime  copy,halfN,quarN,threefN;
	//for oon;
	copy.subseconds = naligai.subseconds;
	copy.seconds= naligai.seconds;
	copy.minutes = naligai.minutes;
	copy.hours = naligai.hours;
	
	//one naligai == copy;
	
	int subsubsec;
	struct eetime eet,copye;
	eet.subsub =  0;
	copye.subsub = 0;
	//half naligai
	if(copye.subsub%2!=0)
	{
		;
	}
	else{
		
		copye.subsub = copye.subsub/2;
	}
	if(copy.subseconds%2!=0)
	{
		copye.subsub = copye.subsub + 30;
		copy.subseconds = copy.subseconds/2;
		
		if(copy.subseconds>=60)
		{
			copy.subseconds = copy.subseconds - 60;
			copy.seconds = copy.seconds + 1;	
		}
	}
	else
	{
		copy.subseconds = copy.subseconds/2;
	}
	if(copy.seconds%2!=0)
	{
		copy.subseconds = copy.subseconds+30;
		copy.seconds = copy.seconds/2;
		if(copy.subseconds>=60)
		{
			copy.subseconds = copy.subseconds - 60;
			copy.seconds = copy.seconds + 1;	
		}
		
	}
	else
	{
		copy.seconds = copy.seconds/2;
	}
	
	if(copy.minutes%2!=0)
	{
		copy.seconds = copy.seconds + 30;
		copy.minutes = copy.minutes/2;
		if(copy.seconds>=60)
		{
			copy.minutes =  copy.minutes+1;
			copy.seconds = copy.seconds-60;
		}
		
	}
	else
	{
		copy.minutes = copy.minutes/2;
	}
	
	halfN.hours = copy.hours;
	halfN.minutes = copy.minutes;
	halfN.seconds = copy.seconds;
	halfN.subseconds = copy.subseconds;	
	
	struct eetime halfNE;
	halfNE.hours = halfN.hours;
	halfNE.minutes = halfN.minutes;
	halfNE.seconds = halfN.seconds;
	halfNE.subseconds = halfN.subseconds;
	halfNE.subsub = copye.subsub;
	printf("\n \n HAlfNE is  %d:%d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds,copye.subsub);
	
	//quarter naligai
	if(copye.subsub%2!=0)
	{
		;
	}
	else{
		
		copye.subsub = copye.subsub/2;
	}
	if(copy.subseconds%2!=0)
	{
		copye.subsub = copye.subsub + 30;
		copy.subseconds = copy.subseconds/2;
		if(copy.subseconds>=60)
		{
			copy.subseconds = copy.subseconds - 60;
			copy.seconds = copy.seconds + 1;	
		}
	}
	else
	{
		copy.subseconds = copy.subseconds/2;
	}
		if(copy.seconds%2!=0)
	{
		copy.subseconds = copy.subseconds+30;
		copy.seconds = copy.seconds/2;
		if(copy.subseconds>=60)
		{
			copy.seconds =  copy.seconds+1;
			copy.subseconds = copy.subseconds-60;
		}
	}
	else
	{
		copy.seconds = copy.seconds/2;
	}
	
	if(copy.minutes%2!=0)
	{
		copy.seconds = copy.seconds + 30;
		copy.minutes = copy.minutes/2;
		if(copy.seconds>=60)
		{
			copy.minutes =  copy.minutes+1;
			copy.seconds = copy.seconds-60;
		}
		
	}
	else
	{
		copy.minutes = copy.minutes/2;
	}
	
	quarN.hours = copy.hours;
	quarN.minutes = copy.minutes;
	quarN.seconds = copy.seconds;
	quarN.subseconds = copy.subseconds;	
	
	struct eetime quarNE;
	quarNE.hours = quarN.hours;
	quarNE.minutes = quarN.minutes;
	quarNE.seconds = quarN.seconds;
	quarNE.subseconds = quarN.subseconds;
	quarNE.subsub = copye.subsub;
	printf("\n \n \n quarNE  %d:%d:%d:%d:%d",quarN.hours,quarN.minutes,quarN.seconds,quarN.subseconds,quarNE.subsub);
	
	//3/4naligai
	threefN.subseconds =halfN.subseconds + quarN.subseconds;
	threefN.seconds =halfN.seconds + quarN.seconds;
	threefN.minutes =halfN.minutes + quarN.minutes;
	threefN.hours =halfN.hours + quarN.hours;
	struct eetime threefNE;
	threefNE.subsub = 	halfNE.subsub + quarNE.subsub;
	printf("\n \n threefNE.subsub is %d",threefNE.subsub);
		if(threefNE.subsub>=60)
	{
		threefN.subseconds = threefN.subseconds + 1;
		threefNE.subsub = threefNE.subsub - 60;
		
	}
	if(threefN.subseconds>=60)
	{
		threefN.seconds = threefN.seconds + 1;
		threefN.subseconds = threefN.subseconds - 60;
		
	}
	if(threefN.seconds>=60)
	{
		threefN.minutes = threefN.minutes + 1;
		threefN.seconds = threefN.seconds - 60;
		
	}
	
	if(threefN.minutes>=60)
	{
		threefN.hours = threefN.hours + 1;
		threefN.minutes = threefN.minutes - 60;
		
	}
	
	threefNE.hours = threefN.hours;
	threefNE.minutes = threefN.minutes;
	threefNE.seconds = threefN.seconds;
	threefNE.subseconds = threefN.subseconds;
	printf("\n%d:%d:%d:%d:%d  threefNE 3/4th",threefNE.hours,threefNE.minutes,threefNE.seconds,threefNE.subseconds,threefNE.subsub);
	oon.hours = 0;
	oon.minutes = copy.minutes;
	oon.seconds = copy.seconds;
	struct etime one,oneof,oneh,onetf,two;
	
	one.subseconds = naligai.subseconds;
	one.seconds = naligai.seconds;
	one.minutes = naligai.minutes;
	one.hours = naligai.hours;
	//shortcut(struct etime threefN,struct etime halfN,struct etime quarN)
	
	//oneNE
	
	
	
	qN->hours = quarN.hours;
	qN->minutes = quarN.minutes;
	qN->seconds = quarN.seconds;
	qN->subseconds = quarN.subseconds;
	printf("\n\n\n QN %d:%d:%d:%d",qN->hours,qN->minutes,qN->seconds,qN->subseconds);
	
	hN->hours = halfN.hours;
	hN->minutes =halfN.minutes;
	hN->seconds = halfN.seconds;
	hN->subseconds = halfN.subseconds;
		
	tfN->hours = threefN.hours;
	tfN->minutes = threefN.minutes;
	tfN->seconds = threefN.seconds;
	tfN->subseconds = threefN.subseconds;
	
	oneN->hours = one.hours;
	oneN->minutes = one.minutes;
	oneN->seconds = one.seconds;
	oneN->subseconds = one.subseconds;
	
	
	halfNAE->hours = halfNE.hours;
	halfNAE->minutes = halfNE.minutes;
	halfNAE->seconds = halfNE.seconds;
	halfNAE->subseconds = halfNE.subseconds;
	halfNAE->subsub = halfNE.subsub;
	
	
	quarNAE->hours = quarNE.hours;
	quarNAE->minutes = quarNE.minutes;
	quarNAE->seconds = quarNE.seconds;
	quarNAE->subseconds = quarNE.subseconds;
	quarNAE->subsub = quarNE.subsub;
	
	tfNAE->hours = threefNE.hours;
	tfNAE->minutes = threefNE.minutes;
	tfNAE->seconds = threefNE.seconds;
	tfNAE->subseconds = threefNE.subseconds;
	tfNAE->subsub = threefNE.subsub;
	
	
	oneNAE->subsub = halfNAE->subsub + halfNAE->subsub;
	oneNAE->subseconds = halfNAE->subseconds + halfNAE->subseconds;
	oneNAE->seconds = halfNAE->seconds + halfNAE->seconds;
	oneNAE->minutes = halfNAE->minutes + halfNAE->minutes;
	oneNAE->hours = halfNAE->hours + halfNAE->hours;
	if(oneNAE->subsub >=60)
	{
		oneNAE->subseconds  =oneNAE->subseconds +1;
		oneNAE->subsub  = oneNAE->subsub  - 60;
	}
	if(oneNAE->subseconds >=60)
	{
		oneNAE->seconds = oneNAE->seconds+1;
	oneNAE->subseconds  = oneNAE->subseconds  - 60;
	}
	if(oneNAE->seconds>=60)
	{
		oneNAE->minutes = oneNAE->minutes+1;
		oneNAE->seconds = oneNAE->seconds - 60;
	}
	if(oneNAE->minutes>=60)
	{
	oneNAE->hours = oneNAE->hours+1;
		oneNAE->minutes = oneNAE->minutes - 60;
	}
	printf("\n \n .25 Analigai %d:%d:%d:%d:%d",quarNAE->hours,quarNAE->minutes,quarNAE->seconds,quarNAE->subseconds,quarNAE->subsub);
	printf("\n \n .5 Analigai %d:%d:%d:%d:%d",halfNAE->hours,halfNAE->minutes,halfNAE->seconds,halfNAE->subseconds,halfNAE->subsub);
	printf("\n \n .75 Analigai %d:%d:%d:%d:%d",tfNAE->hours,tfNAE->minutes,tfNAE->seconds,tfNAE->subseconds,tfNAE->subsub);
	printf("\n \n 1ji Analigai %d:%d:%d:%d:%d",oneNAE->hours,oneNAE->minutes,oneNAE->seconds,oneNAE->subseconds,oneNAE->subsub);
	
	
//	printf("\n \n .25 Analigai %d:%d:%d:%d",qN->hours,qN->minutes,qN->seconds,qN->subseconds);
//	printf("\n \n .5 Analigai %d:%d:%d:%d",hN->hours,hN->minutes,hN->seconds,hN->subseconds);
//	printf("\n \n .75 Analigai %d:%d:%d:%d",tfN->hours,tfN->minutes,tfN->seconds,tfN->subseconds);
//	printf("\n \n 2 Analigai %d:%d:%d:%d",oneN->hours,oneN->minutes,oneN->seconds,oneN->subseconds);
	//case(n==1):
	
		
}

void shortcutS(struct etime *threefN,struct etime halfN,struct etime quarN)
{
	threefN->subseconds =halfN.subseconds + quarN.subseconds;
	threefN->seconds =halfN.seconds + quarN.seconds;
	threefN->minutes =halfN.minutes + quarN.minutes;
	threefN->hours =halfN.hours + quarN.hours;
	if(threefN->subseconds>=60)
	{
		threefN->seconds = threefN->seconds + 1;
		threefN->subseconds = threefN->subseconds - 60;
		
	}
	if(threefN->seconds>=60)
	{
		threefN->minutes = threefN->minutes + 1;
		threefN->seconds = threefN->seconds - 60;
		
	}
	
	if(threefN->minutes>=60)
	{
		threefN->hours = threefN->hours + 1;
		threefN->minutes = threefN->minutes - 60;
		
	}
	
//	ans->hours = threefN.hours;
//	ans->minutes = threefN.minutes;
//	ans->seconds = threefN.seconds;
//	ans->subseconds = threefN.subsecondsl
}
void divideby6(struct etime A,struct etime *B)
{
		int x;
	x = A.hours*60;
	int y;
	y = x + A.minutes;
	int z;
	z = y*60;
	z = z+ A.seconds;
	//z contains total sec
	z = z*60 + A.subseconds ; 
	//z is total time in sub s
	int k;
	k = z /6;
	B->subseconds = k%60;
	k = k/60;
	//
	B->seconds = k%60;
	k = k/60;
	if(k<60)
	{
		
	  B->minutes = k;
	  B->hours  = 0 ;
	  return;
	}
	B->minutes = k%60;
	k = k/60;
		if(k<60)
	{
		
	  
	  B->hours  = k ;
	  return;
	}
	
	
}


void andharamAE(struct etime userjamamRE , struct  eetime oneNAE , struct  eetime qNAE , struct  eetime hNAE , struct eetime tfNAE , struct  eetime oneofNAE , struct  eetime onehNAE , struct  eetime onetfNAE , struct  eetime twoNAE )
{
	struct eetime instant;
	instant.hours = userjamamRE.hours;
	instant.minutes = userjamamRE.minutes;
	instant.seconds = userjamamRE.seconds;
	instant.subseconds = userjamamRE.subseconds;
	instant.subsub = 0;
	
	
	
	
	
	
	//	printf("\n enter andharam order one by one: \n 1 for oon \n enter 2 for nadai \n enter 3 for arasu \n enter 4 for thuyil \n enter 5 for saavu");
	
	int a[5];
	int i=0;
	//a = q;
// for(i =0; i<=4; i++) // input of array elements
// scanf("%d",&a[i]);
 a[0]=q[0];
 a[1]= q[1];
 a[2]=q[2];
 a[3]=q[3];
 a[4]=q[4];
  for(i =0; i<=4; i++) // input of array elements
 printf("\n%d",a[i]);
 	//change
 	
 	struct eetime oonD;
	
	struct eetime nadaiD, arasuD , thuyilD, saavuD;
	if(pirai==1)
	{
		//valarpirai
		oonD = oneofNAE;
		nadaiD = onehNAE;
		arasuD = twoNAE;
		thuyilD = tfNAE ;
		saavuD = hNAE;
	}
	if(pirai==2)
	{
	
	oonD = twoNAE;
	nadaiD = onehNAE;
	arasuD = tfNAE;
	thuyilD = hNAE;
	saavuD = oneofNAE;
	}
	if(pirai==3)
	{
		oonD = onetfNAE;
		nadaiD = onetfNAE;
		arasuD = tfNAE;
		thuyilD  = tfNAE;
		saavuD = oneNAE;
	}
 	
 	
 	int k=0;
 	while(k<=4)
 	{
 		if(a[k]==1)
 		{
 			printf("\n");
 			caloonF(&instant,oonD);
 		
 			
		 }
		 else
		 if(a[k]==2){
		 	printf("\n");
		 	nadaiF(&instant,nadaiD);
		 
		 }
		 else
		 if(a[k]==3)
		 {
		 	printf("\n");
		 	arasuF(&instant,arasuD);
		 		
		 }
		 else
		 if(a[k]==4)
		 {
		 	
		 	printf("\n");
		 	thuyilF(&instant,thuyilD);
		 	
		 }
		 else
		 if(a[k]==5)
		 {
		 	printf("\n");
		 	saavuF(&instant,saavuD);
		 	
		 }
 	
 		++k;
	 }
	
	
}
void andharam(struct etime userJamamR,struct etime oneN, struct etime qN ,struct etime hN,struct etime tfN,struct etime oneof, struct etime oneh , struct etime onetf, struct etime two)
{
	struct etime instant;
	instant.hours = userJamamR.hours;
	instant.minutes = userJamamR.minutes;
	instant.seconds = userJamamR.seconds;
	instant.subseconds = userJamamR.subseconds;
    //instant = userJamamR;
	printf("\n enter andharam order one by one: \n 1 for oon \n enter 2 for nadai \n enter 3 for arasu \n enter 4 for thuyil \n enter 5 for saavu");
	
	int a[5];
	int i=0;
	//a = q;
 for(i =0; i<=4; i++) // input of array elements
 scanf("%d",&a[i]);
 
  for(i =0; i<=4; i++) // input of array elements
 printf("\n%d",a[i]);
 
 	int k=0;
 	while(k<=4)
 	{
 		if(a[k]==1)
 		{
 			printf("\n");
 			caloon(&instant,oneof);
 		
 			
		 }
		 else
		 if(a[k]==2){
		 	printf("\n");
		 	nadai(&instant,oneh);
		 
		 }
		 else
		 if(a[k]==3)
		 {
		 	printf("\n");
		 	arasu(&instant,two);
		 		
		 }
		 else
		 if(a[k]==4)
		 {
		 	printf("\n");
		 	thuyil(&instant,tfN);
		 	
		 }
		 else
		 if(a[k]==5)
		 {
		 	printf("\n");
		 	saavu(&instant,hN);
		 	
		 }
 	
 		++k;
	 }
//	int k=0;
//nadai 1.5 arasu-2 thuyil-3/4 saavuu-1/2
//	switch (a[0])
//	{
//		case 'a[0]==1':
//			printf("\n CALLOON TRIGGERED");
//			caloon(&instant,oneof);
//			break;
//		case '2':
//			printf("\n NADAI TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '3':
//			printf("\n ARASU TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '4':
//			printf("\n THUYIL TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '5':
//			printf("\n SAAVU TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		default:
//			break;
			
	
	

}




void tholil(struct etime userJamamR,struct etime oneN, struct etime qN ,struct etime hN,struct etime tfN,struct etime oneof, struct etime oneh , struct etime onetf, struct etime two)
{
	struct etime instant;
	instant.hours = userJamamR.hours;
	instant.minutes = userJamamR.minutes;
	instant.seconds = userJamamR.seconds;
	instant.subseconds = userJamamR.subseconds;
    //instant = userJamamR;
	printf("\n enter tholil order one by one: \n 1 for oon \n enter 2 for nadai \n enter 3 for arasu \n enter 4 for thuyil \n enter 5 for saavu");
	int a[5];
	int i=0;
 for(i =0; i<=4; i++) // input of array elements
 scanf("%d",&a[i]);
 
 
 	q[0]=a[0];
 	q[1]=a[1];
 	q[2]=a[2];
 	q[3]=a[3];
 	q[4]=a[4];
  for(i =0; i<=4; i++) // input of array elements
 printf("\n%d",a[i]);
 	// to change theiparai valar pirai change these values;
 		struct etime oonD;
	
	struct etime nadaiD, arasuD , thuyilD, saavuD;
	if(pirai==1)
	{
		//valarpirai
		oonD = oneof;
		nadaiD = oneh;
		arasuD = two;
		thuyilD = tfN ;
		saavuD = hN;
	}
	if(pirai==2)
	{
	
	oonD = two;
	nadaiD = oneh;
	arasuD = tfN;
	thuyilD = hN;
	saavuD = oneof;
	}
	if(pirai==3)
	{
		oonD = onetf;
		nadaiD = onetf;
		arasuD = tfN;
		thuyilD  = tfN;
		saavuD = oneN;
	}
 	int k=0;
 	while(k<=4)
 	{
 		if(a[k]==1)
 		{
 			printf("\n");
 			 oont.hours = instant.hours ;
 			 oont.minutes = instant.minutes ;
 			  oont.seconds = instant.seconds;
 			oont.subseconds = instant.subseconds ;
 			caloon(&instant,oonD);
 				
 			
		 }
		 else
		 if(a[k]==2){
		 	printf("\n");
		 	
		 	nadait.hours =	instant.hours ;
 			nadait.minutes = instant.minutes  ;
 			 nadait.seconds = instant.seconds   ;
 			nadait.subseconds= instant.subseconds  ;
 			nadai(&instant,nadaiD);
		 }
		 else
		 if(a[k]==3)
		 {
		 	printf("\n");
		 	
//		 	instant.hours = arasut.hours;
// 			instant.minutes = arasut.minutes;
// 			instant.seconds  = arasut.seconds;
// 			instant.subseconds = arasut.subseconds;
			arasut = instant;
			arasu(&instant,arasuD);
		 }
		 else
		 if(a[k]==4)
		 {
		 	printf("\n");
		 	
//		 		instant.hours = thuyilt.hours;
// 			instant.minutes = thuyilt.minutes;
// 			instant.seconds  = thuyilt.seconds;
// 			instant.subseconds = thuyilt.subseconds;
			thuyilt = instant;
			thuyil(&instant,thuyilD);
		 }
		 else
		 if(a[k]==5)
		 {
		 	printf("\n");
		 	
//		 		instant.hours = saavut.hours;
// 			instant.minutes = saavut.minutes;
// 			instant.seconds  = saavut.seconds;
// 			instant.subseconds = saavut.subseconds;
			saavut = instant;
			saavu(&instant,saavuD);
		 	
		 }
 	
 		++k;
	 }
//	int k=0;
//nadai 1.5 arasu-2 thuyil-3/4 saavuu-1/2
//	switch (a[0])
//	{
//		case 'a[0]==1':
//			printf("\n CALLOON TRIGGERED");
//			caloon(&instant,oneof);
//			break;
//		case '2':
//			printf("\n NADAI TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '3':
//			printf("\n ARASU TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '4':
//			printf("\n THUYIL TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		case '5':
//			printf("\n SAAVU TRIGGERED");
//			//caloon(&instant,oneof);
//			break;
//		default:
//			break;
			
	
	

}
void saavu(struct etime *userJamamR,struct etime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	printf("\n The SAAVU TIME IS FROM %d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	struct etime newC;
	shortcutS(&newC,copy,oneof);
	printf(" To %d:%d:%d:%d",newC.hours,newC.minutes,newC.seconds,newC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	
}
void thuyil(struct etime *userJamamR,struct etime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	printf("\n The THUYIL TIME IS FROM %d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	struct etime newC;
	shortcutS(&newC,copy,oneof);
	printf(" To %d:%d:%d:%d",newC.hours,newC.minutes,newC.seconds,newC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	
}

void arasu(struct etime *userJamamR,struct etime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	printf("\n The ARASU TIME IS FROM %d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	struct etime newC;
	shortcutS(&newC,copy,oneof);
	printf(" To %d:%d:%d:%d",newC.hours,newC.minutes,newC.seconds,newC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	
}

void nadai(struct etime *userJamamR,struct etime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	printf("\n The NADAI TIME IS FROM %d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	struct etime newC;
	shortcutS(&newC,copy,oneof);
	printf(" To %d:%d:%d:%d",newC.hours,newC.minutes,newC.seconds,newC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	
}

void caloon(struct etime *userJamamR,struct etime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	printf("\n The OON TIME IS FROM %d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	struct etime newC;
	shortcutS(&newC,copy,oneof);
	printf(" To %d:%d:%d:%d",newC.hours,newC.minutes,newC.seconds,newC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	
}
void saavuF(struct eetime *userJamamR,struct eetime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	//copy.subsub = userJamamR->subsub;
	
	struct eetime copyz;
	copyz.hours = userJamamR->hours;
	copyz.minutes = userJamamR->minutes;
	copyz.seconds = userJamamR->seconds;
	copyz.subseconds = userJamamR->subseconds;
	copyz.subsub = userJamamR->subsub;
	
	struct etime oneofz ; 
	oneofz.hours = oneof.hours;
	oneofz.minutes = oneof.minutes;
	oneofz.seconds = oneof.seconds;
	oneofz.subseconds = oneof.subseconds;
	printf("\n The SAAVU TIME IS FROM %d:%d:%d:%d",copyz.hours,copyz.minutes,copyz.seconds,copyz.subseconds);
	//	printf(" ADDED WITH  %d:%d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds,oneof.subsub);
	struct etime newC;
	struct eetime newCC;
	shortcut(&newC,copy,oneofz,&newCC,copyz,oneof);
	//printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
	userJamamR->subsub = newCC.subsub;
	
}
void thuyilF(struct eetime *userJamamR,struct eetime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	//copy.subsub = userJamamR->subsub;
	
	struct eetime copyz;
	copyz.hours = userJamamR->hours;
	copyz.minutes = userJamamR->minutes;
	copyz.seconds = userJamamR->seconds;
	copyz.subseconds = userJamamR->subseconds;
	copyz.subsub = userJamamR->subsub;
	
	struct etime oneofz ; 
	oneofz.hours = oneof.hours;
	oneofz.minutes = oneof.minutes;
	oneofz.seconds = oneof.seconds;
	oneofz.subseconds = oneof.subseconds;
	printf("\n The THUYIL TIME IS FROM %d:%d:%d:%d",copyz.hours,copyz.minutes,copyz.seconds,copyz.subseconds);
	//	printf(" ADDED WITH  %d:%d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds,oneof.subsub);
	struct etime newC;
	struct eetime newCC;
	shortcut(&newC,copy,oneofz,&newCC,copyz,oneof);
	printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
		userJamamR->subsub = newCC.subsub;

	
}

void arasuF(struct eetime *userJamamR,struct eetime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	//copy.subsub = userJamamR->subsub;
	
	struct eetime copyz;
	copyz.hours = userJamamR->hours;
	copyz.minutes = userJamamR->minutes;
	copyz.seconds = userJamamR->seconds;
	copyz.subseconds = userJamamR->subseconds;
	copyz.subsub = userJamamR->subsub;
	
	struct etime oneofz ; 
	oneofz.hours = oneof.hours;
	oneofz.minutes = oneof.minutes;
	oneofz.seconds = oneof.seconds;
	oneofz.subseconds = oneof.subseconds;
	printf("\n The ARASU TIME IS FROM %d:%d:%d:%d",copyz.hours,copyz.minutes,copyz.seconds,copyz.subseconds);
	//printf(" ADDED WITH  %d:%d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds,oneof.subsub);
	struct etime newC;
	struct eetime newCC;
	shortcut(&newC,copy,oneofz,&newCC,copyz,oneof);
	printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	userJamamR->hours=newCC.hours;
	userJamamR->minutes=newCC.minutes;
	userJamamR->seconds=newCC.seconds;
	userJamamR->subseconds=newCC.subseconds;
	userJamamR->subsub = newCC.subsub;
	
}


void nadaiF(struct eetime *userJamamR,struct eetime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	//copy.subsub = userJamamR->subsub;
	
	struct eetime copyz;
	copyz.hours = userJamamR->hours;
	copyz.minutes = userJamamR->minutes;
	copyz.seconds = userJamamR->seconds;
	copyz.subseconds = userJamamR->subseconds;
	copyz.subsub = userJamamR->subsub;
	
	struct etime oneofz ; 
	oneofz.hours = oneof.hours;
	oneofz.minutes = oneof.minutes;
	oneofz.seconds = oneof.seconds;
	oneofz.subseconds = oneof.subseconds;
	printf("\n The NADAI TIME IS FROM %d:%d:%d:%d",copyz.hours,copyz.minutes,copyz.seconds,copyz.subseconds);
//	printf(" ADDED WITH  %d:%d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds,oneof.subsub);
	struct etime newC;
	struct eetime newCC;
	shortcut(&newC,copy,oneofz,&newCC,copyz,oneof);
	printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
		userJamamR->subsub = newCC.subsub;

	
}


void caloonF(struct eetime *userJamamR,struct eetime oneof)
{
	struct etime copy;
	copy.hours = userJamamR->hours;
	copy.minutes = userJamamR->minutes;
	copy.seconds = userJamamR->seconds;
	copy.subseconds = userJamamR->subseconds;
	//copy.subsub = userJamamR->subsub;
	
	struct eetime copyz;
	copyz.hours = userJamamR->hours;
	copyz.minutes = userJamamR->minutes;
	copyz.seconds = userJamamR->seconds;
	copyz.subseconds = userJamamR->subseconds;
	copyz.subsub = userJamamR->subsub;
	
	struct etime oneofz ; 
	oneofz.hours = oneof.hours;
	oneofz.minutes = oneof.minutes;
	oneofz.seconds = oneof.seconds;
	oneofz.subseconds = oneof.subseconds;
	printf("\n The OON TIME IS FROM %d:%d:%d:%d",copyz.hours,copyz.minutes,copyz.seconds,copyz.subseconds);
	//	printf(" ADDED WITH  %d:%d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds,oneof.subsub);
	struct etime newC;
	struct eetime newCC;
	shortcut(&newC,copy,oneofz,&newCC,copyz,oneof);
	printf(" To %d:%d:%d:%d",newCC.hours,newCC.minutes,newCC.seconds,newCC.subseconds);
	userJamamR->hours=newC.hours;
	userJamamR->minutes=newC.minutes;
	userJamamR->seconds=newC.seconds;
	userJamamR->subseconds=newC.subseconds;
		userJamamR->subsub = newCC.subsub;

	
}
void calculatenaligai(struct TIME userJamam,struct TIME naligai, int n,struct etime *qN,struct etime *hN,struct etime *tfN,struct etime *oneN)
{
	struct TIME oon,nadai,arasu,thuyil,saavu;
	struct etime  copy,halfN,quarN,threefN;
	//for oon;
	copy.subseconds = 0;
	copy.seconds= naligai.seconds;
	copy.minutes = naligai.minutes;
	copy.hours = 0;
	
	//one naligai == copy;
	
	//half naligai
	if(copy.seconds%2!=0)
	{
		copy.subseconds = copy.subseconds+30;
		copy.seconds = copy.seconds/2;
		if(copy.subseconds>=60)
		{
			copy.subseconds = copy.subseconds - 60;
			copy.seconds = copy.seconds + 1;	
		}
		
	}
	else
	{
		copy.seconds = copy.seconds/2;
	}
	
	if(copy.minutes%2!=0)
	{
		copy.seconds = copy.seconds + 30;
		copy.minutes = copy.minutes/2;
		if(copy.seconds>=60)
		{
			copy.minutes =  copy.minutes+1;
			copy.seconds = copy.seconds-60;
		}
		
	}
	else
	{
		copy.minutes = copy.minutes/2;
	}
	
	halfN.hours = copy.hours;
	halfN.minutes = copy.minutes;
	halfN.seconds = copy.seconds;
	halfN.subseconds = copy.subseconds;	
	printf("\n \n HAlfN%d:%d:%d:%d",copy.hours,copy.minutes,copy.seconds,copy.subseconds);
	
	//quarter naligai
		if(copy.seconds%2!=0)
	{
		copy.subseconds = copy.subseconds+30;
		copy.seconds = copy.seconds/2;
		if(copy.subseconds>=60)
		{
			copy.seconds =  copy.seconds+1;
			copy.subseconds = copy.subseconds-60;
		}
	}
	else
	{
		copy.seconds = copy.seconds/2;
	}
	
	if(copy.minutes%2!=0)
	{
		copy.seconds = copy.seconds + 30;
		copy.minutes = copy.minutes/2;
		if(copy.seconds>=60)
		{
			copy.minutes =  copy.minutes+1;
			copy.seconds = copy.seconds-60;
		}
		
	}
	else
	{
		copy.minutes = copy.minutes/2;
	}
	
	quarN.hours = copy.hours;
	quarN.minutes = copy.minutes;
	quarN.seconds = copy.seconds;
	quarN.subseconds = copy.subseconds;	
	
//	printf("\n \n \n quarN %d:%d:%d:%d",quarN.hours,quarN.minutes,quarN.seconds,quarN.subseconds);
	
	//3/4naligai
	threefN.subseconds =halfN.subseconds + quarN.subseconds;
	threefN.seconds =halfN.seconds + quarN.seconds;
	threefN.minutes =halfN.minutes + quarN.minutes;
	threefN.hours =halfN.hours + quarN.hours;
	if(threefN.subseconds>=60)
	{
		threefN.seconds = threefN.seconds + 1;
		threefN.subseconds = threefN.subseconds - 60;
		
	}
	if(threefN.seconds>=60)
	{
		threefN.minutes = threefN.minutes + 1;
		threefN.seconds = threefN.seconds - 60;
		
	}
	
	if(threefN.minutes>=60)
	{
		threefN.hours = threefN.hours + 1;
		threefN.minutes = threefN.minutes - 60;
		
	}
	printf("\n%d:%d:%d:%d 3/4th",threefN.hours,threefN.minutes,threefN.seconds,threefN.subseconds);
	oon.hours = 0;
	oon.minutes = copy.minutes;
	oon.seconds = copy.seconds;
	struct etime one,oneof,oneh,onetf,two;
	
	one.subseconds = 00;
	one.seconds = naligai.seconds;
	one.minutes = naligai.minutes;
	one.hours = naligai.hours;
	//shortcut(struct etime threefN,struct etime halfN,struct etime quarN)
	
	qN->hours = quarN.hours;
	qN->minutes = quarN.minutes;
	qN->seconds = quarN.seconds;
	qN->subseconds = quarN.subseconds;
	printf("\n\n\n QN %d:%d:%d:%d",qN->hours,qN->minutes,qN->seconds,qN->subseconds);
	
	hN->hours = halfN.hours;
	hN->minutes =halfN.minutes;
	hN->seconds = halfN.seconds;
	hN->subseconds = halfN.subseconds;
	
	tfN->hours = threefN.hours;
	tfN->minutes = threefN.minutes;
	tfN->seconds = threefN.seconds;
	tfN->subseconds = threefN.subseconds;
	
	oneN->hours = one.hours;
	oneN->minutes = one.minutes;
	oneN->seconds = one.seconds;
	oneN->subseconds = one.subseconds;
	
	
//	printf("\n \n %d:%d:%d:%d",oneof.hours,oneof.minutes,oneof.seconds,oneof.subseconds);
//	printf("\n \n %d:%d:%d:%d",oneh.hours,oneh.minutes,oneh.seconds,oneh.subseconds);
//	printf("\n \n %d:%d:%d:%d",onetf.hours,onetf.minutes,onetf.seconds,onetf.subseconds);
//	printf("\n \n %d:%d:%d:%d",two.hours,two.minutes,two.seconds,two.subseconds);
	//case(n==1):
	
		
}

void shortcut(struct etime *threefN,struct etime halfN,struct etime quarN,struct eetime *res , struct eetime a , struct eetime b)
{
	threefN->subseconds =halfN.subseconds + quarN.subseconds;
	threefN->seconds =halfN.seconds + quarN.seconds;
	threefN->minutes =halfN.minutes + quarN.minutes;
	threefN->hours =halfN.hours + quarN.hours;
	res->subsub = a.subsub + b.subsub;
	
	
	
//	printf("\n %d th res->subsub %d and a.subsub is %d and b.subsub is %d",globalk,res->subsub,a.subsub,b.subsub);
//	++globalk;
	
	if(res->subsub>=60)
	{
		res->subsub = res->subsub - 60;
		threefN->subseconds = threefN->subseconds+1;
	}
	if(threefN->subseconds>=60)
	{
		threefN->seconds = threefN->seconds + 1;
		threefN->subseconds = threefN->subseconds - 60;
		
	}
	if(threefN->seconds>=60)
	{
		threefN->minutes = threefN->minutes + 1;
		threefN->seconds = threefN->seconds - 60;
		
	}
	
	if(threefN->minutes>=60)
	{
		threefN->hours = threefN->hours + 1;
		threefN->minutes = threefN->minutes - 60;
		
	}
	
	res->hours = threefN->hours;
	res->minutes = threefN->minutes;
	res->seconds = threefN->seconds;
	res->subseconds = threefN->subseconds;
	//printf("\n %d th result is %d:%d:%d:%d:%d",globalk,res->hours,res->minutes,res->seconds,res->subseconds,res->subsub);
//	ans->hours = threefN.hours;
//	ans->minutes = threefN.minutes;
//	ans->seconds = threefN.seconds;
//	ans->subseconds = threefN.subsecondsl
}
void jamam(struct TIME stopTime, struct TIME A, struct TIME *B, struct TIME *userJamam,int n)
{
	//printf("\n ******** %d %d %d ",startTime.hours,startTime.minutes,startTime.seconds);
	B->seconds = stopTime.seconds;
	B->minutes = stopTime.minutes;
	B->hours = stopTime.hours;
	
	if(n==0)
	{
		userJamam->hours = stopTime.hours;
		userJamam->minutes = stopTime.minutes;
		userJamam->seconds = stopTime.seconds;
		return ;
	}
	int i = 1;
	while(i<=5)
	{
	int e;
	
	
	B->seconds =  B->seconds + A.seconds;
	B->minutes = B->minutes + A.minutes;
	B->hours = B->hours + A.hours;
	if(B->seconds >= 60)
	{
		B->minutes = B->minutes + 1;
		B->seconds = B->seconds - 60;
	}
	if(B->minutes >= 60)
	{
		B->hours = B->hours + 1;
		B->minutes = B->minutes - 60;
	}
	if(B->hours>12)
	{
		e = B->hours%12;
	}
	else
	{
		e = B->hours;
	}
	
	if(i==n)
	{
	 if(B->hours>12)
	{
		e = B->hours%12;
	}
	else
	{
		e = B->hours;
	}
		
		
		userJamam->hours = e;
		userJamam->minutes = B->minutes;
		userJamam->seconds = B->seconds;
	}
//	printf("\n %d jamam %d %d %d ",i , e ,B->minutes,B->seconds);
	
	++i;
}
}


void jamamAddition(struct TIME stopTime, struct TIME A, struct TIME *B)
{
	//printf("\n ******** %d %d %d ",startTime.hours,startTime.minutes,startTime.seconds);
	B->seconds = stopTime.seconds;
	B->minutes = stopTime.minutes;
	B->hours = stopTime.hours;
	int i = 1;
	int e;
	if(B->hours>12)
	{
		e = B->hours%12;
	}
	else
	{
		e = B->hours;
	}
	
	
	int k = 2;
	printf("\n 0 to 1 jamam is from %d %d %d ", e ,B->minutes,B->seconds);
	while(i<=5)
	{
	int e;
//	if(i-1>2)
//	
	
	B->seconds =  B->seconds + A.seconds;
	B->minutes = B->minutes + A.minutes;
	B->hours = B->hours + A.hours;
	if(B->seconds >= 60)
	{
		B->minutes = B->minutes + 1;
		B->seconds = B->seconds - 60;
	}
	if(B->minutes >= 60)
	{
		B->hours = B->hours + 1;
		B->minutes = B->minutes - 60;
	}
	if(B->hours>12)
	{
		e = B->hours%12;
	}
	else
	{
		e = B->hours;
	}
	
	if(i==1)
	{
		printf("to %d %d %d",e ,B->minutes,B->seconds);
	}
	if(i>1)
	printf("to %d %d %d",e ,B->minutes,B->seconds);
	if(i<=4)
	printf("\n %d to %d jamam is from %d %d %d  ",i,i+1 , e ,B->minutes,B->seconds);
	
	
	//++k;
	
	++i;
}
}
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
if(stop.seconds > start.seconds){
--start.minutes;
start.seconds += 60;
}
diff->seconds = start.seconds - stop.seconds;
if(stop.minutes > start.minutes){
--start.hours;
start.minutes += 60;
}
diff->minutes = start.minutes - stop.minutes;
diff->hours = start.hours - stop.hours;

}
