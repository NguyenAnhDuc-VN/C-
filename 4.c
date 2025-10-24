#include<stdio.h>

struct student{
    float score;
};


// hàm nhập điểm
void enter_score(struct student *st){
    printf("Enter score \n");
    scanf("%f",&st->score);
}


// hàm in điểm
void evalue( struct student st)
{       
    int aca_per = (int)(st.score);
    switch (aca_per)
    {
        case 9:
        case 8:
        if(st.score >=8){
            printf("Excellent\n");
        }
        else{
            printf("GOOD \n");
        }
            break;

        case 6:
        if(st.score >= 6.5){
            printf("Normal \n");
        }
        else if (st.score <=6.5){
            printf("Bad \n");
        }
            break;

        case 5:
            printf("stupid \n");
            break;

        default:
            if (st.score < 5){
                printf("Very bad \n");
            }
            else
            {
                printf("Outstanding \n");
            }
            break;
    }

}


// cho lời khuyên
void get_advice( struct student st)
{
    int aca_per = (int)(st.score);
    switch (aca_per)
    {
    case 8:
        printf("Well done \n");
            break;
    
    case 6:
        printf("you need to try harder \n");
            break;
    
    default:
        printf("have to try really harder \n");
        break;
    }
};


int main(){
    struct student st;
    int choice;

    while(1)
    {
        printf("1 : Enter push");
        printf("2 : Check score");
        printf("3 : Adive");
        printf("4 : Finnish");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enter_score(&st);
            break;
        
        case 2:
            evalue(st);
            break;

        case 3:
            get_advice(st);
            break;

        case 4:
            printf("Finish! \n");
            return 0;

        default:
            printf("only choice 1 - 4 \n");
            break;
        }
    }
}