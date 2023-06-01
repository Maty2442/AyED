#include <iostream>
#include <math.h>
/* Comentario en más
de una línea */
int main()
{
// cout y endl están declaradas en iostream
 using namespace std; // no hace falta poner std:: as ique nda usa esto que s mas facil
 int n,i;
 double pi{0};
n=900000;

for(i=0;i<n;++i){
pi+= (pow((-1),i))/(2*i+1);
}
pi*=4;
cout.precision(7);
cout<<"El numero Pi es aproximadamente: "<<pi<<endl;


return 0;


}

