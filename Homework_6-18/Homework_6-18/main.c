//
//  main.c
//  Homework_6-18
//
//  Created by HiLau on 2023/6/18.
//
#include <stdio.h>
//1、冒泡排序

//2、整型数组包含以下要求
//用Init()初始化数组
//用print()打印数组
//用reverse()逆序输出数组

//void Init(int* arr,int sz)
//{
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        arr[i] = 0;
//    }
//}
//
//void print(int* arr,int sz)
//{
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}
//
//void reverse(int* arr,int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while(left<right)
//    {
//        int tmp = 0;
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left ++;
//        right --;
//    }
//}
//
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//
//    print(arr,sz);
//    reverse(arr,sz);
//    print(arr,sz);
//
//    Init(arr,sz);
//    print(arr,sz);
//
//    return 0;
//}

//3、交换两个数组（长度一样）
//void arrChange(int* arr1,int* arr2,int sz)
//{
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        int tmp = 0;
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//}
//
//int main()
//{
//    int arr1[]={1,3,5,7,9};
//    int arr2[]={2,4,6,8,10};
//    int sz = sizeof(arr1)/sizeof(arr1[0]);
//
//    arrChange(arr1,arr2,sz);
//
//    int i = 0;
//    printf("arr1 = ");
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//
//    printf("arr2 = ");
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arr2[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

//4、三子棋的简单实现
//
