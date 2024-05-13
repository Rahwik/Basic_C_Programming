#include<stdio.h>
#include<math.h>
/*Function definition to perform integration by Simpson's 1/3rd Rule */
double simpsons(double A,double f(double x,double A),double a,double b,double n){
  double h,integral,x,sum=0;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*f(x,A);
    }
    else{
      sum=sum+4*f(x,A);
    }
  }
  integral=(h/3)*(f(a,A)+f(b,A)+sum);
  return integral;
}
double f(double x, double A){
    return 1/(1-sin(A/2)*sin(A/2)*sin(x)*sin(x));
}
double T1(double A){
    return 2*M_PI*(1+pow(A/4,2));
}
double T(double f(double x,double A),double A,int n){
    double integral;
    integral=simpsons(A,f,0,M_PI/2,n);
    return 4*integral;
}
main(){
    FILE *fp=NULL;
    fp=fopen("integrationProblem2.txt","w");
    double A;
    double t,t1,diffT;
    for(A=0;A<=M_PI;A=A+0.1){
        t=T(f,A,600);
        t1=T1(A);
        diffT=(t-t1)/t*100;
        fprintf(fp,"%lf\t%lf\t%lf\t%lf\n",A,t,t1,diffT);
    }
}