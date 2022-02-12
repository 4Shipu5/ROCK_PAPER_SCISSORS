#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// 1 == Win , 0 == we Tied , -1 == Lose
int ifReck() {
    
    int ch;
    printf("1 : Rock\n2 : Cut\n3 : Paper\n");
    scanf("%d",&ch);
    
    if (ch != 1 && ch != 2 && ch != 3) {
        printf("This Key is Not Here !\n");
    }else {
        srand(time(0));
        int Robot = rand() % 3 + 1;
        if (ch == 3) { // Paper
            if (Robot == 1)      {  printf("Robot is Using : Rock\n");  return 1;}
            else if (Robot == 2 ){  printf("Robot is Using : Scissors\n"); return -1;}
            else if (Robot == 3) { printf("Robot is Using : Paper\n");  return 0;}
        }else if (ch == 2) { // Cut
            if (Robot == 1)      {  printf("Robot is Using : Rock\n"); return -1;}
            else if (Robot == 2 ){  printf("Robot is Using : Scissors\n"); return 0;}
            else if (Robot == 3) {  printf("Robot is Using : Paper\n");  return 1;}
        }else if (ch == 1) { // Rock 
            if (Robot == 1)      {   printf("Robot is Using : Rock\n"); return 0;}
            else if (Robot == 2 ){   printf("Robot is Using : Scissors\n"); return 1;}
            else if (Robot == 3) {  printf("Robot is Using : Paper\n"); return -1;}
        }
    }
    
}
// 3 = Paper 2 = Cut 1 = Rock
// 1 > 2 # 1 < 3 # 1 == 1
// 2 > 3 # 2 < 1 # 2 == 2
// 3 > 1 # 3 < 2 # 3 == 3
int main() {
    int res = ifReck();
    if (res == 1) {
        printf("You Win\n");
    }else if (res == 0){
        printf("We Tied\n");
    }else if (res == -1) {
        printf("You Lose\n");
    }
    system("pause");
    return 0;
}
