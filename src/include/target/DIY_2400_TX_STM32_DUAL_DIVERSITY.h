#ifndef DEVICE_NAME
#define DEVICE_NAME "ELRS 2400TX DD"
#endif

#define TARGET_DIY_2400_TX_STM32_DUAL_DIVERSITY

// Output Power - use default SX1280
#define POWER_OUTPUT_FIXED 13 // MAX power for 2400 RXes that doesn't have PA is 12.5dbm

// ==========================================
// Communication with LoRa chips (SPI)
// ==========================================
#define GPIO_PIN_SCK PA5
#define GPIO_PIN_MISO PA6
#define GPIO_PIN_MOSI PA7

// ==========================================
// Radio Chip A
// ==========================================
#define GPIO_PIN_NSS PA4
#define GPIO_PIN_DIO1 PA10 // EXTI10
// D2 is physically connected to PA9
// D3 is physically connected to PA8
#define GPIO_PIN_BUSY PA11 // EXTI11
#define GPIO_PIN_RST PA12

// ==========================================
// Radio Chip B
// ==========================================
#define GPIO_PIN_NSS_2 PA15
#define GPIO_PIN_DIO1_2 PA0 // EXTI0
// D2 is physically connected to PA1
// D3 is physically connected to PA2
#define GPIO_PIN_BUSY_2 PB3 // EXTI3
#define GPIO_PIN_RST_2 PB4

// ==========================================
// Communication with BaseBoard (UART)
// ==========================================
// Define these here to prevent using the defaults in the L432 variant
#define SERIAL_UART_INSTANCE 1
#define PIN_SERIAL_RX PB7
#define PIN_SERIAL_TX PB6

// UART used for handset/CRSF communication
#define GPIO_PIN_RCSIGNAL_RX PB7
#define GPIO_PIN_RCSIGNAL_TX PB6

// ==========================================
// Programming (SWD)
// ==========================================
// SWC = PA14, SWD = PA13
// (These are hardware defaults for STM32, no explicit #define needed)

// ==========================================
// Other
// ==========================================
#define GPIO_PIN_LED_RED PB5