#include <stdio.h>  
#include "sds.h"
#include "adlist.h"
#include "dict.h"
#include "redis-main.h"

int main()  
{  
      // int n, i, sum = 0;  
      // printf("please input number:");  
      // scanf("%d",&n);  
      // for(i = 1;i<=n; i++ ) sum += f(i);  
      // printf("sum=%d\n", sum);  
       	printf("------   redis main   --------\n");
	test_sds();
       	return 0;  
}

void test_sds()
{
   printf("\n\n     ====== tes_sds =======\n"); 

   sds m_sds = sdsnewlen("hello",5);
   m_sds = sdscat(m_sds,",tony");
   printf("the string[%s]\n",m_sds);

   sds t_name = sdsnew("config");
   
   sdsfree(t_name);
   sdsfree(m_sds);
} 
