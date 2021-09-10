#include "Sorting.h"
/**
 * @brief The main logic, menu of the project
 * 
 */
// Status of the operation requested
#define VALID   (1)
#define INVALID (0)

//operation requested by user
unsigned int choice = 0;
//int array_size;
//int* array_ptr;

// Valid operations 
enum operations{ bubbleSort=1, insertionSort, selectionSort, quickSort, mergeSort, EXIT };

// Display the menu of operations supported 
void Sorting_menu(void);
// Verifies the requested operations validity 
int valid_operation(int operation);


typedef struct Sorting
{
  int array_size;
  int*array_ptr;
}Sort;


void Sorting_menu(void)
{
    Sort sort;

    printf("\nAvailable Algorithms\n");
    printf("\n1. Bubble Sort\n2. Insertion Sort\n3. Selectiontion Sort\n4. Quick Sort\n5. Merge Sort\n6. Exit");
    printf("\n\tEnter your choice\n");
   
   
    scanf("%d", &choice);

    if(EXIT == choice)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(choice))
    {
        printf("\n\tEnter the array size\n");
        scanf("%d",&sort.array_size);
        if(sort.array_size<=0)
         {
             printf("Check the Array size\n");
             return ;
         }
        sort.array_ptr=(int*)malloc(sort.array_size * sizeof(int));
        printf("Enter the elements\n");
        for(int i=0;i<sort.array_size;i++)
        scanf("%d", &sort.array_ptr[i]);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(choice)
    {
        case bubbleSort:
            printf("Time Complexity of Bubble Sort: O(n*n)\n");
            sort.array_ptr=BubbleSort(sort.array_ptr, sort.array_size);
            getchar();
            break;
        case insertionSort:
            printf("Time Complexity of Insertion Sort: O(n*n)\n");
            sort.array_ptr=InsertionSort(sort.array_ptr,sort.array_size);
            getchar();
            break;
        case selectionSort:
            printf("Time Complexity of Selection Sort: O(n*n)\n");
            sort.array_ptr=SelectionSort(sort.array_ptr,sort.array_size);
            getchar();
            break;
        case quickSort:
            printf("Time Complexity of Quick Sort: O(nlogn)\n");
            sort.array_ptr=QuickSort(sort.array_ptr,0,sort.array_size-1);
            getchar();
            break;
        case mergeSort:
            printf("Time Complexity of Merge Sort: O(n*n)\n");
            sort.array_ptr=MergeSort(sort.array_ptr,0,sort.array_size-1);
            getchar();
            break;
        case EXIT:
            exit(0);
            break;
        default:
            printf("\n\t---END---\n");
    }
    printf("The sorted elements: ");
    Display(sort.array_ptr,sort.array_size);
}

int valid_operation(int operation)
{
    // Check if the operation is a valid operation 
    return ((bubbleSort <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
