package com.company;
import java.util.*;

public class searchInRotatedArray {

    public static int findPivot(int arr[], int size){

        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;

        while(start < end){

            if(arr[mid] >= arr[0]){
                start = mid + 1;
            }else{
                end = mid;
            }

            mid = start + (end - start) / 2;

        }

        return start;

    }

    public static int binarySearch(int arr[], int s, int e, int key){

        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;

        while(start <= end){

            if(key == arr[mid]){
                return mid;
            }else if(arr[mid] <= key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }

            mid = start + (end - start) / 2;

        }

        return -1;

    }

    public static int findPosition(int arr[], int size, int key){

        int pivot = findPivot(arr, size);

        if((key >= arr[pivot]) && (key <= arr[size - 1])){  // binary search in 2nd line
            return binarySearch(arr, pivot, size - 1, key);
        }else{   // binary search in 1st line
            return binarySearch(arr, 0, pivot - 1, key);
        }


    }

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of an Array : ");
        int size = sc.nextInt();

        int arr[] = new int[20];
        System.out.println("Enter Elements of an Array in the form of two montonically increasing array : ");
        for(int i = 0; i < size; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter Key We have to Search : ");
        int key = sc.nextInt();

        int keyIndex = findPosition(arr, size, key);
        System.out.println(key + " is present at index : " + keyIndex);

    }

}
