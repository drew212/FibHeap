#ifndef __FIBHEAP_H__
#define __FIBHEAP_H__

template <typename T>
class FibHeap
{

    public:

    /**
     * Create a new Fibonacci heap, objects are compared using operator<.
     */
    FibHeap();

    /**
     * Destroy a constructed Fibonacci heap and all memory associated with it.
     */
    ~FibHeap();

    /**
     * Asignment operator overload.
     */
    FibHeap & operator=(const FibHeap & rhs);

    /**
     * Insert a new element into the list
     */
    void insert(T & item);

    /**
     * Find the minimum, return and remove it.
     */
    T & deleteMin();

    /**
     * Find the minimum, return without removing it.
     */
    T & findMin();

    /**
     * Swap two Fibonacci heaps.
     */
    void swap(T & other);

    void merge(FibHeap & other);

    private:
    //TODO


}

#endif
