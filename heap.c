/******************************************************************************

A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.
Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

Reference - Tamim Shahriar Subeen (Youtube) 

*******************************************************************************/
#include <stdio.h>

int getLeftNodeIndex();
int getRightNodeIndex();
int parentIndex();
int max_heapify();

int main()
{
    int heap_size, heap[100], i;
    
    scanf("%d", &heap_size);
    
    for (i = 1; i <= heap_size; i++) {
        scanf("%d", &heap[i]);
    }
    
    for(i = heap_size / 2; i >= 1; i--) {
        max_heapify(heap, heap_size, i);
    }
    
    for (i = 1; i <= heap_size; i++) {
        printf("%d ", heap[i]);
    }

    return 0;
}

int getLeftNodeIndex(int i)
{
    return i * 2;
}

int getRightNodeIndex(int i)
{
    return i * 2 + 1;
}

int parentIndex(int i)
{
    return i / 2;
}

int max_heapify(int heap[], int heap_size, int i)
{
    int left_node_index, right_node_index, largest_no_index, temp;
    
    left_node_index = getLeftNodeIndex(i);
    right_node_index = getRightNodeIndex(i);
    
    if (left_node_index <= heap_size && heap[left_node_index] > heap[i]) {
        largest_no_index = left_node_index;
    } else {
        largest_no_index = i;
    }
    
    if (right_node_index <= heap_size && heap[right_node_index] > heap[largest_no_index]) {
        largest_no_index = right_node_index;
    }
    
    if (largest_no_index != i) {
        temp = heap[i];
        heap[i] = heap[largest_no_index];
        heap[largest_no_index] = temp;
        
        max_heapify(heap, heap_size, largest_no_index);
    }
}