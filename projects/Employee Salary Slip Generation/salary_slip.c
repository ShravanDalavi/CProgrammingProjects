#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float allowances;
    float deductions;
};

void generateSalarySlip(struct Employee emp) {
    float net_salary = emp.basic_salary + emp.allowances - emp.deductions;
    
    printf("********************************\n");
    printf("        Salary Slip             \n");
    printf("********************************\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic_salary);
    printf("Allowances    : %.2f\n", emp.allowances);
    printf("Deductions    : %.2f\n", emp.deductions);
    printf("Net Salary    : %.2f\n", net_salary);
    printf("********************************\n");
}

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic_salary);
    
    printf("Enter Allowances: ");
    scanf("%f", &emp.allowances);
    
    printf("Enter Deductions: ");
    scanf("%f", &emp.deductions);

    generateSalarySlip(emp);

    return 0;
}
