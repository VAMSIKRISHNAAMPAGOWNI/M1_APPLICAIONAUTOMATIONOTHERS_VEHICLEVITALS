#include <stdio.h>
#include <conio.h>
#include <time.h>
#define CAR 1
#define SCOOTER 2
#include <stdlib.h>
FILE *fptr1;
struct vehicle
{      	int num,row,col,type ;
	struct tm *at;};
struct vehicle *car[2][10] ;
struct vehicle *scooter[2][10] ;
int parkinfo[4][10];
int vehcount,carcount,scootercount;
void display();
void changecol( struct vehicle * );
struct vehicle * add(int,int,int,int);
void del(struct vehicle *);
void getfreerowcol(int, int *);
void getrcbyinfo(int,int,int *);
void show();
int randint();
int backupw();
int backupr();
struct vehicle * addonstart(int,int,int,int);
void total_bill(int,struct tm *ct1,struct tm *ct2);
void get_arrival_time(int);
void changecol( struct vehicle *v)
{	v->col--;}
struct tm* datetime()
{	time_t ts;
	struct tm *ct;
	ts = time(NULL);
	ct = localtime(&ts);
	return ct ;}
int insertrecord(int veh,int type,int row,int col, struct tm *ct)
{ 	FILE *fptr;
	fptr = fopen("arival.dat", "a");
      if (fptr == NULL)    {
	printf("File Does not Exists \n");
	return 0 ;         }
    fprintf(fptr,"\n");        fprintf(fptr,"%d ",veh);
    fprintf(fptr,"%d ",type);
    fprintf(fptr,"%d ",row);
    fprintf(fptr,"%d ",col);
    fprintf(fptr,"%d/%d/%d  ",
    ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);
    fprintf(fptr,"%d:%d:%d  ",
    ct->tm_hour, ct->tm_min, ct->tm_sec);
    fclose(fptr);               return 0;}
int insertrecord2(int veh, struct tm *ct)
{            FILE *fptr;
    fptr = fopen("depart.dat","a");
	if (fptr == NULL)    {
	printf("File Does not Exists \n");
	return 0 ;           }
    fprintf(fptr,"\n");
    fprintf(fptr,"%d ",veh);
    fprintf(fptr,"%d/%d/%d  ",ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);
    fprintf(fptr,"%d:%d:%d  ",ct->tm_hour, ct->tm_min, ct->tm_sec);
    fclose(fptr);                 return 0;
}
void get_arrival_time(int num){
    int veh,type,row,col,mon,day,year,hour,min,sec,mon2,day2,year2,hour2,min2,sec2;
    int tsec1,tsec2,tsec3,mon1,day1,year1,hour1,min1,sec1;
    int mon3,day3,year3,hour3,min3,sec3,secnd,minute,hours;
    int secc,temp1,temp2,temp3,temp4;
    FILE *fptr;                 fptr = fopen("arival.dat","r");
    if (fptr == NULL)           {
	printf("File Does not Exists \n");    }
 while(!feof(fptr))                             {
	fscanf(fptr,"\n");
	fscanf(fptr,"%d ",&veh);
	fscanf(fptr,"%d ",&type);
	fscanf(fptr,"%d ",&row);
	fscanf(fptr,"%d ",&col);
	fscanf(fptr,"%d/%d/%d  ",&day,&mon,&year);
	fscanf(fptr,"%d:%d:%d  ",&hour, &min, &sec);
   if(veh == num)                                      {
     day2 = day;
     mon2 = mon;         year2 = year;
     hour2 = hour;       min2 = min;
     sec2 = sec ;      } }
 fclose(fptr);
    fptr1 = fopen("depart.dat", "r");
    if (fptr1 == NULL)      {
	printf("File Does not Exists \n");    }
while(!feof(fptr1)) {
     fscanf(fptr1,"\n");
     fscanf(fptr1,"%d ",&veh);
     fscanf(fptr1,"%d/%d/%d  ",&day1, &mon1, &year1);
     fscanf(fptr1,"%d:%d:%d  ",&hour1, &min1, &sec1);
    if(veh == num)     {
     day3 = day1;       mon3 = mon1;     year3 = year1;
     hour3 = hour1;                      min3 = min1; sec3 = sec1 ;    } }
 fclose(fptr1);
      tsec1 =  sec3;            tsec1 += min3*60;
      tsec1 += (hour3*60)*60;    tsec2 =  sec2;
      tsec2 += min2*60;          tsec2 += (hour2*60)*60;
      tsec3 = tsec1 - tsec2 ;      secnd = tsec3 % 60 ;
      temp1 = tsec3 - secnd ;      temp2 = temp1/60 ;
      minute = temp2 % 60 ;        temp4 = temp2 - minute ;
      hours = temp4 /60 ;
      printf("You Parked the Vehicle for %d:%d:%d",hours,minute,secnd); }
int randint()                       {
    int r ;
    srand(time(NULL));                 r = rand() % 20;
    return r ;                     }
void finesheet(int veh,int type,int row,int col, struct tm *ct){
FILE *fptr;	fptr = fopen("finesheet.dat", "a");
	if (fptr == NULL)	    {
		printf("File Does not Exists \n");	    }
    fprintf(fptr,"\n");          fprintf(fptr,"%d ",veh);
    fprintf(fptr,"%d ",type);    fprintf(fptr,"%d ",row);
    fprintf(fptr,"%d ",col);     fprintf(fptr,"%d/%d/%d  ",ct->tm_mday, ct->tm_mon + 1, ct->tm_year+1900);
    fprintf(fptr,"%d:%d:%d  ",ct->tm_hour, ct->tm_min, ct->tm_sec);
    fprintf(fptr,"%d ",50);      fclose(fptr);            }

int historyrec(int val)      {
  FILE *fptr;                  char strg;
if(val==1)
	fptr = fopen("arival.dat","r");
else if(val ==2)
	fptr = fopen("depart.dat","r");
else if(val==3)
	fptr = fopen("finesheet.dat","r");
else                         {
	printf("Invalid Input");
	return 0;            }
    if (fptr == NULL)            {
	printf("File Does not Exists \n");
	return 0 ;               }
strg = getc(fptr);
while(!feof(fptr))
{	printf("%c",strg);
	strg = getc(fptr);}
return 0;                 }
int backupw(){
    int r,c ;    FILE *fptr;
    fptr = fopen("backupwr.dat", "w");
    if (fptr == NULL)                     {
	printf("File Does not Exists \n");
	return 0 ;                        }
	   for(r=0;r<4;r++)
   for(c=0;c<10;c++)    {
    fprintf(fptr,"\n");
    fprintf(fptr,"%d ",parkinfo[r][c]);
    fprintf(fptr,"%d ",r);
    fprintf(fptr,"%d ",c);
    fprintf(fptr,"%d ",vehcount);
    fprintf(fptr,"%d ",carcount);
    fprintf(fptr,"%d ",scootercount);    }
fclose(fptr);                 return 0;}
int backupr()                           {
      int r,c,rr,cc,veh,carrr,scoot,numb;
      int park[4][10];       FILE *fptr;
      fptr = fopen("backupwr.dat","r");
      if(fptr == NULL)       {
	printf("File Does not Exists \n");
	return 0 ;           }
   for(r=0;r<4;r++)
   for(c=0;c<10;c++)              {
      fscanf(fptr,"\n");
      fscanf(fptr,"%d ",&park[r][c]);
      numb=park[r][c];
      fscanf(fptr,"%d ",&rr);
      fscanf(fptr,"%d ",&cc);
      fscanf(fptr,"%d ",&veh);
      fscanf(fptr,"%d ",&carrr);
      fscanf(fptr,"%d ",&scoot);
 if(numb!=0)                    {
  if(r == 0||r == 1)           	car[r][c]=addonstart(1,numb,r,c);
  else                         	scooter[r][c]=addonstart(2,numb,r,c);
 }                              }
 fclose(fptr);                  return 0;}
struct vehicle * add(int t,int num,int row,int col){
    struct vehicle *v;                                 int r;
    v=(struct vehicle *)malloc(sizeof(struct vehicle));
    v->type=t;
    v->row=row;               v->col=col;
    if (t==CAR)          	   carcount++;
    else
	   scootercount++;
	   vehcount++;
	   parkinfo[row][col]=num;
	   v->at=datetime();
	   insertrecord(num,t,row,col,datetime());
	   backupw(t);
	   r = randint();
	  if(r<5)        	  {
	  printf("\a");  	  printf("\a");
	  finesheet(num,t,row,col,datetime());	  }
return v;                                     }
struct vehicle * addonstart(int t,int num,int row,int col){
    struct vehicle *v;
    int r;
    v = (struct vehicle *)malloc(sizeof(struct vehicle));
    v -> type=t;    v -> row=row;    v -> col=col;
	  if (t==CAR)   	      carcount++;
	  else          	      scootercount++;
	      vehcount++ ;
	      parkinfo[row][col] = num ;
return v ;              }
void del ( struct vehicle *v){
  int c;                       parkinfo[v -> row][v -> col] = 0;
  if (v->type==CAR)
	  carcount--;
  else          	  scootercount--;
	  vehcount-- ;
	  backupw();}
void getfreerowcol ( int type, int *arr ){
  int r, c,fromrow=0,torow=2;
  if(type==SCOOTER)                        {
    fromrow+=2;
    torow+=2;                              }
	for(r=fromrow;r<torow;r++)       	{
		for (c=0;c<10;c++)       {       if (parkinfo[r][c]==0)		{
				arr[0] = r; arr[1] = c;
				return;     }	}}

	if (r==2||r==4)    	{
	arr[0] = -1 ;      	arr[1] = -1 ;	}}
void getrcbyinfo(int type,int num,int *arr)       {
  int r,c,fromrow=0,torow=2;  if (type==SCOOTER)	{
	    fromrow+=2;
	    torow+=2;                           	}

	for (r=fromrow;r<torow;r++)         	{
		for (c=0;c<10;c++)		{
			if (parkinfo[r][c]==num)     {				arr[0]=r;
				arr[1]=c;  return ;}}	}
	if(r==2||r==4)                    	{
		arr[0]=-1;    		arr[1]=-1;	}}
void display(){
  int r,c;
  printf ("Cars ->\n");
  for(r=0;r<4;r++)  {
    if(r==2)
	  printf("Scooters ->\n");
	  for ( c = 0 ; c < 10 ; c++ )
	  printf ( "%d\t", parkinfo[r][c] ) ;
	  printf ( "\n" ) ;  }}
void main(){
	int opt,choice,type,number,row=0,col=0,i,tarr[2],finish=1;
	backupr();
	system ("cls");
	while ( finish )	{
		system("cls");
		printf ("\nCar Parking\n");
		printf ("1. Arrival of a Vehicle\n");
		printf ("2. Total no. of Vehicles Parked\n");
		printf ("3. Total no. of Cars Parked\n");
		printf ("4. Total no. of Scooters Parked\n");
		printf ("5. Display Order of Parked Vehicles\n");
		printf ("6. Departure of Vehicle\n");
		printf ("7. Check History\n");
		printf ("8. Exit\n");
		scanf ("%d", &choice);
		switch (choice)		{
		case 1:
		  system("cls");
		  printf("\nADD: \n");		  type = 0;
		  while (type != CAR && type != SCOOTER)		  {
		  printf ("Enter Vehicle Type (1- Car  2- Scooter): ");
		  scanf ("%d",&type);
		  if(type!=CAR&&type!=SCOOTER)
		  printf("\nInvalid Vehicle Type.\n");  		  }
		  printf("Enter Vehicle Number: " );
		  scanf("%d", &number ) ;
		  if(type == CAR || type == SCOOTER)    		  {
		    getfreerowcol(type, tarr);
		    if(tarr[0]!=-1 && tarr[1]!=-1)      			  {
			  row = tarr[0] ;               			  col = tarr[1] ;
		    if(type == CAR)
			car[row][col] =  add(type, number, row, col);
		    else
			scooter[row-2][col]=add(type,number,row,col);   }
		   else           		    {
		      if ( type == CAR )
			printf ( "\nNo Parking Slot free to Park a CAR\n" ) ;
		      else
			printf ( "\nNo Parking Slot free to Park a SCOOTER\n" ) ; }	}
		  else		  {
		    printf ( "Invalid Type\n" );		    break;		  }
			  printf( "\nPress any key to Continue..." );
			  getch();      break ;
		case 2 :     system ( "cls" ) ;
			  printf ( "Total Vehicles Parked: %d\n", vehcount ) ;
			  printf ( "\nPress any key to Continue..." ) ;
			  getch( ) ; 			  break ;
		case 3 :   system ( "cls" ) ;
			  printf ( "Total Cars Parked: %d\n", carcount ) ;
			  printf ( "\nPress any key to Continue..." ) ;
			  getch( ) ; 			  break ;
		case 4 :   system ( "cls" ) ;
			  printf ( "Total Scooters Parked: %d\n", scootercount ) ;
			  printf ( "\nPress any key to Continue..." ) ;
			  getch( ) ; 			  break ;
		case 5 :   			  system ( "cls" ) ;
			  printf ( "Display\n" ) ;
			  display( ) ;
			  printf ( "\nPress any key to Continue..." ) ;
			  getch( ) ; 			  break ;
		case 6 :   system ( "cls" ) ;
			  printf ( "Departure\n" ) ;
			  type = 0 ;
			  while ( type != CAR && type != SCOOTER )  {
			  printf ( "Enter Vehicle Type (1- Car  2- Scooter ): \n" ) ;
			  scanf ( "%d", &type ) ;
			  if ( type != CAR && type != SCOOTER )
			   printf ( "\nInvalid Vehicle type.\n" ) ; 			  }
			  printf ( "Enter Number: "  ) ;      scanf ( "%d", &number ) ;
			  if ( type == CAR || type == SCOOTER )		     {				getrcbyinfo ( type, number, tarr ) ;
				if ( tarr[0] != -1 && tarr[1] != -1 )	{
				    insertrecord2(number,datetime());
				    get_arrival_time(number);    col = tarr [1] ;
			      if ( type == CAR )     {
				row = tarr [0] ;del ( car [row][col] ) ;
				    for ( i = col ; i < 9 ; i++ )				     {
				     car[row][i] = car[row][i + 1] ;    }
				free ( car[row][i] ) ;	car[row][i] = NULL ; }      else     {
				row = tarr[0] - 2 ;
				  if ( ! ( row < 0 ) )  {
				   del ( scooter[row][col] ) ;
				   for ( i = col ; i < 9 ; i++ )  {
				   scooter[row][i] = scooter[row][i + 1] ;  }
				 scooter[row][i] = NULL ;   }     }   }
	      else       {
		 if ( type == CAR )
		  printf ( "\nInvalid Car Number, or a car with such number has not been parked here.\n" ) ;
		 else
		  printf ( "\nInvalid Scooter Number, or a Scooter with such number has not been parked here.\n" );}}
	  printf ( "\nPress any key to Continue..." ) ;
	  getch( ) ;  break ;
	  case 8 :
	  system ( "cls" ) ;
	  for ( row = 0 ; row < 2 ; row++ ) {
	    for ( col = 0 ; col < 10 ; col++ )   {
	      if ( car[row][col] -> num != 0 )free ( car[row][col] ) ;
	      if ( scooter[row][col] -> num != 0 )  free ( scooter[row+2][col] ) ;
	    }      }  finish = 0 ;    getch();    break ;
	    case 7 :
		  system ( "cls" ) ;
		  printf ( "RECORD TABLES\n" ) ;
		  printf ( "Press 1 - Arrival History\n" ) ;
		  printf ( "Press 2 - Departure History\n" ) ;
		  printf ( "Press 3 - Fine Sheet\n" ) ;
		  scanf ( "%d", &opt ) ;       historyrec(opt);
		  printf ( "\nPress any key to Continue..." ) ;  getch();
		  break ;   }	}  getch();}
