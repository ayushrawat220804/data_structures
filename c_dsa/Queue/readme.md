Note: The following content is AI-generated using tools like ChatGPT and Bing AI, along with some text editors.

# Queue data structure

![image](https://github.com/ayushrawat220804/data_structures/assets/139307604/ddb46438-8a8f-4a8c-8bd0-e272ad094ed0)


A queue is a linear data structure that follows the First In First Out (FIFO) order. In other words, the element inserted first in the queue will be the first one to be removed.
## Here are some key points about queues:
## 1. Primary Queue Operations:
* **Enqueue**: Adds an element to the rear end of the queue.
* **Dequeue**: Removes an element from the front end of the queue.
* **Front**: Returns the element at the front without removing it.
* **Rear**: Returns the element at the rear without removing it.
* **isEmpty**: Indicates whether the queue is empty.
* **Size**: Returns the total number of elements in the queue.


## 2. Types of Queues:
* **Simple Queue**: The most basic version, where insertion (Enqueue) occurs at the rear end and removal (Dequeue) happens at the front end.
* **Circular Queue**: An efficient array implementation where the last element is connected to the first, forming a circular ring. It optimizes memory usage.

## 3. Advantages and  Disadvantes of Queue:
### Advantages:
* Efficiently manages large amounts of data.
* Useful for scenarios where data is transferred asynchronously between processes.
* Call center systems use queues to handle incoming calls one by one 123.

### Disadvantages:
* Limited capacity due to fixed size (unless dynamically resized).
* Overhead in maintaining the queue structure.
* Not suitable for scenarios where elements need to be accessed randomly.
  
&nbsp;

# How to Use a Queue in C++:
In C++, you can use the STL queue to implement a queue data structure.

The queue follows the FIFO principle, where the first element added is the first to be removed.

Example usage :
```c++
#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;
    myQueue.push(10); // Enqueue
    myQueue.push(20);
    myQueue.push(30);

    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " "; // Front
        myQueue.pop(); // Dequeue
    }
    return 0;
}
```
Output: ```10 20 30```

Remember that queues are particularly useful when you need to maintain order and process elements sequentially. Whether you’re managing data or handling tasks, queues provide an organized way to handle items in a predictable manner.
