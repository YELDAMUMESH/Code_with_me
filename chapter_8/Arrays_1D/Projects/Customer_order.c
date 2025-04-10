#include<stdio.h>
# define items 3

const int dishes_price[items]={30,35,40};
const char* dishes_names[items]={"Upma","Dosa","Puri"};

int main()
{
    int total_ordered;
    printf("Please enter total number of items ordered : ");
    scanf("%d",&total_ordered);

    int customer_order[total_ordered];

    printf("Enter dishes ordered (1- Upma) (2- Dosa) (3- Puri): ");

    for(int i=0;i<total_ordered;i++)
    {
        scanf("%d",&customer_order[i]);
    }


    int dishes_count[items]={0};

    for(int i=0;i<total_ordered;i++)
    {
        int dish_id = customer_order[i];
        if(dish_id>=1 && dish_id<=items)
        {
            dishes_count[dish_id-1]++;
        }
        else
        {
            printf("Invalid dish id %d (ignored)\n",dish_id);
        }

    }

    int total_cost=0;

    for(int i=0;i<items;i++)
    {
        if(dishes_count[i]>0)
        {
            int cost =dishes_price[i]*dishes_count[i];
            printf("Cost of %s(%d) X %d = %d\n",dishes_names[i],dishes_price[i],dishes_count[i],cost);
            total_cost+=cost;
        }
    }
    printf("Total cost of all dishes = %d\n",total_cost);
    return 0;
}







