#include<stdio.h>


int main(){
    float score;
    printf("Enter score: ");
    scanf("%f", &score);
    
    int aca_per = (int)(score/1);

    switch(aca_per){
        case 9:
        case 8:
            if (score > 8){
                printf("Professional");}
            else if(aca_per < 8){
                printf("Excellent");}
            break;
        case 7:
        case 6:
            if (score >= 6.5){
                printf("Good");}
            else if( aca_per < 6){
                printf("Normal");}
            break;
        default:
            if(score < 5)
                printf("Hoc ngu");
                break;
    }


    return 0;

        
    
}