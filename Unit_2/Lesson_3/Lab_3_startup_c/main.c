#include"STD_TYPES.h"
#define RCC_BASE     0x40021000
#define GPIOA_BASE   0x40010800

#define RCC_AFB2ENR  *((vuint32_t *) (RCC_BASE   + 0x18))
#define GPIOA_CRH    *((vuint32_t *) (GPIOA_BASE + 0x04))
#define GPIOA_ODR    *((vuint32_t *) (GPIOA_BASE + 0x0C))

typedef union
{
	vuint32_t all_bits;
	struct
	{
		vuint32_t b_reserved:13;
		vuint32_t b_13:1;
	}bit;
}ODR_t;

volatile ODR_t* P_ODR=(volatile ODR_t*) (GPIOA_BASE + 0x0C);


int main(void)
{

	RCC_AFB2ENR |=(1<<2);
	GPIOA_CRH &=0xFF0FFFFF;
	GPIOA_CRH |=0x00200000;
    while(1)
    {
    	P_ODR->bit.b_13=1;
    	for(vuint32_t i=0;i<5000;i++);
    	P_ODR->bit.b_13=0;
    	for(vuint32_t j=0;j<5000;j++);
    }
}
