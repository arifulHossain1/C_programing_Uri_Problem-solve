#include <stdio.h>

int main()
{
        int i, a[100005], largest, n;
        for (i=1;i<=100;i++)
		scanf("%d",&a[i]);
        largest=a[0];
        n=1;
        for (i=2;i<=100;i++)
        {
		    if(largest<a[i]){
			largest=a[i];
			n=i;
		    }
	    }
        printf("%d\n",largest);
        printf("%d\n",n);
        return 0;
}
