#include <stdio.h>
#include <string.h>
struct student_details
{
    char name[100];
    int Sap_id;
    int roll_no;
    char phone_no[12];
    char email[100];
    int year;
    float sgpa[8];
};
struct student_details x[5];
struct student_details temp[5];
int student_count = 0;
void add_student()
{

    if (student_count == 5)
    {
        printf("Student limit reached\n");
        return;
    }
    printf("\n----------\n");
    printf("Enter the name of the student:");
    fgets(x[student_count].name, sizeof(x[student_count].name), stdin);
    x[student_count].name[strcspn(x[student_count].name, "\n")] = '\0';
    printf("Enter the sap id: ");
    scanf("%d", &x[student_count].Sap_id);
    printf("Enter the roll no: ");
    scanf("%d", &x[student_count].roll_no);
    printf("Enter the phone no: ");
    scanf("%s", &x[student_count].phone_no);
    printf("Enter the email id:");
    scanf("%s", &x[student_count].email);
    printf("Enter the year: ");
    scanf("%d", &x[student_count].year);
    if (x[student_count].year == 1)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Enter the sgpa of the sem %d : ", (i + 1));
            scanf("%f", &x[student_count].sgpa[i]);
        }
    }
    else if (x[student_count].year == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("Enter the sgpa of the sem %d : ", (i + 1));
            scanf("%f", &x[student_count].sgpa[i]);
        }
    }
    else if (x[student_count].year == 3)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Enter the sgpa of the sem %d : ", (i + 1));
            scanf("%f", &x[student_count].sgpa[i]);
        }
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            printf("Enter the sgpa of the sem %d : ", (i + 1));
            scanf("%f", &x[student_count].sgpa[i]);
        }
    }
    student_count++;
}
void search_student()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet.\n");
        return;
    }
    int found = 0;
    char name1[100];
    printf("Enter the name of the student: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';
    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(name1, x[i].name) == 0)
        {
            found = 1;
            printf("----Details----\n");
            printf("Name : %s\n", x[i].name);
            printf("Sap id : %d\n", x[i].Sap_id);
            printf("Roll no : %d\n", x[i].roll_no);
            printf("Phone no : %s\n", x[i].phone_no);
            printf("Email : %s\n", x[i].email);
            printf("Year: %d year\n", x[i].year);
            if (x[i].year == 1)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("Sgpa of %d sem: %0.2f\n", (j + 1), x[i].sgpa[j]);
                }
            }
            else if (x[i].year == 2)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Sgpa of %d sem: %0.2f\n", (j + 1), x[i].sgpa[j]);
                }
            }
            else if (x[i].year == 3)
            {
                for (int j = 0; j < 6; j++)
                {
                    printf("Sgpa of %d sem: %0.2f\n", (j + 1), x[i].sgpa[j]);
                }
            }
            else
            {
                for (int j = 0; j < 8; j++)
                {
                    printf("Sgpa of %d sem: %0.2f\n", (j + 1), x[i].sgpa[j]);
                }
            }
            break;
        }
    }
    printf("\n----------\n");
    if (found == 0)
    {
        printf("No student found with name of %s", name1);
    }
}
void cgpa_each_student()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    char name1[100];
    float cgpa = 0;
    int found = 0;
    printf("Enter the name of the student:");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';
    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(name1, x[i].name) == 0)
        {
            found = 1;
            if (x[i].year == 1)
            {
                for (int j = 0; j < 2; j++)
                {
                    cgpa += x[i].sgpa[j];
                }
                cgpa /= 2;
            }
            else if (x[i].year == 2)
            {
                for (int j = 0; j < 4; j++)
                {
                    cgpa += x[i].sgpa[j];
                }
                cgpa /= 4;
            }
            else if (x[i].year == 3)
            {
                for (int j = 0; j < 6; j++)
                {
                    cgpa += x[i].sgpa[j];
                }
                cgpa /= 6;
            }
            else
            {
                for (int j = 0; j < 8; j++)
                {
                    cgpa += x[i].sgpa[j];
                }
                cgpa /= 8;
            }
            break;
        }
    }
    printf("Cgpa of %s is: %0.2f\n", name1, cgpa);
    printf("\n----------\n");
    if (found == 0)
    {
        printf("No student found\n");
    }
}
void cgpa_every_student()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    float cgpa[5] = {0};
    for (int i = 0; i < student_count; i++)
    {
        if (x[i].year == 1)
        {
            for (int j = 0; j < 2; j++)
            {
                cgpa[i] += x[i].sgpa[j];
            }
            cgpa[i] /= 2;
        }
        else if (x[i].year == 2)
        {
            for (int j = 0; j < 4; j++)
            {
                cgpa[i] += x[i].sgpa[j];
            }
            cgpa[i] /= 4;
        }
        else if (x[i].year == 3)
        {
            for (int j = 0; j < 6; j++)
            {
                cgpa[i] += x[i].sgpa[j];
            }
            cgpa[i] /= 6;
        }
        else
        {
            for (int j = 0; j < 8; j++)
            {
                cgpa[i] += x[i].sgpa[j];
            }
            cgpa[i] /= 8;
        }
        printf("Cgpa of %s : %0.2f\n", x[i].name, cgpa[i]);
    }
    printf("\n----------\n");
}
void delete_student()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    char name1[100];
    printf("Enter the name of the student: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';
    int found = 10;
    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(name1, x[i].name) == 0)
        {
            found = i;
            break;
        }
    }
    if (found == 10)
    {
        printf("No student found\n");
        return;
    }
    for (int i = found; i < student_count - 1; i++)
    {
        x[i] = x[i + 1];
    }
    student_count--;
    printf("\n----------\n");
}
void record_of_all_student()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    for (int i = 0; i < student_count; i++)
    {
        printf("---------\n");
        printf("Name: %s\n", x[i].name);
        printf("Sap id: %d\n", x[i].Sap_id);
        printf("Roll no: %d\n", x[i].roll_no);
        printf("Phone no: %s\n", x[i].phone_no);
        printf("Email : %s\n", x[i].email);
        printf("Year: %d\n", x[i].year);
    }
    printf("\n----------\n");
}
void record_of_all_student_increasing_order()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    for (int i = 0; i < student_count; i++)
    {
        temp[i] = x[i];
    }
    for (int i = 0; i < student_count - 1; i++)
    {
        for (int j = 0; j < student_count - 1 - i; j++)
        {
            if (temp[j].Sap_id > temp[j + 1].Sap_id)
            {
                struct student_details a = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < student_count; i++)
    {
        printf("---------\n");
        printf("Name: %s\n", temp[i].name);
        printf("Sap id: %d\n", temp[i].Sap_id);
        printf("Roll no: %d\n", temp[i].roll_no);
        printf("Phone no: %s\n", temp[i].phone_no);
        printf("Email : %s\n", temp[i].email);
        printf("Year: %d\n", temp[i].year);
    }
    printf("\n----------\n");
}
void record_of_all_student_increasing_order_name()
{
    printf("\n----------\n");
    if (student_count == 0)
    {
        printf("No student added yet\n");
        return;
    }
    for (int i = 0; i < student_count; i++)
    {
        temp[i] = x[i];
    }
    for (int i = 0; i < student_count - 1; i++)
    {
        for (int j = 0; j < student_count - 1 - i; j++)
        {
            if (strcmp(temp[j].name, temp[j + 1].name) > 0)
            {
                struct student_details a = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < student_count; i++)
    {
        printf("---------\n");
        printf("Name: %s\n", temp[i].name);
        printf("Sap id: %d\n", temp[i].Sap_id);
        printf("Roll no: %d\n", temp[i].roll_no);
        printf("Phone no: %s\n", temp[i].phone_no);
        printf("Email : %s\n", temp[i].email);
        printf("Year: %d\n", temp[i].year);
    }
    printf("\n----------\n");
}
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n-----Student Management System-----\n");
        printf("Press 1 to add Student\n");
        printf("Press 2 to search student\n");
        printf("Press 3 to calculate the cgpa of each student\n");
        printf("Press 4 to print the cgpa of every student\n");
        printf("Press 5 to show the record of all the student\n");
        printf("Press 6 to see the record of student in increasing order of their Sap id\n");
        printf("Press 7 to see the record of student in increasing order of their name\n");
        printf("Press 8 to delete the student\n");
        printf("Press 9 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            search_student();
            break;
        case 3:
            cgpa_each_student();
            break;
        case 4:
            cgpa_every_student();
            break;
        case 5:
            record_of_all_student();
            break;
        case 6:
            record_of_all_student_increasing_order();
            break;
        case 7:
            record_of_all_student_increasing_order_name();
            break;
        case 8:
            delete_student();
            break;
        }
    }
    return 0;
}