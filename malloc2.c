#include <stdio.h>
#include <stdlib.h>
#include "function.h"
float *f(float *x,float n,float *y)
    {
    	int i;
	float s=0,t=0;
    	for (i=0;i<n;i++)
	    {
		  s=s+x[i];
		  t=t+(x[i]*x[i]);
	    }
	    y[0]=s/n;
	    y[1]=(t/n)-(s*s)/(n*n);
	    return y;
    }
