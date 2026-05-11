#ifndef DEVICE_NAME
#define DEVICE_NAME "ELRS 2400RX DEV"
#endif

#define TARGET_DIY_2400_RX_STM32_DEV

#ifndef ICACHE_RAM_ATTR
#define ICACHE_RAM_ATTR // Define as empty so STM32 ignores it
#endif

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
#define GPIO_PIN_DIO1 PC10 // EXTI10
// D2 is physically connected to PA9
// D3 is physically connected to PA8
#define GPIO_PIN_BUSY PC11 // EXTI11
#define GPIO_PIN_RST PC12
#define GPIO_PIN_RX_ENABLE PA8 // High when receiving
#define GPIO_PIN_TX_ENABLE PC9 // High when transmitting

// ==========================================
// Radio Chip B
// ==========================================
#define GPIO_PIN_NSS_2 PD7
#define GPIO_PIN_DIO1_2 PA0 // EXTI0
// D2 is physically connected to PA1
// D3 is physically connected to PA2
#define GPIO_PIN_BUSY_2 PB3 // EXTI3
#define GPIO_PIN_RST_2 PB4
#define GPIO_PIN_RX_ENABLE_2 PA1 // High when receiving
#define GPIO_PIN_TX_ENABLE_2 PA2 // High when transmitting

// ==========================================
// Communication with BaseBoard (UART)
// ==========================================
// Define these here to prevent using the defaults in the L432 variant
#define SERIAL_UART_INSTANCE 1
#define PIN_SERIAL_RX PA10
#define PIN_SERIAL_TX PA9

// // UART used for handset/CRSF communication
#define GPIO_PIN_RCSIGNAL_RX PA10
#define GPIO_PIN_RCSIGNAL_TX PA9

// ==========================================
// Programming (SWD)
// ==========================================
// SWC = PA14, SWD = PA13
// (These are hardware defaults for STM32, no explicit #define needed)

// ==========================================
// Other
// ==========================================
// Nucleo-U575ZI-Q User LEDs
// #define GPIO_PIN_LED_RED PB14  // Red LED
#define GPIO_PIN_LED_BLUE PB7  // Blue LED
#define GPIO_PIN_LED_GREEN PB0 // Green LED