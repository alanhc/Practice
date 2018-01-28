//
//  main.cpp
//  test
//
//  Created by ´¿§»¶v on 2017/11/18.
//  Copyright c 2017¦~ ´¿§»¶v. All rights reserved.
//

#include <stdio.h>



void shuffle_easy_to_undestand(int *deck[])
{
    int *a[10000], *b[10000];
    //divide the card to two array
    int i, size_a, size_b;
    for  (i = size_a = size_b = 0; deck[i] != NULL; i++ ) {
        if ( i % 2 == 0 )
            a[i/2] = deck[i], size_a++;
        else
            b[i/2] = deck[i], size_b++;
    }

    //merge two array
    //while ( deck[i] != NULL ) {
    //    if ( i % 2 == 0 )
    //        deck[i] = a[i];
    //    else
    //        deck[i] = b[i];
    //    i++;
    //}
    i = 0;
    int j;
    for (j = 0; j < size_a; )
         deck[i++] = a[j++];
    for (j = 0; j < size_b;)
         deck[i++] = b[j++];
}









void shuffle1(int *deck[])
{
    int *a[10000], *b[10000];
    //divide the card to two array
    int i, total_card;
    for  (i = 0; deck[i] != NULL; i++ ) {
        if ( i % 2 == 0 )
            a[i/2] = deck[i];
        else
            b[i/2] = deck[i];
    }
    total_card = i;

   //size_a = (total_card + 1) /2
   //size_b = (total_card) / 2

   int j;
   for (i = j = 0; j < (total_card +1)/2; )
       deck[i++] = a[j++];
   for (j = 0; j < total_card / 2; )
       deck[i++] = b[j++];
}

void print(int *deck[])
{
    int i = 0;
    while ( deck[i] != NULL ) {
        printf("%d", *deck[i]);
        i++;
    }
    for (int i = 0; deck[i] != NULL; ) {
        printf("%d", *deck[i]);
    }
}



int main()
{
    int card[10000];
    int *deck[10000];
    int index = 0;
    while (scanf("%d", &(card[index])) != EOF) {
        deck[index] = &(card[index]);
        index++;
    }
    int index;
    for (index = 0; scanf("%d", &(card[index])) != EOF; index++) {
        deck[index] = &(card[index]);
    }
    deck[index] = NULL;
    shuffle(deck);
    print(deck);
    return 0;
}






#include <stdio.h>

int card[] = { 1, 2, 3, 4, 5, -1 };
int *deck[100];

main() {
    int total_cards;
    for (total_cards = 0; card[total_cards] >= 0; total_cards++) {
    }
    deck[total_cards] = NULL;
    printf("Total %d cards\n", total_cards);

    // top half 0~ceiling (<3 = ceiling (total_cards+1)/2)
    // bottom half ceiling~total_cards
    // 
    // deck[0]   top[0]=card[0=0+0]
    // deck[1]                      bottom[0]=card[3=3+0], 3:ceiling
    // deck[2]   top[1]=card[1=0+1]
    // deck[3]                      bottom[1]=card[4=3+1], 3:ceiling
    // deck[4]   top[2]=card[2=0+2]
    int i, ceiling = (total_cards + 1) / 2;
    for (i = 0; i < total_cards; i++) {
        // rearrange deck[] pointers
        int card_pos;
        //if ((i % 2) == 0) {
        //    // even number
        //    card_pos = 0 + (i / 2);
        //} else {
        //   // odd number
        //    card_pos = ceiling + (i / 2);
        //}
        card_pos = (((i % 2) == 0)? 0 : ceiling) + (i / 2);
        deck[i] = &card[card_pos];
    }

    for (i = 0; deck[i] != NULL; i++)
        printf("%d ", *deck[i]);
}

