#task1
#include<stdio.h>

    void Bubblesort(int arr[],int size){
        int i,j;
        for(i=0;i<size-1;i++){
            for(j=0;j<size-1;j++){
                if(arr[i]>arr[j-1]{
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;


                })
            }
        }

    }

int main(){
    int arr[]={64,33,64,12,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("original array");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);

    }
    printf("\n");
    Bubblesort(arr,size);

    printf("sorted array");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        
    }
    printf("\n");
    


}


#TASK2
#include<stdio.h>
enum color {
    Red,
    blue,
    green,
    voilet,

};
int main(){
    int favouritecolor;
    printf("Enter your favorite color");
    printf("0-RED\n");
    printf('1-blue\n');
    printf("2-green\n");
    printf("3-voilet\n");
    printf("%d",&favouritecolor);

    switch (favouritecolor)
    {
    case Red :
        printf("YOUR FACORITE COLOR IS RED");
        break;
    case blue:
        printf("YOUR FAVORITE COLOR IS BLUE");
        break;
    case green:
        printf("YOUR FAVOURITE COLOR IS GREEN");
        break;
    case voilet:
        printf("YOUR FAVOURITE COLOR IS ");
        break;

    
    default:
    printf("INVALID COLOR");
        break;
    }
}
