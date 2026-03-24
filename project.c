#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Function to check if page is present in frames
int isPagePresent(int frames[], int frameCount, int page) {
    for (int i = 0; i < frameCount; i++) {
        if (frames[i] == page)
            return 1;
    }
    return 0;
}

// Function to display current frame status
void displayFrames(int frames[], int frameCount) {
    for (int i = 0; i < frameCount; i++) {
        if (frames[i] == -1)
            printf(" - ");
        else
            printf(" %d ", frames[i]);
    }
    printf("\n");
}

int main() {
    int pages[MAX], frames[MAX];
    int n, frameCount;
    int pageFaults = 0;
    int position = 0;

    // Input section
    printf("=============================================\n");
    printf("   DEMAND PAGING SIMULATION (FIFO METHOD)\n");
    printf("=============================================\n\n");

    printf("Enter total number of pages: ");
    scanf("%d", &n);

    printf("Enter the page reference string:\n");
    for (int i = 0; i < n; i++) {
        printf("Page %d: ", i + 1);
        scanf("%d", &pages[i]);
    }

    printf("\nEnter number of frames: ");
    scanf("%d", &frameCount);

    // Initialize frames to -1 (empty)
    for (int i = 0; i < frameCount; i++) {
        frames[i] = -1;
    }

    printf("\n=============================================\n");
    printf("Page\t|\tFrame Status\t\t| Result\n");
    printf("=============================================\n");

    // Demand Paging Simulation
    for (int i = 0; i < n; i++) {

        printf(" %d\t|\t", pages[i]);

        // Check if page is already in memory
        if (isPagePresent(frames, frameCount, pages[i])) {
            displayFrames(frames, frameCount);
            printf("\t\tHIT\n");
        } else {
            // Page Fault occurs
            frames[position] = pages[i];
            position = (position + 1) % frameCount;
            pageFaults++;

            displayFrames(frames, frameCount);
            printf("\t\tPAGE FAULT\n");
        }
    }

    printf("=============================================\n");
    printf("Total Page Faults   : %d\n", pageFaults);
    printf("Total Page Hits     : %d\n", n - pageFaults);
    printf("Page Fault Ratio    : %.2f\n", (float)pageFaults / n);
    printf("=============================================\n");

    return 0;
}