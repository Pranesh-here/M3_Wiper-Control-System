#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
	int i,s=0,j=0;  //Declaring and Initializing Variables
	RCC_AHB1ENR |= (1<<3)|(1<<0); //Enabling the LED and the switch
	GPIOD_MODE = 0; // Clear LED
	GPIOA_MODE = 0; // Clear Switch
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);  //enabling LED 12 as output pin
	GPIOD_MODE |= (0<<27)|(1<<26);  //enabling LED 13 as output pin
	GPIOD_MODE |= (0<<29)|(1<<28);  //enabling LED 14 as output pin
	GPIOD_MODE |= (0<<31)|(1<<30);  //enabling LED 14 as output pin as per the Datasheet
	GPIOA_MODE |= (0<<1)|(0<<0);    //enabling Switch as input pin as per the Datasheet
	GPIOD_ODR = 0X00;
	while(1)
	{
			while((GPIOA_IDR & 0x01) == 1) // Switch ON
			{
				s++; //Switch
			}
			if(s>30000)
			{
			s=0;//RED Led ON
			GPIOD_ODR |= 1<<14;
			for(i=0;i<100000;i++);
			}
			else if(s>0 && s<30000)
			{
			j=1;
            }
			else
			{

			}
				if(j==1)
				{

					  //Wiper - Low Speed

/*LED GREEN*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<12;
				for(i=0;i<20000;i++);
				GPIOD_ODR &= ~(1<<12);
				for(i=0;i>=20000;i++);
				}
/*LED ORANGE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<13;
				for(i=0;i<20000;i++);
				GPIOD_ODR &= ~(1<<13);
				for(i=0;i>=20000;i++);
				}
/*LED BLUE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<15;
				for(i=0;i<20000;i++);
				GPIOD_ODR &= ~(1<<15);
				for(i=0;i>=20000;i++);
				}

						//Wiper - Medium Speed

/*LED GREEN*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<12;
				for(i=0;i<40000;i++);
				GPIOD_ODR &= ~(1<<12);
				for(i=0;i>=40000;i++);
				}
/*LED ORANGE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<13;
				for(i=0;i<40000;i++);
				GPIOD_ODR &= ~(1<<13);
				for(i=0;i>=40000;i++);
				}
/*LED BLUE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<15;
				for(i=0;i<40000;i++);
				GPIOD_ODR &= ~(1<<15);
				for(i=0;i>=40000;i++);
				}

						//Wiper - High Speed

/*LED GREEN*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<12;
				for(i=0;i<80000;i++);
				GPIOD_ODR &= ~(1<<12);
				for(i=0;i>=80000;i++);
				}
/*LED ORANGE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<13;
				for(i=0;i<80000;i++);
				GPIOD_ODR &= ~(1<<13);
				for(i=0;i>=80000;i++);
				}
/*LED BLUE*/	for(j=0;j<5;j++)
				{
				GPIOD_ODR |= 1<<15;
				for(i=0;i<80000;i++);
				GPIOD_ODR &= ~(1<<15);
				for(i=0;i>=80000;i++);
				}
				}

	}
	return 0;
}
