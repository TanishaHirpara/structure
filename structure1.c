#include<stdio.h>


struct student{
	int stud_id;
	char stud_name[100];
	int stud_age;
	char stud_course[100];
	char stud_city[100];
	int stud_standard;
	char stud_school[100];
	
	
};


main()

{
	int n;
	printf("please enter the number of student = " );
	scanf("%d" ,&n);
	struct student s[n];
	
	int i; for(i=0;i<n;i++)
	{
		printf("please enter student id = " );
		scanf("%d" ,&s[i].stud_id);
			printf("please enter student name = " );
		scanf("%s" ,&s[i].stud_name);
			printf("please enter student age = " );
		scanf("%d" ,&s[i].stud_age);
			printf("please enter student course = " );
		scanf("%s" ,&s[i].stud_course);
			printf("please enter student city = " );
		scanf("%s" ,&s[i].stud_city);
			printf("please enter student standard = " );
		scanf("%d" ,&s[i].stud_standard);
			printf("please enter student school = " );
		scanf("%s" ,&s[i].stud_school);

	}
	printf("\n----student details----\n " );
	for(i=0;i<n;i++)
	{
		printf("student id is = %d\n " ,s[i].stud_id);
		printf("student name is = %s\n " ,s[i].stud_name);
		printf("student age is = %d\n " ,s[i].stud_age);
		printf("student course is = %s\n " ,s[i].stud_course);
		printf("student city is = %s\n " ,s[i].stud_city);
		printf("student standard is = %d\n " ,s[i].stud_standard);
		printf("student school is = %s\n " ,s[i].stud_school);
	}
	
}
