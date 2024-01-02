#include<stdio.h>


struct employee {
	int employee_id;
	char employee_name[100];
	int employee_age;
	char employee_role[100];
	char employee_city[100];
	char employee_experience[800];
	char employee_company_name[100];
	
	
};


main()

{
	int n;
	printf("please enter the number of employee = " );
	scanf("%d" ,&n);
	struct employee s[n];
	
	int i;
    for(i=0;i<n;i++)
	{
		printf("please enter employee id = " );
		scanf("%d" ,&s[i].employee_id);
			printf("please enter employee name = " );
		scanf("%s" ,&s[i].employee_name);
			printf("please enter employee age = " );
		scanf("%d" ,&s[i].employee_age);
			printf("please enter employee role = " );
		scanf("%s" ,&s[i].employee_role);
			printf("please enter employee city = " );
		scanf("%s" ,&s[i].employee_city);
			printf("please enter employee experience = " );
		scanf("%s" ,&s[i].employee_experience);
			printf("please enter employee company name = " );
		scanf("%s" ,&s[i].employee_company_name);

	}
	printf("\n----employee details----\n " );
	for(i=0;i<n;i++)
	{
		printf("employee id is = %d\n " ,s[i].employee_id);
		printf("employee name is = %s\n " ,s[i].employee_name);
		printf("employee age is = %d\n " ,s[i].employee_age);
		printf("employee role is = %s\n " ,s[i].employee_role);
		printf("employee city is = %s\n " ,s[i].employee_city);
		printf("employee experience is = %s\n " ,s[i].employee_experience);
		printf("employee company name is = %s\n " ,s[i].employee_company_name);
	}
	
}
