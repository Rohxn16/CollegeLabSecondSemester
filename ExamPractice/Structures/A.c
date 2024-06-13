#include <stdio.h>
#include <string.h>


// int arr[50] = {1,2,34,5,5,6,6.02} // [4 4 4 4]

/**
 * student{
 *      char name [50];
 *      int roll;
 *      float gpa;
 * }
 */

struct str1{
    int a;
    char name[20];
};

// typedef, this is used as an alias for the structure
typedef struct str2{
    int x;
}
str2;

typedef struct p{
    int x,y;
} k;

// nested structures

struct parent{
    int member1;

    struct child {
        int memberstr1;
        char memberstr2;
    };
};


// Unions are the same as structures but the memory allocations are done contiguous

typedef union student{
    int rollno;
    char name[50];
    float weight;
} ref;

struct slaves{
    int number;
    char master_name[100];
    float weight;
    int lashes;

};


void main(){
    struct str1 var = {10,"Rohan Dey"};
    printf("The memebers of the first struct are: %d \n %s \n",var.a,var.name);

    str2 var2 = {12};
    printf("The value present in str2 is %d \n",var2.x);

    struct p p = {1,2};
    k k1 = p;
    printf("%d\n",k1.x);

    // the union can be accessed the same way as the array
    union student rohan = {19,"Rohan Dey",58.5};
    ref student_reference = rohan;

    // :: int arr[30]

    struct slaves mySlaves[2];

    mySlaves[0].number = 1;
    mySlaves[0].weight = 80;
    mySlaves[0].lashes = 100;
    strcpy(mySlaves[0].master_name,"Rohan");

    mySlaves[1].number = 2;
    mySlaves[1].weight = 70;
    mySlaves[1].lashes = 10;
    strcpy(mySlaves[0].master_name,"Agniv");
    


}