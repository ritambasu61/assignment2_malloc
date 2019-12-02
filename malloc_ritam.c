#include <stdio.h>
#include <stdlib.h>
//defining the function
float *f(float *x,float n,float *y)
    {
    	int i;float s=0,d=0;
    	for (i=0;i<n;i++)
	    {
		  s=s+x[i];d=d+(x[i]*x[i]);
	    }
	    y[0]=s/n; y[1]=(d/n)-(s*s)/(n*n);
	    return y;
    }
int main()
{
	int i;float n=100,y[100];float *ptr;ptr=(float*)malloc(n*sizeof(float));
	if (ptr==NULL)
	{
		printf("Memory not allocated.\n");
	}
	else
	{
		printf("Memory successfully allocated.\n");
	
	for (i=0;i<n;i++)
	{
		ptr[i]=(i+1)*(i+1);
	}

	float *r=f(ptr,100,y);
	printf("The mean is:  %f\nThe varience is:  %f\n",r[0],r[1]);
	free(ptr);
        printf("Memory is cleared");
	
	}
	return 0;
}
