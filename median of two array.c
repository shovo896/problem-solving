#include<stdio.h> 
#include<stdlib.h>
double findMedianSortedArray(int *nums1,int m ,int *nums2,int n ){
    |int total = m+n ;
    int* merged=(int*)malloc(total * sizeof(int));
    int i = 0,j=0,k=0;
    // merged two arrays 
    while(i<m && i<n){
        if(nums1[i] < nums2[j])
           merged[k++]= nums1[i++];
        else 
           merged[k++]=nums2[j++];
            





    }
while(i<m)
   merged[k++]=nums1[i++];
// copy remaining elements from nums2 
while(j < n )
     merged[k++]=nums2[j++];
double median;
if (total % 2==0){
    median=(merged[total/2-1]+merged[total/2.0])/2.0;
}
else{
    median=merged[total/2];
}
free(merged);
return median ;
}
int main(){
    int nums1[]={1,2,5};
    int nums2[]={2,4,6};
    int m=sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);
    double median=findMedianSortedArrays(nums1,m,nums2,n);
    printf("Median is:%.21f",median);
    return 0 ;












}
