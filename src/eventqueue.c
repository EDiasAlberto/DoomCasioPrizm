#include "eventqueue.h"
#include "d_event.h"

static XEvent_Queue *queue; 

int isEmpty(){
    return (queue->front == q->back-1);
}

int cyclePointerAround(int x){
    if(x >= MAXEVENTS){
        return 0;
    }
    return x;
}

int XNextEvent(XEvent *event_return){
    if(isEmpty()){
        return 0;
    }
    event_return = queue->events[q->front];
    q->front++;
    q->front = cyclePointerAround(q->front);

    return 1;
}
int XPushEvent(XEvent *new_event){
    if(isEmpty()){
        return 0;
    }
    queue->events[queue->back] = new_event;
    queue->back++;
    q->back = cyclePointerAround(q->back);

    return 1;
}

XEvent_Queue *Init_Event_Queue(void){
    queue = malloc(sizeof(XEvent_Queue));
    queue->front = 0;
    queue->back = 1;
    return queue;
}