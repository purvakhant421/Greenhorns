
#include <stdio.h>

int main()
{
    float basic, da, hra, ta, gross_salary;
    
    
    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);
    
    
    if (basic <= 100){
        da = (basic * 5) / 100;
        hra = (basic * 10) / 100;
        ta = (basic * 8) / 100;
    }
    else if (basic <= 400){
        da = (basic * 12) / 100;
        hra = (basic * 18) / 100;
        ta = (basic * 8) / 100;
    }
    else{
        da = (basic * 15) / 100;
        hra = (basic * 20) / 100;
        ta = (basic * 8) / 100;
    }
    
    
    gross_salary = basic + da + hra +ta;
    
    
    printf("Gross salary of employee: %.2f", gross_salary);
}
