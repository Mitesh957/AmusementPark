#include<stdio.h>
#include <math.h>

int main() {
    char name[50];
    char gender;
    int age;
    int food;
    int meal = 500;
    int snacks = 300;
    int drinks = 100;
    int cost=0;
    int n;
    int totalcost=0;
    printf("Enter No. of people with you including yourself :- ");
    scanf("%d",&n);

    for ( int i = 1; i <= n; i++)
    {
    printf("Please Enter your name: ");
    scanf("%s", name);

    printf("Please Enter your Gender (M/F): ");
    scanf(" %c", &gender);

    printf("Please Enter your Age: ");
    scanf(" %d", &age);

    if (gender == 'M' && age < 18) {
        printf("Welcome Mr.%s in our Amusement Park\n", name);
        printf("Your ticket will cost you 500 Rupees Mr. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = 500 + meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost = 500 + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost = 500 + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost = 500 + meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost = 500 + drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost = 500 + meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost = 500 + meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = 500;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mr. %s\n", cost, name);
        }
    } else if (gender == 'M' && age > 18 && age < 60) {
        printf("Welcome Mr.%s in our Amusement Park\n", name);
        printf("Your ticket will cost you 1000 Rupees Mr. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:-\n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = 1000 + meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost = 1000 + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost = 1000 + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost = 1000 + meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost = 1000 + drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost = 1000 + meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost = 1000 + meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = 1000;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mr. %s\n", cost, name);
        }
    } else if (gender == 'M' && age > 60) {
        printf("Welcome Mr.%s in our Amusement Park\n", name);
        printf("Your ticket is free Mr. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:\n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost = snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost = drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost = meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost = drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost = meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost = meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = 0;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mr. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mr. %s\n", cost, name);
        }
    } else if (gender == 'F' && age < 18) {
        printf("Welcome Mrs.%s in our Amusement Park\n", name);
        printf("Your ticket will cost you 350 Rupees Mrs. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mrs. %s:\n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = 350 + meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost = 350 + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost = 350 + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost = 350 + meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost = 350 + drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost = 350 + meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost = 350 + meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = 350;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mrs. %s\n", cost, name);
        }
    } else if (gender == 'F' && age > 18 && age < 60) {
        printf("Welcome Mrs.%s in our Amusement Park\n", name);
        printf("Your ticket will cost you 750 Rupees Mrs. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mrs. %s:\n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = 750 + meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost = 750 + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost = 750 + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost = 750 + meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost = 750 + drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost = 750 + meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost = 750 + meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = 750;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mrs. %s\n", cost, name);
        }
    } else if (gender == 'F' && age > 60) {
        printf("Welcome Mrs.%s in our Amusement Park\n", name);
        printf("Your ticket is free Mrs. %s\n", name);
        printf("Would you like to add some food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mrs. %s:\n", name);
        scanf(" %d", &food);

        if (food == 1) {
            cost = meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost = snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost = drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost = meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost = drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost = meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost = meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        }
        printf("Would you like to add anything extra food items and beverages (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No) Mr. %s:- \n", name);
        scanf(" %d", &food);
        if (food == 1) {
            cost += meal;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 2) {
            cost += snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 3) {
            cost += drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 4) {
            cost += meal + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 5) {
            cost += drinks + snacks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 6) {
            cost += meal + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else if (food == 7) {
            cost += meal + snacks + drinks;
            printf("So your total cost will %d Mrs. %s\n", cost, name);
        } else {
            cost = cost;
            printf("So your New total cost will %d Mrs. %s\n", cost, name);
        }
    } else {
        printf("You Entered wrong credentials %s", name);
        continue;
    }
    totalcost += cost;  // Accumulate the cost for each person to the total cost
    }
        printf("Would you like to delist any item? (1-Yes/2-No): ");
        int delistOption;
        scanf("%d", &delistOption);

        if (delistOption == 1) {
            printf("Which extra food items and beverages you want to Delist from the cart (1-Meal/2-Snacks/3-Drinks/4-1&2/5-2&3/6-1&3/7-ALL/8-No):- \n");
             scanf(" %d", &food);
             if (food == 1) {
            totalcost -= 500;
        } else if (food == 2) {
            totalcost -= 300;
        } else if (food == 3) {
           totalcost -= 100;
        } else if (food == 4) {
            totalcost -= 800;
        } else if (food == 5) {
            totalcost -= 400;
        } else if (food == 6) {
            totalcost -= 600;
            
        } else if (food == 7) {
            totalcost -= 900;
            
        } else {
            totalcost -= 0;
            
        }
            printf("Item delisted. Updated total cost for all %d people: %d\n", n, totalcost);
        }
        if (n >= 2 && n < 4) {
    totalcost -= round(totalcost * 0.10);
} else if (n >= 4 && n < 10) {  
    totalcost -= round(totalcost * 0.30);
}else if (n >= 10) {  
    totalcost -= round(totalcost * 0.50);
} else {
    totalcost = totalcost;
}
        
     printf("Final total cost for all %d people: %d\n", n, totalcost);
    return 0;
}
