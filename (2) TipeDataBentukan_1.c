#include <stdio.h>
struct data{
      char nama[50],
           jurusan[50],
           email[50],
           password[15];   
}d;

int main(){
    printf("Sign In");
    printf("Email\t: ");
    gets(d.email);
    printf("Password\t: ");
    gets(d.password);
    
    
}
