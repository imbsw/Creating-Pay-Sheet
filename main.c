#include <stdio.h>
#include <stdlib.h>

int main()
{
       float bsalary,othrs,otrate,otamount,netsalary,etf,epf,gsalary,etfp,epfp,otratep;

   printf("Enter Basic Salary:");
   scanf("%f",&bsalary);

   printf("Enter OT Hours:");
   scanf("%f",&othrs);

   printf("Enter OT Rate Presentage According To Normal Rate:");
   scanf("%f",&otratep);

   printf("Enter ETF Presentage:");
   scanf("%f",&etfp);

   printf("Enter EPF Presentage:");
   scanf("%f",&epfp);

   otrate=(othrs*(bsalary/240))*(otratep/100.0);
   otamount=otrate*othrs;

   netsalary=bsalary+otamount;
   etf=netsalary*(etfp/100);
   epf=netsalary*(epfp/100);
   gsalary=netsalary-etf-epf;

   printf("\tPAY SHEET\n");
   printf("\tNet Salary=%f\n",netsalary);
   printf("\tOT Amount=%f\n",otamount);
   printf("\tETF=%f\n",etf);
   printf("\tEPF=%f\n",epf);
   printf("\tGross Salary=%f\n",gsalary);
    return 0;
}
