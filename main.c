#include "testArray.h"
#include "queue.h"


int main()
{
    QueueInit();
    QueueAdd("0");
    QueueAdd("1");
    QueueAdd("2");
    QueueAdd("3");
    QueueAdd("4");
    QueueAdd("5");
    QueueAdd("6");
    QueueAdd("7");
    QueueAdd("8");
    QueueAdd("9");
    QueueAdd("10");
    QueueAdd("11");
    QueueAdd("12");
    QueueAdd("13");
    QueueAdd("14");
    QueueAdd("15");
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    QueueAdd("0");
    QueueAdd("1");
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    printf("%s\n",QueuePop());
    //TestArrayFunctions();
    return 0;
}

