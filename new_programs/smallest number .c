printf("Enter numbers. (other chars to end)\n");
int min,input;
scanf("%d",&min);
while (scanf("%d",&input))
 if (input<min)
  min=input;
printf("min: %d\n",min);
