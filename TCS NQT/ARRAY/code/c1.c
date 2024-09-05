#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

char** Sorter(char** WebPage, int* Backlinks, int N, int* out_n) {
    // Create a structure to hold webpage title, backlink count, and original order
    struct Webpage {
        char* title;
        int backlinks;
        int original_order;
    };

    // Create an array of structures to store webpage information
    struct Webpage* webpages = (struct Webpage*)malloc(N * sizeof(struct Webpage));
    
    // Initialize the webpages array with webpage titles, backlinks, and original order
    for (int i = 0; i < N; i++) {
        webpages[i].title = WebPage[i];
        webpages[i].backlinks = Backlinks[i];
        webpages[i].original_order = i;
    }

    // Sort the webpages array based on backlinks count in descending order
    // Maintain the original order for pages with the same backlink count
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (webpages[i].backlinks < webpages[j].backlinks || 
                (webpages[i].backlinks == webpages[j].backlinks && webpages[i].original_order > webpages[j].original_order)) {
                // Swap the two webpages
                struct Webpage temp = webpages[i];
                webpages[i] = webpages[j];
                webpages[j] = temp;
            }
        }
    }

    // Extract the sorted webpage titles into a new array
    char** sorted_webpages = (char**)malloc(N * sizeof(char*));
    for (int i = 0; i < N; i++) {
        sorted_webpages[i] = webpages[i].title;
    }

    // Assign the size of the sorted array to out_n variable
    *out_n = N;

    // Free memory used by the webpages array
    free(webpages);

    // Return the sorted array
    return sorted_webpages;
}

// int main() {
//     int out_n;
//     int N;
//     scanf("%d", &N);
//     int i_WebPage;
//     char **WebPage=(char **)malloc(sizeof(char*)*(N));
//     for(i_WebPage = 0; i_WebPage < N; i_WebPage++)
//     {
//     	WebPage[i_WebPage]=(char *)malloc(51200 * sizeof(char));
//     	scanf(" %s", WebPage[i_WebPage]);
//     }
//     int i_Backlinks;
//     int *Backlinks = (int *)malloc(sizeof(int)*(N));
//     for(i_Backlinks = 0; i_Backlinks < N; i_Backlinks++)
//     	scanf("%d", &Backlinks[i_Backlinks]);

//     char** out_ = Sorter(WebPage, Backlinks, &out_n);
//     for(int i_out_ = 0; i_out_ < out_n; i_out_++)
//     	printf("%s\n", out_[i_out_]);
// }
int main() {
    int out_n;
    int N;
    scanf("%d", &N);

    // Allocate memory for WebPage and Backlinks arrays
    char** WebPage = (char**)malloc(N * sizeof(char*));
    int* Backlinks = (int*)malloc(N * sizeof(int));

    // Input webpage titles and backlinks count
    for (int i = 0; i < N; i++) {
        WebPage[i] = (char*)malloc(51200 * sizeof(char));
        scanf("%s", WebPage[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &Backlinks[i]);
    }

    // Call the Sorter function to get sorted webpages
    char** sorted_webpages = Sorter(WebPage, Backlinks, N, &out_n);

    // Print the sorted webpage titles
    for (int i = 0; i < out_n; i++) {
        printf("%s\n", sorted_webpages[i]);
    }

    // Free allocated memory
    for (int i = 0; i < N; i++) {
        free(WebPage[i]);
    }
    free(WebPage);
    free(Backlinks);
    free(sorted_webpages);

    return 0;
}