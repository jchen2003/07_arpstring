#include <stdio.h>
#include <string.h>

int avg(int *arr, int len){
    int i;
    int sum = 0;
    for(i = 0; i < len; i++){
        sum+=arr[i];
    }
    return sum/len;
}

void copy(int *from, int *to, int len){
    int i;
    for (i=0; i < len; i++){
        to[i] = from[i];
    }
}

int slen(char *x){
    int len = 0;
    int i = 0;
    while(x[i]){
        len++;
        i++;
    }
    return len;
}

int main(){
    int ray[3];
    ray[0] = 5;
    ray[1] = 4;
    ray[2] = 3;

    int arr[3];
    int *arrp = arr;
    copy(ray,arr,3);
    // should be 4
    printf("%d\n\n",avg(ray,3));

    int i;
    for(i = 0; i < 3; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    // should be 5
    printf("%d\n",slen("HAPPY"));

    //testing out string functions
    char x[6]; // additional byte for terminating byte
    strcpy(x,"HAPPY");
    printf("%s\n",x);

    char s[11] = "Hello "; // 11 so there's exactly enough space for the full str
    printf("%s\n",strcat(s,"there"));

    // compares s1 to s2
    printf("%d\n", strcmp("Hello", "Happy"));

    //strchr is for FIRST occurrance of string. strrchr is LAST
    printf("%p\n", strchr("kappa",'a'));
    printf("%p\n", strrchr("kappa",'a'));

}