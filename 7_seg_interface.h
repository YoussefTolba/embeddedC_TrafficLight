
#define ZERO 0x3F
#define ONE 0x06
#define TWO 0x5B
#define THREE 0x4F
#define FOUR 0x66
#define FIVE 0x6D
#define SIX 0x7D
#define SEVEN 0x07
#define EIGHT 0x7F
#define NINE 0x6F

typedef enum{
    Num0 = 0,
    Num1,
    Num2,
    Num3,
    Num4,
    Num5,
    Num6,
    Num7,
    Num8,
    Num9
}_enuDispNumX;

typedef enum{
    PortA = 0,
    PortB,
    PortC,
    PortD
}_enuPortX;




void Seg_vidDispNum(_enuPortX Port, _enuDispNumX DispNum);