#include <stdio.h>
#include <float.h> 

// Define the structure "Book"
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    

   
    printf("Input details for Book 1:\n");
    printf("Title: ");
    scanf("%s", book1.title); 
    printf("Author: ");
    scanf("%s", book1.author); 
    printf("Price: ");
    scanf("%f", &book1.price);

    // Input details for the second book
    printf("\nInput details for Book 2:\n");
    printf("Title: ");
    scanf("%s", book2.title);
    printf("Author: ");
    scanf("%s", book2.author);
    printf("Price: ");
    scanf("%f", &book2.price);

    // Input details for the third book
    printf("\nInput details for Book 3:\n");
    printf("Title: ");
    scanf("%s", book3.title);
    printf("Author: ");
    scanf("%s", book3.author);
    printf("Price: ");
    scanf("%f", &book3.price);

    // Find the most expensive book
    struct Book mostExpensive;
    if (book1.price >= book2.price && book1.price >= book3.price) {
        mostExpensive = book1;
    } else if (book2.price >= book1.price && book2.price >= book3.price) {
        mostExpensive = book2;
    } else {
        mostExpensive = book3;
    }

    // Find the lowest priced book
    struct Book lowestPriced;
    if (book1.price <= book2.price && book1.price <= book3.price) {
        lowestPriced = book1;
    } else if (book2.price <= book1.price && book2.price <= book3.price) {
        lowestPriced = book2;
    } else {
        lowestPriced = book3;
    }

    // Display information for the most expensive book
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: %.2f\n", mostExpensive.price);

    // Display information for the lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.2f\n", lowestPriced.price);

    return 0;
}
