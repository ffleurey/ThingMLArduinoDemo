/*****************************************************************************
 * Headers for type : SoftButton
 *****************************************************************************/

// Definition of the instance struct:
struct SoftButton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_I2Cbutton;
uint16_t id_Button;
uint16_t id_Timer;
uint16_t id_Lcd;
uint16_t id_SoftButton;
// Variables for the current instance state
int SoftButton_SoftButtonImpl_State;
// Variables for the properties of the instance
uint16_t SoftButton_double_delay_var;
uint16_t SoftButton_long_delay_var;

};
// Declaration of prototypes outgoing messages:
void SoftButton_SoftButtonImpl_OnEntry(int state, struct SoftButton_Instance *_instance);
void SoftButton_handle_Timer_timer_timeout(struct SoftButton_Instance *_instance, uint8_t id);
void SoftButton_handle_Button_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_Button_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_down_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_left_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_down_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_left_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_up_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_right_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_right_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_select_release(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_up_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_I2Cbutton_select_press(struct SoftButton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t));
void register_external_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t));
void register_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t));
void register_external_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t));
void register_SoftButton_send_Lcd_print_num_listener(void (*_listener)(struct SoftButton_Instance *, int16_t));
void register_external_SoftButton_send_Lcd_print_num_listener(void (*_listener)(struct SoftButton_Instance *, int16_t));
void register_SoftButton_send_Lcd_print_dec_listener(void (*_listener)(struct SoftButton_Instance *, float));
void register_external_SoftButton_send_Lcd_print_dec_listener(void (*_listener)(struct SoftButton_Instance *, float));
void register_SoftButton_send_Lcd_clear_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_Lcd_clear_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_Lcd_print_simple_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_Lcd_print_simple_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_Lcd_print_double_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_Lcd_print_double_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_Lcd_print_long_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_Lcd_print_long_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_SoftButton_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_SoftButton_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_SoftButton_double_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_SoftButton_double_click_listener(void (*_listener)(struct SoftButton_Instance *));
void register_SoftButton_send_SoftButton_long_press_listener(void (*_listener)(struct SoftButton_Instance *));
void register_external_SoftButton_send_SoftButton_long_press_listener(void (*_listener)(struct SoftButton_Instance *));

// Definition of the states:
#define SOFTBUTTON_SOFTBUTTONIMPL_STATE 0
#define SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE 1
#define SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE 2
#define SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE 3


/*****************************************************************************
 * Headers for type : Button
 *****************************************************************************/

// Definition of the instance struct:
struct Button_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_evt;
// Variables for the current instance state
int Button_Button_State;
// Variables for the properties of the instance
uint8_t Button_PIN_var;

};
// Declaration of prototypes outgoing messages:
void Button_Button_OnEntry(int state, struct Button_Instance *_instance);
void Button_handle_clock_ms25_tic(struct Button_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Button_send_evt_press_listener(void (*_listener)(struct Button_Instance *));
void register_external_Button_send_evt_press_listener(void (*_listener)(struct Button_Instance *));
void register_Button_send_evt_release_listener(void (*_listener)(struct Button_Instance *));
void register_external_Button_send_evt_release_listener(void (*_listener)(struct Button_Instance *));

// Definition of the states:
#define BUTTON_BUTTON_STATE 0
#define BUTTON_BUTTON_RELEASED_STATE 1
#define BUTTON_BUTTON_PRESSED_STATE 2


/*****************************************************************************
 * Headers for type : DOWNbutton
 *****************************************************************************/

// Definition of the instance struct:
struct DOWNbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_listener;
uint16_t id_I2CShieldButtonMsg;
// Variables for the current instance state
int DOWNbutton_I2CDOWNButton_State;
// Variables for the properties of the instance
uint8_t DOWNbutton_data_var;

};
// Declaration of prototypes outgoing messages:
void DOWNbutton_I2CDOWNButton_OnEntry(int state, struct DOWNbutton_Instance *_instance);
void DOWNbutton_handle_clock_ms25_tic(struct DOWNbutton_Instance *_instance);
void DOWNbutton_handle_I2CShieldButtonMsg_buttons_state(struct DOWNbutton_Instance *_instance, uint8_t msg);
// Declaration of callbacks for incoming messages:
void register_DOWNbutton_send_listener_down_pressed_listener(void (*_listener)(struct DOWNbutton_Instance *));
void register_external_DOWNbutton_send_listener_down_pressed_listener(void (*_listener)(struct DOWNbutton_Instance *));
void register_DOWNbutton_send_listener_down_released_listener(void (*_listener)(struct DOWNbutton_Instance *));
void register_external_DOWNbutton_send_listener_down_released_listener(void (*_listener)(struct DOWNbutton_Instance *));

// Definition of the states:
#define DOWNBUTTON_I2CDOWNBUTTON_STATE 0
#define DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE 1
#define DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE 2


/*****************************************************************************
 * Headers for type : I2CProvider
 *****************************************************************************/


// BEGIN: Code from the c_header annotation I2CProvider

#include <Adafruit_RGBLCDShield.h>  // RGB LCD Shield communications
#define WHITE 0x7
// END: Code from the c_header annotation I2CProvider

// Definition of the instance struct:
struct I2CProvider_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_lcd;
uint16_t id_buttonAccess;
// Variables for the current instance state
int I2CProvider_RGBLCDShieldSM_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void I2CProvider_RGBLCDShieldSM_OnEntry(int state, struct I2CProvider_Instance *_instance);
void I2CProvider_handle_lcd_print_long_click(struct I2CProvider_Instance *_instance);
void I2CProvider_handle_lcd_print_double_click(struct I2CProvider_Instance *_instance);
void I2CProvider_handle_lcd_print_num(struct I2CProvider_Instance *_instance, int16_t num);
void I2CProvider_handle_lcd_clear(struct I2CProvider_Instance *_instance);
void I2CProvider_handle_lcd_print_dec(struct I2CProvider_Instance *_instance, float num);
void I2CProvider_handle_lcd_print_simple_click(struct I2CProvider_Instance *_instance);
void I2CProvider_handle_clock_ms25_tic(struct I2CProvider_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_I2CProvider_send_lcd_LCDready_listener(void (*_listener)(struct I2CProvider_Instance *));
void register_external_I2CProvider_send_lcd_LCDready_listener(void (*_listener)(struct I2CProvider_Instance *));
void register_I2CProvider_send_buttonAccess_buttons_state_listener(void (*_listener)(struct I2CProvider_Instance *, uint8_t));
void register_external_I2CProvider_send_buttonAccess_buttons_state_listener(void (*_listener)(struct I2CProvider_Instance *, uint8_t));

// Definition of the states:
#define I2CPROVIDER_RGBLCDSHIELDSM_STATE 0
#define I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE 1
#define I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE 2
#define I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE 3


/*****************************************************************************
 * Headers for type : SELECTbutton
 *****************************************************************************/

// Definition of the instance struct:
struct SELECTbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_listener;
uint16_t id_I2CShieldButtonMsg;
// Variables for the current instance state
int SELECTbutton_I2CSELECTButton_State;
// Variables for the properties of the instance
uint8_t SELECTbutton_data_var;

};
// Declaration of prototypes outgoing messages:
void SELECTbutton_I2CSELECTButton_OnEntry(int state, struct SELECTbutton_Instance *_instance);
void SELECTbutton_handle_clock_ms25_tic(struct SELECTbutton_Instance *_instance);
void SELECTbutton_handle_I2CShieldButtonMsg_buttons_state(struct SELECTbutton_Instance *_instance, uint8_t msg);
// Declaration of callbacks for incoming messages:
void register_SELECTbutton_send_listener_select_pressed_listener(void (*_listener)(struct SELECTbutton_Instance *));
void register_external_SELECTbutton_send_listener_select_pressed_listener(void (*_listener)(struct SELECTbutton_Instance *));
void register_SELECTbutton_send_listener_select_released_listener(void (*_listener)(struct SELECTbutton_Instance *));
void register_external_SELECTbutton_send_listener_select_released_listener(void (*_listener)(struct SELECTbutton_Instance *));

// Definition of the states:
#define SELECTBUTTON_I2CSELECTBUTTON_STATE 0
#define SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE 1
#define SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE 2


// Definition of Enumeration  DigitalState
#define DIGITALSTATE_LOW 0
#define DIGITALSTATE_HIGH 1


/*****************************************************************************
 * Headers for type : TestSoftButtonDoubleClick
 *****************************************************************************/

// Definition of the instance struct:
struct TestSoftButtonDoubleClick_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_led;
uint16_t id_softbut;
// Variables for the current instance state
int TestSoftButtonDoubleClick_Region1_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void TestSoftButtonDoubleClick_Region1_OnEntry(int state, struct TestSoftButtonDoubleClick_Instance *_instance);
void TestSoftButtonDoubleClick_handle_softbut_double_click(struct TestSoftButtonDoubleClick_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_TestSoftButtonDoubleClick_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *));
void register_external_TestSoftButtonDoubleClick_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *));
void register_TestSoftButtonDoubleClick_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *));
void register_external_TestSoftButtonDoubleClick_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *));

// Definition of the states:
#define TESTSOFTBUTTONDOUBLECLICK_REGION1_STATE 0
#define TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE 1
#define TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE 2


/*****************************************************************************
 * Headers for type : LED
 *****************************************************************************/

// Definition of the instance struct:
struct LED_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
// Variables for the current instance state
int LED_LED_State;
// Variables for the properties of the instance
uint8_t LED_PIN_var;

};
// Declaration of prototypes outgoing messages:
void LED_LED_OnEntry(int state, struct LED_Instance *_instance);
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance);
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define LED_LED_STATE 0
#define LED_LED_READY_STATE 1


/*****************************************************************************
 * Headers for type : I2Cbutton
 *****************************************************************************/

// Definition of the instance struct:
struct I2Cbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_button;
uint16_t id_listener;
// Variables for the current instance state
int I2Cbutton_I2CButton_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void I2Cbutton_I2CButton_OnEntry(int state, struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_right_released(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_select_pressed(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_down_pressed(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_left_released(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_right_pressed(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_left_pressed(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_up_pressed(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_down_released(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_up_released(struct I2Cbutton_Instance *_instance);
void I2Cbutton_handle_listener_select_released(struct I2Cbutton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_I2Cbutton_send_button_up_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_up_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_up_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_up_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_down_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_down_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_down_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_down_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_left_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_left_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_left_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_left_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_right_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_right_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_right_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_right_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_select_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_select_press_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_I2Cbutton_send_button_select_release_listener(void (*_listener)(struct I2Cbutton_Instance *));
void register_external_I2Cbutton_send_button_select_release_listener(void (*_listener)(struct I2Cbutton_Instance *));

// Definition of the states:
#define I2CBUTTON_I2CBUTTON_STATE 0
#define I2CBUTTON_I2CBUTTON_NONE_STATE 1


/*****************************************************************************
 * Headers for type : LEFTbutton
 *****************************************************************************/

// Definition of the instance struct:
struct LEFTbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_listener;
uint16_t id_I2CShieldButtonMsg;
// Variables for the current instance state
int LEFTbutton_I2CLEFTButton_State;
// Variables for the properties of the instance
uint8_t LEFTbutton_data_var;

};
// Declaration of prototypes outgoing messages:
void LEFTbutton_I2CLEFTButton_OnEntry(int state, struct LEFTbutton_Instance *_instance);
void LEFTbutton_handle_clock_ms25_tic(struct LEFTbutton_Instance *_instance);
void LEFTbutton_handle_I2CShieldButtonMsg_buttons_state(struct LEFTbutton_Instance *_instance, uint8_t msg);
// Declaration of callbacks for incoming messages:
void register_LEFTbutton_send_listener_left_pressed_listener(void (*_listener)(struct LEFTbutton_Instance *));
void register_external_LEFTbutton_send_listener_left_pressed_listener(void (*_listener)(struct LEFTbutton_Instance *));
void register_LEFTbutton_send_listener_left_released_listener(void (*_listener)(struct LEFTbutton_Instance *));
void register_external_LEFTbutton_send_listener_left_released_listener(void (*_listener)(struct LEFTbutton_Instance *));

// Definition of the states:
#define LEFTBUTTON_I2CLEFTBUTTON_STATE 0
#define LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE 1
#define LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE 2


/*****************************************************************************
 * Headers for type : TestSoftButtonLongPress
 *****************************************************************************/

// Definition of the instance struct:
struct TestSoftButtonLongPress_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_led;
uint16_t id_softbut;
// Variables for the current instance state
int TestSoftButtonLongPress_Region1_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void TestSoftButtonLongPress_Region1_OnEntry(int state, struct TestSoftButtonLongPress_Instance *_instance);
void TestSoftButtonLongPress_handle_softbut_long_press(struct TestSoftButtonLongPress_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_TestSoftButtonLongPress_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *));
void register_external_TestSoftButtonLongPress_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *));
void register_TestSoftButtonLongPress_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *));
void register_external_TestSoftButtonLongPress_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *));

// Definition of the states:
#define TESTSOFTBUTTONLONGPRESS_REGION1_STATE 0
#define TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE 1
#define TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE 2


/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();
/*****************************************************************************
 * Headers for type : RIGHTbutton
 *****************************************************************************/

// Definition of the instance struct:
struct RIGHTbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_listener;
uint16_t id_I2CShieldButtonMsg;
// Variables for the current instance state
int RIGHTbutton_I2CRIGHTButton_State;
// Variables for the properties of the instance
uint8_t RIGHTbutton_data_var;

};
// Declaration of prototypes outgoing messages:
void RIGHTbutton_I2CRIGHTButton_OnEntry(int state, struct RIGHTbutton_Instance *_instance);
void RIGHTbutton_handle_I2CShieldButtonMsg_buttons_state(struct RIGHTbutton_Instance *_instance, uint8_t msg);
void RIGHTbutton_handle_clock_ms25_tic(struct RIGHTbutton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_RIGHTbutton_send_listener_right_pressed_listener(void (*_listener)(struct RIGHTbutton_Instance *));
void register_external_RIGHTbutton_send_listener_right_pressed_listener(void (*_listener)(struct RIGHTbutton_Instance *));
void register_RIGHTbutton_send_listener_right_released_listener(void (*_listener)(struct RIGHTbutton_Instance *));
void register_external_RIGHTbutton_send_listener_right_released_listener(void (*_listener)(struct RIGHTbutton_Instance *));

// Definition of the states:
#define RIGHTBUTTON_I2CRIGHTBUTTON_STATE 0
#define RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE 1
#define RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE 2


/*****************************************************************************
 * Headers for type : UPbutton
 *****************************************************************************/

// Definition of the instance struct:
struct UPbutton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_listener;
uint16_t id_I2CShieldButtonMsg;
// Variables for the current instance state
int UPbutton_I2CUPButton_State;
// Variables for the properties of the instance
uint8_t UPbutton_data_var;

};
// Declaration of prototypes outgoing messages:
void UPbutton_I2CUPButton_OnEntry(int state, struct UPbutton_Instance *_instance);
void UPbutton_handle_I2CShieldButtonMsg_buttons_state(struct UPbutton_Instance *_instance, uint8_t msg);
void UPbutton_handle_clock_ms25_tic(struct UPbutton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_UPbutton_send_listener_up_pressed_listener(void (*_listener)(struct UPbutton_Instance *));
void register_external_UPbutton_send_listener_up_pressed_listener(void (*_listener)(struct UPbutton_Instance *));
void register_UPbutton_send_listener_up_released_listener(void (*_listener)(struct UPbutton_Instance *));
void register_external_UPbutton_send_listener_up_released_listener(void (*_listener)(struct UPbutton_Instance *));

// Definition of the states:
#define UPBUTTON_I2CUPBUTTON_STATE 0
#define UPBUTTON_I2CUPBUTTON_RELEASED_STATE 1
#define UPBUTTON_I2CUPBUTTON_PRESSED_STATE 2


//timer2
/*****************************************************************************
 * Implementation for type : SoftButton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void SoftButton_SoftButtonImpl_OnExit(int state, struct SoftButton_Instance *_instance);
//Prototypes: Message Sending
void SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time);
void SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id);
void SoftButton_send_Lcd_print_num(struct SoftButton_Instance *_instance, int16_t num);
void SoftButton_send_Lcd_print_dec(struct SoftButton_Instance *_instance, float num);
void SoftButton_send_Lcd_clear(struct SoftButton_Instance *_instance);
void SoftButton_send_Lcd_print_simple_click(struct SoftButton_Instance *_instance);
void SoftButton_send_Lcd_print_double_click(struct SoftButton_Instance *_instance);
void SoftButton_send_Lcd_print_long_click(struct SoftButton_Instance *_instance);
void SoftButton_send_SoftButton_click(struct SoftButton_Instance *_instance);
void SoftButton_send_SoftButton_double_click(struct SoftButton_Instance *_instance);
void SoftButton_send_SoftButton_long_press(struct SoftButton_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void SoftButton_SoftButtonImpl_OnEntry(int state, struct SoftButton_Instance *_instance) {
switch(state) {
case SOFTBUTTON_SOFTBUTTONIMPL_STATE:{
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
SoftButton_SoftButtonImpl_OnEntry(_instance->SoftButton_SoftButtonImpl_State, _instance);
break;
}
case SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE:{
break;
}
case SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE:{
SoftButton_send_Timer_timer_start(_instance, 0, _instance->SoftButton_long_delay_var);
break;
}
case SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE:{
SoftButton_send_Timer_timer_start(_instance, 0, _instance->SoftButton_double_delay_var);
break;
}
default: break;
}
}

// On Exit Actions:
void SoftButton_SoftButtonImpl_OnExit(int state, struct SoftButton_Instance *_instance) {
switch(state) {
case SOFTBUTTON_SOFTBUTTONIMPL_STATE:{
SoftButton_SoftButtonImpl_OnExit(_instance->SoftButton_SoftButtonImpl_State, _instance);
break;}
case SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE:{
SoftButton_send_Lcd_clear(_instance);
break;}
case SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE:{
break;}
case SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE:{
SoftButton_send_Timer_timer_cancel(_instance, 0);
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void SoftButton_handle_Timer_timer_timeout(struct SoftButton_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
SoftButton_send_Lcd_print_long_click(_instance);
SoftButton_send_SoftButton_long_press(_instance);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
else if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
SoftButton_send_Lcd_print_simple_click(_instance);
SoftButton_send_SoftButton_click(_instance);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
}
void SoftButton_handle_Button_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE;
SoftButton_send_Timer_timer_cancel(_instance, 0);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
}
void SoftButton_handle_Button_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE;
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_PRESSED_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
else if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
SoftButton_send_Lcd_print_double_click(_instance);
SoftButton_send_SoftButton_double_click(_instance);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
}
void SoftButton_handle_I2Cbutton_down_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("DOWN pressed\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_left_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("LEFT released\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_down_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("DOWN released\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_left_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("LEFT pressed\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_up_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("UP released\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_right_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("RIGHT released\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_right_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("RIGHT pressed\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_select_release(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("SELECT released\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_up_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("UP pressed\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
void SoftButton_handle_I2Cbutton_select_press(struct SoftButton_Instance *_instance) {
if(!(_instance->active)) return;
//Region SoftButtonImpl
uint8_t SoftButton_SoftButtonImpl_State_event_consumed = 0;
//End Region SoftButtonImpl
//End dsregion SoftButtonImpl
//Session list: 
if (1) {
Serial.print("SELECT pressed\n");
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_SoftButton_send_Timer_timer_start_listener)(struct SoftButton_Instance *, uint8_t, uint32_t)= 0x0;
void (*SoftButton_send_Timer_timer_start_listener)(struct SoftButton_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t)){
external_SoftButton_send_Timer_timer_start_listener = _listener;
}
void register_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t)){
SoftButton_send_Timer_timer_start_listener = _listener;
}
void SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time){
if (SoftButton_send_Timer_timer_start_listener != 0x0) SoftButton_send_Timer_timer_start_listener(_instance, id, time);
if (external_SoftButton_send_Timer_timer_start_listener != 0x0) external_SoftButton_send_Timer_timer_start_listener(_instance, id, time);
;
}
void (*external_SoftButton_send_Timer_timer_cancel_listener)(struct SoftButton_Instance *, uint8_t)= 0x0;
void (*SoftButton_send_Timer_timer_cancel_listener)(struct SoftButton_Instance *, uint8_t)= 0x0;
void register_external_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t)){
external_SoftButton_send_Timer_timer_cancel_listener = _listener;
}
void register_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t)){
SoftButton_send_Timer_timer_cancel_listener = _listener;
}
void SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id){
if (SoftButton_send_Timer_timer_cancel_listener != 0x0) SoftButton_send_Timer_timer_cancel_listener(_instance, id);
if (external_SoftButton_send_Timer_timer_cancel_listener != 0x0) external_SoftButton_send_Timer_timer_cancel_listener(_instance, id);
;
}
void (*external_SoftButton_send_Lcd_print_num_listener)(struct SoftButton_Instance *, int16_t)= 0x0;
void (*SoftButton_send_Lcd_print_num_listener)(struct SoftButton_Instance *, int16_t)= 0x0;
void register_external_SoftButton_send_Lcd_print_num_listener(void (*_listener)(struct SoftButton_Instance *, int16_t)){
external_SoftButton_send_Lcd_print_num_listener = _listener;
}
void register_SoftButton_send_Lcd_print_num_listener(void (*_listener)(struct SoftButton_Instance *, int16_t)){
SoftButton_send_Lcd_print_num_listener = _listener;
}
void SoftButton_send_Lcd_print_num(struct SoftButton_Instance *_instance, int16_t num){
if (SoftButton_send_Lcd_print_num_listener != 0x0) SoftButton_send_Lcd_print_num_listener(_instance, num);
if (external_SoftButton_send_Lcd_print_num_listener != 0x0) external_SoftButton_send_Lcd_print_num_listener(_instance, num);
;
}
void (*external_SoftButton_send_Lcd_print_dec_listener)(struct SoftButton_Instance *, float)= 0x0;
void (*SoftButton_send_Lcd_print_dec_listener)(struct SoftButton_Instance *, float)= 0x0;
void register_external_SoftButton_send_Lcd_print_dec_listener(void (*_listener)(struct SoftButton_Instance *, float)){
external_SoftButton_send_Lcd_print_dec_listener = _listener;
}
void register_SoftButton_send_Lcd_print_dec_listener(void (*_listener)(struct SoftButton_Instance *, float)){
SoftButton_send_Lcd_print_dec_listener = _listener;
}
void SoftButton_send_Lcd_print_dec(struct SoftButton_Instance *_instance, float num){
if (SoftButton_send_Lcd_print_dec_listener != 0x0) SoftButton_send_Lcd_print_dec_listener(_instance, num);
if (external_SoftButton_send_Lcd_print_dec_listener != 0x0) external_SoftButton_send_Lcd_print_dec_listener(_instance, num);
;
}
void (*external_SoftButton_send_Lcd_clear_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_Lcd_clear_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_Lcd_clear_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_Lcd_clear_listener = _listener;
}
void register_SoftButton_send_Lcd_clear_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_Lcd_clear_listener = _listener;
}
void SoftButton_send_Lcd_clear(struct SoftButton_Instance *_instance){
if (SoftButton_send_Lcd_clear_listener != 0x0) SoftButton_send_Lcd_clear_listener(_instance);
if (external_SoftButton_send_Lcd_clear_listener != 0x0) external_SoftButton_send_Lcd_clear_listener(_instance);
;
}
void (*external_SoftButton_send_Lcd_print_simple_click_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_Lcd_print_simple_click_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_Lcd_print_simple_click_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_Lcd_print_simple_click_listener = _listener;
}
void register_SoftButton_send_Lcd_print_simple_click_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_Lcd_print_simple_click_listener = _listener;
}
void SoftButton_send_Lcd_print_simple_click(struct SoftButton_Instance *_instance){
if (SoftButton_send_Lcd_print_simple_click_listener != 0x0) SoftButton_send_Lcd_print_simple_click_listener(_instance);
if (external_SoftButton_send_Lcd_print_simple_click_listener != 0x0) external_SoftButton_send_Lcd_print_simple_click_listener(_instance);
;
}
void (*external_SoftButton_send_Lcd_print_double_click_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_Lcd_print_double_click_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_Lcd_print_double_click_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_Lcd_print_double_click_listener = _listener;
}
void register_SoftButton_send_Lcd_print_double_click_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_Lcd_print_double_click_listener = _listener;
}
void SoftButton_send_Lcd_print_double_click(struct SoftButton_Instance *_instance){
if (SoftButton_send_Lcd_print_double_click_listener != 0x0) SoftButton_send_Lcd_print_double_click_listener(_instance);
if (external_SoftButton_send_Lcd_print_double_click_listener != 0x0) external_SoftButton_send_Lcd_print_double_click_listener(_instance);
;
}
void (*external_SoftButton_send_Lcd_print_long_click_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_Lcd_print_long_click_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_Lcd_print_long_click_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_Lcd_print_long_click_listener = _listener;
}
void register_SoftButton_send_Lcd_print_long_click_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_Lcd_print_long_click_listener = _listener;
}
void SoftButton_send_Lcd_print_long_click(struct SoftButton_Instance *_instance){
if (SoftButton_send_Lcd_print_long_click_listener != 0x0) SoftButton_send_Lcd_print_long_click_listener(_instance);
if (external_SoftButton_send_Lcd_print_long_click_listener != 0x0) external_SoftButton_send_Lcd_print_long_click_listener(_instance);
;
}
void (*external_SoftButton_send_SoftButton_click_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_SoftButton_click_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_SoftButton_click_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_SoftButton_click_listener = _listener;
}
void register_SoftButton_send_SoftButton_click_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_SoftButton_click_listener = _listener;
}
void SoftButton_send_SoftButton_click(struct SoftButton_Instance *_instance){
if (SoftButton_send_SoftButton_click_listener != 0x0) SoftButton_send_SoftButton_click_listener(_instance);
if (external_SoftButton_send_SoftButton_click_listener != 0x0) external_SoftButton_send_SoftButton_click_listener(_instance);
;
}
void (*external_SoftButton_send_SoftButton_double_click_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_SoftButton_double_click_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_SoftButton_double_click_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_SoftButton_double_click_listener = _listener;
}
void register_SoftButton_send_SoftButton_double_click_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_SoftButton_double_click_listener = _listener;
}
void SoftButton_send_SoftButton_double_click(struct SoftButton_Instance *_instance){
if (SoftButton_send_SoftButton_double_click_listener != 0x0) SoftButton_send_SoftButton_double_click_listener(_instance);
if (external_SoftButton_send_SoftButton_double_click_listener != 0x0) external_SoftButton_send_SoftButton_double_click_listener(_instance);
;
}
void (*external_SoftButton_send_SoftButton_long_press_listener)(struct SoftButton_Instance *)= 0x0;
void (*SoftButton_send_SoftButton_long_press_listener)(struct SoftButton_Instance *)= 0x0;
void register_external_SoftButton_send_SoftButton_long_press_listener(void (*_listener)(struct SoftButton_Instance *)){
external_SoftButton_send_SoftButton_long_press_listener = _listener;
}
void register_SoftButton_send_SoftButton_long_press_listener(void (*_listener)(struct SoftButton_Instance *)){
SoftButton_send_SoftButton_long_press_listener = _listener;
}
void SoftButton_send_SoftButton_long_press(struct SoftButton_Instance *_instance){
if (SoftButton_send_SoftButton_long_press_listener != 0x0) SoftButton_send_SoftButton_long_press_listener(_instance);
if (external_SoftButton_send_SoftButton_long_press_listener != 0x0) external_SoftButton_send_SoftButton_long_press_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : Button
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Button_Button_OnExit(int state, struct Button_Instance *_instance);
//Prototypes: Message Sending
void Button_send_evt_press(struct Button_Instance *_instance);
void Button_send_evt_release(struct Button_Instance *_instance);
//Prototypes: Function
uint8_t f_Button_is_pressed(struct Button_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_Button_is_pressed(struct Button_Instance *_instance) {
return digitalRead(_instance->Button_PIN_var);
}

// Sessions functionss:


// On Entry Actions:
void Button_Button_OnEntry(int state, struct Button_Instance *_instance) {
switch(state) {
case BUTTON_BUTTON_STATE:{
_instance->Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
Button_Button_OnEntry(_instance->Button_Button_State, _instance);
break;
}
case BUTTON_BUTTON_RELEASED_STATE:{
break;
}
case BUTTON_BUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void Button_Button_OnExit(int state, struct Button_Instance *_instance) {
switch(state) {
case BUTTON_BUTTON_STATE:{
Button_Button_OnExit(_instance->Button_Button_State, _instance);
break;}
case BUTTON_BUTTON_RELEASED_STATE:{
break;}
case BUTTON_BUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Button_handle_clock_ms25_tic(struct Button_Instance *_instance) {
if(!(_instance->active)) return;
//Region Button
uint8_t Button_Button_State_event_consumed = 0;
if (_instance->Button_Button_State == BUTTON_BUTTON_RELEASED_STATE) {
if (Button_Button_State_event_consumed == 0 && f_Button_is_pressed(_instance)) {
Button_Button_OnExit(BUTTON_BUTTON_RELEASED_STATE, _instance);
_instance->Button_Button_State = BUTTON_BUTTON_PRESSED_STATE;
Button_send_evt_press(_instance);
Button_Button_OnEntry(BUTTON_BUTTON_PRESSED_STATE, _instance);
Button_Button_State_event_consumed = 1;
}
}
else if (_instance->Button_Button_State == BUTTON_BUTTON_PRESSED_STATE) {
if (Button_Button_State_event_consumed == 0 &&  !(f_Button_is_pressed(_instance))) {
Button_Button_OnExit(BUTTON_BUTTON_PRESSED_STATE, _instance);
_instance->Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
Button_send_evt_release(_instance);
Button_Button_OnEntry(BUTTON_BUTTON_RELEASED_STATE, _instance);
Button_Button_State_event_consumed = 1;
}
}
//End Region Button
//End dsregion Button
//Session list: 
}

// Observers for outgoing messages:
void (*external_Button_send_evt_press_listener)(struct Button_Instance *)= 0x0;
void (*Button_send_evt_press_listener)(struct Button_Instance *)= 0x0;
void register_external_Button_send_evt_press_listener(void (*_listener)(struct Button_Instance *)){
external_Button_send_evt_press_listener = _listener;
}
void register_Button_send_evt_press_listener(void (*_listener)(struct Button_Instance *)){
Button_send_evt_press_listener = _listener;
}
void Button_send_evt_press(struct Button_Instance *_instance){
if (Button_send_evt_press_listener != 0x0) Button_send_evt_press_listener(_instance);
if (external_Button_send_evt_press_listener != 0x0) external_Button_send_evt_press_listener(_instance);
;
}
void (*external_Button_send_evt_release_listener)(struct Button_Instance *)= 0x0;
void (*Button_send_evt_release_listener)(struct Button_Instance *)= 0x0;
void register_external_Button_send_evt_release_listener(void (*_listener)(struct Button_Instance *)){
external_Button_send_evt_release_listener = _listener;
}
void register_Button_send_evt_release_listener(void (*_listener)(struct Button_Instance *)){
Button_send_evt_release_listener = _listener;
}
void Button_send_evt_release(struct Button_Instance *_instance){
if (Button_send_evt_release_listener != 0x0) Button_send_evt_release_listener(_instance);
if (external_Button_send_evt_release_listener != 0x0) external_Button_send_evt_release_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : DOWNbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void DOWNbutton_I2CDOWNButton_OnExit(int state, struct DOWNbutton_Instance *_instance);
//Prototypes: Message Sending
void DOWNbutton_send_listener_down_pressed(struct DOWNbutton_Instance *_instance);
void DOWNbutton_send_listener_down_released(struct DOWNbutton_Instance *_instance);
//Prototypes: Function
uint8_t f_DOWNbutton_is_pressed(struct DOWNbutton_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_DOWNbutton_is_pressed(struct DOWNbutton_Instance *_instance) {
return _instance->DOWNbutton_data_var& BUTTON_DOWN;
}

// Sessions functionss:


// On Entry Actions:
void DOWNbutton_I2CDOWNButton_OnEntry(int state, struct DOWNbutton_Instance *_instance) {
switch(state) {
case DOWNBUTTON_I2CDOWNBUTTON_STATE:{
_instance->DOWNbutton_I2CDOWNButton_State = DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE;
DOWNbutton_I2CDOWNButton_OnEntry(_instance->DOWNbutton_I2CDOWNButton_State, _instance);
break;
}
case DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE:{
break;
}
case DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void DOWNbutton_I2CDOWNButton_OnExit(int state, struct DOWNbutton_Instance *_instance) {
switch(state) {
case DOWNBUTTON_I2CDOWNBUTTON_STATE:{
DOWNbutton_I2CDOWNButton_OnExit(_instance->DOWNbutton_I2CDOWNButton_State, _instance);
break;}
case DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE:{
break;}
case DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void DOWNbutton_handle_clock_ms25_tic(struct DOWNbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CDOWNButton
uint8_t DOWNbutton_I2CDOWNButton_State_event_consumed = 0;
if (_instance->DOWNbutton_I2CDOWNButton_State == DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE) {
if (DOWNbutton_I2CDOWNButton_State_event_consumed == 0 && f_DOWNbutton_is_pressed(_instance)) {
DOWNbutton_I2CDOWNButton_OnExit(DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE, _instance);
_instance->DOWNbutton_I2CDOWNButton_State = DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE;
DOWNbutton_send_listener_down_pressed(_instance);
DOWNbutton_I2CDOWNButton_OnEntry(DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE, _instance);
DOWNbutton_I2CDOWNButton_State_event_consumed = 1;
}
}
else if (_instance->DOWNbutton_I2CDOWNButton_State == DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE) {
if (DOWNbutton_I2CDOWNButton_State_event_consumed == 0 &&  !(f_DOWNbutton_is_pressed(_instance))) {
DOWNbutton_I2CDOWNButton_OnExit(DOWNBUTTON_I2CDOWNBUTTON_PRESSED_STATE, _instance);
_instance->DOWNbutton_I2CDOWNButton_State = DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE;
DOWNbutton_send_listener_down_released(_instance);
DOWNbutton_I2CDOWNButton_OnEntry(DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE, _instance);
DOWNbutton_I2CDOWNButton_State_event_consumed = 1;
}
}
//End Region I2CDOWNButton
//End dsregion I2CDOWNButton
//Session list: 
}
void DOWNbutton_handle_I2CShieldButtonMsg_buttons_state(struct DOWNbutton_Instance *_instance, uint8_t msg) {
if(!(_instance->active)) return;
//Region I2CDOWNButton
uint8_t DOWNbutton_I2CDOWNButton_State_event_consumed = 0;
//End Region I2CDOWNButton
//End dsregion I2CDOWNButton
//Session list: 
if (1) {
_instance->DOWNbutton_data_var = msg;
DOWNbutton_I2CDOWNButton_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_DOWNbutton_send_listener_down_pressed_listener)(struct DOWNbutton_Instance *)= 0x0;
void (*DOWNbutton_send_listener_down_pressed_listener)(struct DOWNbutton_Instance *)= 0x0;
void register_external_DOWNbutton_send_listener_down_pressed_listener(void (*_listener)(struct DOWNbutton_Instance *)){
external_DOWNbutton_send_listener_down_pressed_listener = _listener;
}
void register_DOWNbutton_send_listener_down_pressed_listener(void (*_listener)(struct DOWNbutton_Instance *)){
DOWNbutton_send_listener_down_pressed_listener = _listener;
}
void DOWNbutton_send_listener_down_pressed(struct DOWNbutton_Instance *_instance){
if (DOWNbutton_send_listener_down_pressed_listener != 0x0) DOWNbutton_send_listener_down_pressed_listener(_instance);
if (external_DOWNbutton_send_listener_down_pressed_listener != 0x0) external_DOWNbutton_send_listener_down_pressed_listener(_instance);
;
}
void (*external_DOWNbutton_send_listener_down_released_listener)(struct DOWNbutton_Instance *)= 0x0;
void (*DOWNbutton_send_listener_down_released_listener)(struct DOWNbutton_Instance *)= 0x0;
void register_external_DOWNbutton_send_listener_down_released_listener(void (*_listener)(struct DOWNbutton_Instance *)){
external_DOWNbutton_send_listener_down_released_listener = _listener;
}
void register_DOWNbutton_send_listener_down_released_listener(void (*_listener)(struct DOWNbutton_Instance *)){
DOWNbutton_send_listener_down_released_listener = _listener;
}
void DOWNbutton_send_listener_down_released(struct DOWNbutton_Instance *_instance){
if (DOWNbutton_send_listener_down_released_listener != 0x0) DOWNbutton_send_listener_down_released_listener(_instance);
if (external_DOWNbutton_send_listener_down_released_listener != 0x0) external_DOWNbutton_send_listener_down_released_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : I2CProvider
 *****************************************************************************/


// BEGIN: Code from the c_global annotation I2CProvider

Adafruit_RGBLCDShield lcd = Adafruit_RGBLCDShield();
uint8_t backlight = WHITE;
// END: Code from the c_global annotation I2CProvider

// Declaration of prototypes:
//Prototypes: State Machine
void I2CProvider_RGBLCDShieldSM_OnExit(int state, struct I2CProvider_Instance *_instance);
//Prototypes: Message Sending
void I2CProvider_send_lcd_LCDready(struct I2CProvider_Instance *_instance);
void I2CProvider_send_buttonAccess_buttons_state(struct I2CProvider_Instance *_instance, uint8_t msg);
//Prototypes: Function
uint8_t f_I2CProvider_bstate(struct I2CProvider_Instance *_instance);
// Declaration of functions:
// Definition of function bstate
uint8_t f_I2CProvider_bstate(struct I2CProvider_Instance *_instance) {
return lcd.readButtons();
}

// Sessions functionss:


// On Entry Actions:
void I2CProvider_RGBLCDShieldSM_OnEntry(int state, struct I2CProvider_Instance *_instance) {
switch(state) {
case I2CPROVIDER_RGBLCDSHIELDSM_STATE:{
_instance->I2CProvider_RGBLCDShieldSM_State = I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE;
I2CProvider_RGBLCDShieldSM_OnEntry(_instance->I2CProvider_RGBLCDShieldSM_State, _instance);
break;
}
case I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE:{
break;
}
case I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE:{
lcd.begin(16, 2);         // initialize display colums and rows
  			  lcd.setBacklight(WHITE);  // Set to OFF if you do not want backlight on boot
  			  lcd.setCursor(0,0);
			  lcd.print("                ");
			  lcd.setCursor(0,1);
			  lcd.print("                ");
			  lcd.setCursor(0,0);
break;
}
case I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void I2CProvider_RGBLCDShieldSM_OnExit(int state, struct I2CProvider_Instance *_instance) {
switch(state) {
case I2CPROVIDER_RGBLCDSHIELDSM_STATE:{
I2CProvider_RGBLCDShieldSM_OnExit(_instance->I2CProvider_RGBLCDShieldSM_State, _instance);
break;}
case I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE:{
break;}
case I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE:{
break;}
case I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void I2CProvider_handle_lcd_print_long_click(struct I2CProvider_Instance *_instance) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.setCursor(0,0);lcd.print("Long   Click");
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_lcd_print_double_click(struct I2CProvider_Instance *_instance) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.setCursor(0,0);lcd.print("Double Click");
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_lcd_print_num(struct I2CProvider_Instance *_instance, int16_t num) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.print(num);
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_lcd_clear(struct I2CProvider_Instance *_instance) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.setCursor(0,0);
												  lcd.print("                ");
												  lcd.setCursor(0,1);
												  lcd.print("                ");
												  lcd.setCursor(0,0);
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_lcd_print_dec(struct I2CProvider_Instance *_instance, float num) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.print(num);
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_lcd_print_simple_click(struct I2CProvider_Instance *_instance) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
lcd.setCursor(0,0);lcd.print("Simple Click");
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
void I2CProvider_handle_clock_ms25_tic(struct I2CProvider_Instance *_instance) {
if(!(_instance->active)) return;
//Region RGBLCDShieldSM
uint8_t I2CProvider_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE) {
if (I2CProvider_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
I2CProvider_send_buttonAccess_buttons_state(_instance, f_I2CProvider_bstate(_instance));
I2CProvider_RGBLCDShieldSM_State_event_consumed = 1;
}
}
//End Region RGBLCDShieldSM
//End dsregion RGBLCDShieldSM
//Session list: 
}
int I2CProvider_handle_empty_event(struct I2CProvider_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region RGBLCDShieldSM
if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE) {
if (1) {
I2CProvider_RGBLCDShieldSM_OnExit(I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE, _instance);
_instance->I2CProvider_RGBLCDShieldSM_State = I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE;
I2CProvider_RGBLCDShieldSM_OnEntry(I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE, _instance);
return 1;
}
}
else if (_instance->I2CProvider_RGBLCDShieldSM_State == I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE) {
if (1) {
I2CProvider_RGBLCDShieldSM_OnExit(I2CPROVIDER_RGBLCDSHIELDSM_SETUP_STATE, _instance);
_instance->I2CProvider_RGBLCDShieldSM_State = I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE;
I2CProvider_send_lcd_LCDready(_instance);
I2CProvider_RGBLCDShieldSM_OnEntry(I2CPROVIDER_RGBLCDSHIELDSM_IDLE_STATE, _instance);
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_I2CProvider_send_lcd_LCDready_listener)(struct I2CProvider_Instance *)= 0x0;
void (*I2CProvider_send_lcd_LCDready_listener)(struct I2CProvider_Instance *)= 0x0;
void register_external_I2CProvider_send_lcd_LCDready_listener(void (*_listener)(struct I2CProvider_Instance *)){
external_I2CProvider_send_lcd_LCDready_listener = _listener;
}
void register_I2CProvider_send_lcd_LCDready_listener(void (*_listener)(struct I2CProvider_Instance *)){
I2CProvider_send_lcd_LCDready_listener = _listener;
}
void I2CProvider_send_lcd_LCDready(struct I2CProvider_Instance *_instance){
if (I2CProvider_send_lcd_LCDready_listener != 0x0) I2CProvider_send_lcd_LCDready_listener(_instance);
if (external_I2CProvider_send_lcd_LCDready_listener != 0x0) external_I2CProvider_send_lcd_LCDready_listener(_instance);
;
}
void (*external_I2CProvider_send_buttonAccess_buttons_state_listener)(struct I2CProvider_Instance *, uint8_t)= 0x0;
void (*I2CProvider_send_buttonAccess_buttons_state_listener)(struct I2CProvider_Instance *, uint8_t)= 0x0;
void register_external_I2CProvider_send_buttonAccess_buttons_state_listener(void (*_listener)(struct I2CProvider_Instance *, uint8_t)){
external_I2CProvider_send_buttonAccess_buttons_state_listener = _listener;
}
void register_I2CProvider_send_buttonAccess_buttons_state_listener(void (*_listener)(struct I2CProvider_Instance *, uint8_t)){
I2CProvider_send_buttonAccess_buttons_state_listener = _listener;
}
void I2CProvider_send_buttonAccess_buttons_state(struct I2CProvider_Instance *_instance, uint8_t msg){
if (I2CProvider_send_buttonAccess_buttons_state_listener != 0x0) I2CProvider_send_buttonAccess_buttons_state_listener(_instance, msg);
if (external_I2CProvider_send_buttonAccess_buttons_state_listener != 0x0) external_I2CProvider_send_buttonAccess_buttons_state_listener(_instance, msg);
;
}



/*****************************************************************************
 * Implementation for type : TestSoftButtonDoubleClick
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void TestSoftButtonDoubleClick_Region1_OnExit(int state, struct TestSoftButtonDoubleClick_Instance *_instance);
//Prototypes: Message Sending
void TestSoftButtonDoubleClick_send_led_led_ON(struct TestSoftButtonDoubleClick_Instance *_instance);
void TestSoftButtonDoubleClick_send_led_led_OFF(struct TestSoftButtonDoubleClick_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void TestSoftButtonDoubleClick_Region1_OnEntry(int state, struct TestSoftButtonDoubleClick_Instance *_instance) {
switch(state) {
case TESTSOFTBUTTONDOUBLECLICK_REGION1_STATE:{
_instance->TestSoftButtonDoubleClick_Region1_State = TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE;
TestSoftButtonDoubleClick_Region1_OnEntry(_instance->TestSoftButtonDoubleClick_Region1_State, _instance);
break;
}
case TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE:{
TestSoftButtonDoubleClick_send_led_led_OFF(_instance);
break;
}
case TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE:{
TestSoftButtonDoubleClick_send_led_led_ON(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void TestSoftButtonDoubleClick_Region1_OnExit(int state, struct TestSoftButtonDoubleClick_Instance *_instance) {
switch(state) {
case TESTSOFTBUTTONDOUBLECLICK_REGION1_STATE:{
TestSoftButtonDoubleClick_Region1_OnExit(_instance->TestSoftButtonDoubleClick_Region1_State, _instance);
break;}
case TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE:{
break;}
case TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void TestSoftButtonDoubleClick_handle_softbut_double_click(struct TestSoftButtonDoubleClick_Instance *_instance) {
if(!(_instance->active)) return;
//Region Region1
uint8_t TestSoftButtonDoubleClick_Region1_State_event_consumed = 0;
if (_instance->TestSoftButtonDoubleClick_Region1_State == TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE) {
if (TestSoftButtonDoubleClick_Region1_State_event_consumed == 0 && 1) {
TestSoftButtonDoubleClick_Region1_OnExit(TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE, _instance);
_instance->TestSoftButtonDoubleClick_Region1_State = TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE;
TestSoftButtonDoubleClick_Region1_OnEntry(TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE, _instance);
TestSoftButtonDoubleClick_Region1_State_event_consumed = 1;
}
}
else if (_instance->TestSoftButtonDoubleClick_Region1_State == TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE) {
if (TestSoftButtonDoubleClick_Region1_State_event_consumed == 0 && 1) {
TestSoftButtonDoubleClick_Region1_OnExit(TESTSOFTBUTTONDOUBLECLICK_REGION1_ON_STATE, _instance);
_instance->TestSoftButtonDoubleClick_Region1_State = TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE;
TestSoftButtonDoubleClick_Region1_OnEntry(TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE, _instance);
TestSoftButtonDoubleClick_Region1_State_event_consumed = 1;
}
}
//End Region Region1
//End dsregion Region1
//Session list: 
}

// Observers for outgoing messages:
void (*external_TestSoftButtonDoubleClick_send_led_led_ON_listener)(struct TestSoftButtonDoubleClick_Instance *)= 0x0;
void (*TestSoftButtonDoubleClick_send_led_led_ON_listener)(struct TestSoftButtonDoubleClick_Instance *)= 0x0;
void register_external_TestSoftButtonDoubleClick_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *)){
external_TestSoftButtonDoubleClick_send_led_led_ON_listener = _listener;
}
void register_TestSoftButtonDoubleClick_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *)){
TestSoftButtonDoubleClick_send_led_led_ON_listener = _listener;
}
void TestSoftButtonDoubleClick_send_led_led_ON(struct TestSoftButtonDoubleClick_Instance *_instance){
if (TestSoftButtonDoubleClick_send_led_led_ON_listener != 0x0) TestSoftButtonDoubleClick_send_led_led_ON_listener(_instance);
if (external_TestSoftButtonDoubleClick_send_led_led_ON_listener != 0x0) external_TestSoftButtonDoubleClick_send_led_led_ON_listener(_instance);
;
}
void (*external_TestSoftButtonDoubleClick_send_led_led_OFF_listener)(struct TestSoftButtonDoubleClick_Instance *)= 0x0;
void (*TestSoftButtonDoubleClick_send_led_led_OFF_listener)(struct TestSoftButtonDoubleClick_Instance *)= 0x0;
void register_external_TestSoftButtonDoubleClick_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *)){
external_TestSoftButtonDoubleClick_send_led_led_OFF_listener = _listener;
}
void register_TestSoftButtonDoubleClick_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonDoubleClick_Instance *)){
TestSoftButtonDoubleClick_send_led_led_OFF_listener = _listener;
}
void TestSoftButtonDoubleClick_send_led_led_OFF(struct TestSoftButtonDoubleClick_Instance *_instance){
if (TestSoftButtonDoubleClick_send_led_led_OFF_listener != 0x0) TestSoftButtonDoubleClick_send_led_led_OFF_listener(_instance);
if (external_TestSoftButtonDoubleClick_send_led_led_OFF_listener != 0x0) external_TestSoftButtonDoubleClick_send_led_led_OFF_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : SELECTbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void SELECTbutton_I2CSELECTButton_OnExit(int state, struct SELECTbutton_Instance *_instance);
//Prototypes: Message Sending
void SELECTbutton_send_listener_select_pressed(struct SELECTbutton_Instance *_instance);
void SELECTbutton_send_listener_select_released(struct SELECTbutton_Instance *_instance);
//Prototypes: Function
uint8_t f_SELECTbutton_is_pressed(struct SELECTbutton_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_SELECTbutton_is_pressed(struct SELECTbutton_Instance *_instance) {
return _instance->SELECTbutton_data_var& BUTTON_SELECT;
}

// Sessions functionss:


// On Entry Actions:
void SELECTbutton_I2CSELECTButton_OnEntry(int state, struct SELECTbutton_Instance *_instance) {
switch(state) {
case SELECTBUTTON_I2CSELECTBUTTON_STATE:{
_instance->SELECTbutton_I2CSELECTButton_State = SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE;
SELECTbutton_I2CSELECTButton_OnEntry(_instance->SELECTbutton_I2CSELECTButton_State, _instance);
break;
}
case SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE:{
break;
}
case SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void SELECTbutton_I2CSELECTButton_OnExit(int state, struct SELECTbutton_Instance *_instance) {
switch(state) {
case SELECTBUTTON_I2CSELECTBUTTON_STATE:{
SELECTbutton_I2CSELECTButton_OnExit(_instance->SELECTbutton_I2CSELECTButton_State, _instance);
break;}
case SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE:{
break;}
case SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void SELECTbutton_handle_clock_ms25_tic(struct SELECTbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CSELECTButton
uint8_t SELECTbutton_I2CSELECTButton_State_event_consumed = 0;
if (_instance->SELECTbutton_I2CSELECTButton_State == SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE) {
if (SELECTbutton_I2CSELECTButton_State_event_consumed == 0 && f_SELECTbutton_is_pressed(_instance)) {
SELECTbutton_I2CSELECTButton_OnExit(SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE, _instance);
_instance->SELECTbutton_I2CSELECTButton_State = SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE;
SELECTbutton_send_listener_select_pressed(_instance);
SELECTbutton_I2CSELECTButton_OnEntry(SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE, _instance);
SELECTbutton_I2CSELECTButton_State_event_consumed = 1;
}
}
else if (_instance->SELECTbutton_I2CSELECTButton_State == SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE) {
if (SELECTbutton_I2CSELECTButton_State_event_consumed == 0 &&  !(f_SELECTbutton_is_pressed(_instance))) {
SELECTbutton_I2CSELECTButton_OnExit(SELECTBUTTON_I2CSELECTBUTTON_PRESSED_STATE, _instance);
_instance->SELECTbutton_I2CSELECTButton_State = SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE;
SELECTbutton_send_listener_select_released(_instance);
SELECTbutton_I2CSELECTButton_OnEntry(SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE, _instance);
SELECTbutton_I2CSELECTButton_State_event_consumed = 1;
}
}
//End Region I2CSELECTButton
//End dsregion I2CSELECTButton
//Session list: 
}
void SELECTbutton_handle_I2CShieldButtonMsg_buttons_state(struct SELECTbutton_Instance *_instance, uint8_t msg) {
if(!(_instance->active)) return;
//Region I2CSELECTButton
uint8_t SELECTbutton_I2CSELECTButton_State_event_consumed = 0;
//End Region I2CSELECTButton
//End dsregion I2CSELECTButton
//Session list: 
if (1) {
_instance->SELECTbutton_data_var = msg;
SELECTbutton_I2CSELECTButton_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_SELECTbutton_send_listener_select_pressed_listener)(struct SELECTbutton_Instance *)= 0x0;
void (*SELECTbutton_send_listener_select_pressed_listener)(struct SELECTbutton_Instance *)= 0x0;
void register_external_SELECTbutton_send_listener_select_pressed_listener(void (*_listener)(struct SELECTbutton_Instance *)){
external_SELECTbutton_send_listener_select_pressed_listener = _listener;
}
void register_SELECTbutton_send_listener_select_pressed_listener(void (*_listener)(struct SELECTbutton_Instance *)){
SELECTbutton_send_listener_select_pressed_listener = _listener;
}
void SELECTbutton_send_listener_select_pressed(struct SELECTbutton_Instance *_instance){
if (SELECTbutton_send_listener_select_pressed_listener != 0x0) SELECTbutton_send_listener_select_pressed_listener(_instance);
if (external_SELECTbutton_send_listener_select_pressed_listener != 0x0) external_SELECTbutton_send_listener_select_pressed_listener(_instance);
;
}
void (*external_SELECTbutton_send_listener_select_released_listener)(struct SELECTbutton_Instance *)= 0x0;
void (*SELECTbutton_send_listener_select_released_listener)(struct SELECTbutton_Instance *)= 0x0;
void register_external_SELECTbutton_send_listener_select_released_listener(void (*_listener)(struct SELECTbutton_Instance *)){
external_SELECTbutton_send_listener_select_released_listener = _listener;
}
void register_SELECTbutton_send_listener_select_released_listener(void (*_listener)(struct SELECTbutton_Instance *)){
SELECTbutton_send_listener_select_released_listener = _listener;
}
void SELECTbutton_send_listener_select_released(struct SELECTbutton_Instance *_instance){
if (SELECTbutton_send_listener_select_released_listener != 0x0) SELECTbutton_send_listener_select_released_listener(_instance);
if (external_SELECTbutton_send_listener_select_released_listener != 0x0) external_SELECTbutton_send_listener_select_released_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : I2Cbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void I2Cbutton_I2CButton_OnExit(int state, struct I2Cbutton_Instance *_instance);
//Prototypes: Message Sending
void I2Cbutton_send_button_up_press(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_up_release(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_down_press(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_down_release(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_left_press(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_left_release(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_right_press(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_right_release(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_select_press(struct I2Cbutton_Instance *_instance);
void I2Cbutton_send_button_select_release(struct I2Cbutton_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void I2Cbutton_I2CButton_OnEntry(int state, struct I2Cbutton_Instance *_instance) {
switch(state) {
case I2CBUTTON_I2CBUTTON_STATE:{
_instance->I2Cbutton_I2CButton_State = I2CBUTTON_I2CBUTTON_NONE_STATE;
I2Cbutton_I2CButton_OnEntry(_instance->I2Cbutton_I2CButton_State, _instance);
break;
}
case I2CBUTTON_I2CBUTTON_NONE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void I2Cbutton_I2CButton_OnExit(int state, struct I2Cbutton_Instance *_instance) {
switch(state) {
case I2CBUTTON_I2CBUTTON_STATE:{
I2Cbutton_I2CButton_OnExit(_instance->I2Cbutton_I2CButton_State, _instance);
break;}
case I2CBUTTON_I2CBUTTON_NONE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void I2Cbutton_handle_listener_right_released(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_right_release(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_select_pressed(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_select_press(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_down_pressed(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_down_press(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_left_released(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_left_release(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_right_pressed(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_right_press(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_left_pressed(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_left_press(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_up_pressed(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_up_press(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_down_released(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_down_release(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_up_released(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_up_release(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}
void I2Cbutton_handle_listener_select_released(struct I2Cbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CButton
uint8_t I2Cbutton_I2CButton_State_event_consumed = 0;
if (_instance->I2Cbutton_I2CButton_State == I2CBUTTON_I2CBUTTON_NONE_STATE) {
if (I2Cbutton_I2CButton_State_event_consumed == 0 && 1) {
I2Cbutton_send_button_select_release(_instance);
I2Cbutton_I2CButton_State_event_consumed = 1;
}
}
//End Region I2CButton
//End dsregion I2CButton
//Session list: 
}

// Observers for outgoing messages:
void (*external_I2Cbutton_send_button_up_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_up_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_up_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_up_press_listener = _listener;
}
void register_I2Cbutton_send_button_up_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_up_press_listener = _listener;
}
void I2Cbutton_send_button_up_press(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_up_press_listener != 0x0) I2Cbutton_send_button_up_press_listener(_instance);
if (external_I2Cbutton_send_button_up_press_listener != 0x0) external_I2Cbutton_send_button_up_press_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_up_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_up_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_up_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_up_release_listener = _listener;
}
void register_I2Cbutton_send_button_up_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_up_release_listener = _listener;
}
void I2Cbutton_send_button_up_release(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_up_release_listener != 0x0) I2Cbutton_send_button_up_release_listener(_instance);
if (external_I2Cbutton_send_button_up_release_listener != 0x0) external_I2Cbutton_send_button_up_release_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_down_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_down_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_down_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_down_press_listener = _listener;
}
void register_I2Cbutton_send_button_down_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_down_press_listener = _listener;
}
void I2Cbutton_send_button_down_press(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_down_press_listener != 0x0) I2Cbutton_send_button_down_press_listener(_instance);
if (external_I2Cbutton_send_button_down_press_listener != 0x0) external_I2Cbutton_send_button_down_press_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_down_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_down_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_down_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_down_release_listener = _listener;
}
void register_I2Cbutton_send_button_down_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_down_release_listener = _listener;
}
void I2Cbutton_send_button_down_release(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_down_release_listener != 0x0) I2Cbutton_send_button_down_release_listener(_instance);
if (external_I2Cbutton_send_button_down_release_listener != 0x0) external_I2Cbutton_send_button_down_release_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_left_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_left_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_left_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_left_press_listener = _listener;
}
void register_I2Cbutton_send_button_left_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_left_press_listener = _listener;
}
void I2Cbutton_send_button_left_press(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_left_press_listener != 0x0) I2Cbutton_send_button_left_press_listener(_instance);
if (external_I2Cbutton_send_button_left_press_listener != 0x0) external_I2Cbutton_send_button_left_press_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_left_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_left_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_left_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_left_release_listener = _listener;
}
void register_I2Cbutton_send_button_left_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_left_release_listener = _listener;
}
void I2Cbutton_send_button_left_release(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_left_release_listener != 0x0) I2Cbutton_send_button_left_release_listener(_instance);
if (external_I2Cbutton_send_button_left_release_listener != 0x0) external_I2Cbutton_send_button_left_release_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_right_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_right_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_right_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_right_press_listener = _listener;
}
void register_I2Cbutton_send_button_right_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_right_press_listener = _listener;
}
void I2Cbutton_send_button_right_press(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_right_press_listener != 0x0) I2Cbutton_send_button_right_press_listener(_instance);
if (external_I2Cbutton_send_button_right_press_listener != 0x0) external_I2Cbutton_send_button_right_press_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_right_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_right_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_right_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_right_release_listener = _listener;
}
void register_I2Cbutton_send_button_right_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_right_release_listener = _listener;
}
void I2Cbutton_send_button_right_release(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_right_release_listener != 0x0) I2Cbutton_send_button_right_release_listener(_instance);
if (external_I2Cbutton_send_button_right_release_listener != 0x0) external_I2Cbutton_send_button_right_release_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_select_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_select_press_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_select_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_select_press_listener = _listener;
}
void register_I2Cbutton_send_button_select_press_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_select_press_listener = _listener;
}
void I2Cbutton_send_button_select_press(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_select_press_listener != 0x0) I2Cbutton_send_button_select_press_listener(_instance);
if (external_I2Cbutton_send_button_select_press_listener != 0x0) external_I2Cbutton_send_button_select_press_listener(_instance);
;
}
void (*external_I2Cbutton_send_button_select_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void (*I2Cbutton_send_button_select_release_listener)(struct I2Cbutton_Instance *)= 0x0;
void register_external_I2Cbutton_send_button_select_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
external_I2Cbutton_send_button_select_release_listener = _listener;
}
void register_I2Cbutton_send_button_select_release_listener(void (*_listener)(struct I2Cbutton_Instance *)){
I2Cbutton_send_button_select_release_listener = _listener;
}
void I2Cbutton_send_button_select_release(struct I2Cbutton_Instance *_instance){
if (I2Cbutton_send_button_select_release_listener != 0x0) I2Cbutton_send_button_select_release_listener(_instance);
if (external_I2Cbutton_send_button_select_release_listener != 0x0) external_I2Cbutton_send_button_select_release_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : LED
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void LED_LED_OnExit(int state, struct LED_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_LED_setDigitalOutput(struct LED_Instance *_instance, uint8_t pin);
void f_LED_digitalWrite(struct LED_Instance *_instance, uint8_t pin, uint8_t value);
// Declaration of functions:
// Definition of function setDigitalOutput
void f_LED_setDigitalOutput(struct LED_Instance *_instance, uint8_t pin) {
pinMode(pin, OUTPUT);
}
// Definition of function digitalWrite
void f_LED_digitalWrite(struct LED_Instance *_instance, uint8_t pin, uint8_t value) {
digitalWrite(pin, value);
}

// Sessions functionss:


// On Entry Actions:
void LED_LED_OnEntry(int state, struct LED_Instance *_instance) {
switch(state) {
case LED_LED_STATE:{
_instance->LED_LED_State = LED_LED_READY_STATE;
f_LED_setDigitalOutput(_instance, _instance->LED_PIN_var);
LED_LED_OnEntry(_instance->LED_LED_State, _instance);
break;
}
case LED_LED_READY_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void LED_LED_OnExit(int state, struct LED_Instance *_instance) {
switch(state) {
case LED_LED_STATE:{
LED_LED_OnExit(_instance->LED_LED_State, _instance);
break;}
case LED_LED_READY_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance) {
if(!(_instance->active)) return;
//Region LED
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN_var, 0);
LED_LED_State_event_consumed = 1;
}
}
//End Region LED
//End dsregion LED
//Session list: 
}
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance) {
if(!(_instance->active)) return;
//Region LED
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN_var, 1);
LED_LED_State_event_consumed = 1;
}
}
//End Region LED
//End dsregion LED
//Session list: 
}

// Observers for outgoing messages:




#define MAX_INSTANCES 41
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
  return 0; // Dummy added by steffend
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

/*****************************************************************************
 * Implementation for type : LEFTbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void LEFTbutton_I2CLEFTButton_OnExit(int state, struct LEFTbutton_Instance *_instance);
//Prototypes: Message Sending
void LEFTbutton_send_listener_left_pressed(struct LEFTbutton_Instance *_instance);
void LEFTbutton_send_listener_left_released(struct LEFTbutton_Instance *_instance);
//Prototypes: Function
uint8_t f_LEFTbutton_is_pressed(struct LEFTbutton_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_LEFTbutton_is_pressed(struct LEFTbutton_Instance *_instance) {
return _instance->LEFTbutton_data_var& BUTTON_LEFT;
}

// Sessions functionss:


// On Entry Actions:
void LEFTbutton_I2CLEFTButton_OnEntry(int state, struct LEFTbutton_Instance *_instance) {
switch(state) {
case LEFTBUTTON_I2CLEFTBUTTON_STATE:{
_instance->LEFTbutton_I2CLEFTButton_State = LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE;
LEFTbutton_I2CLEFTButton_OnEntry(_instance->LEFTbutton_I2CLEFTButton_State, _instance);
break;
}
case LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE:{
break;
}
case LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void LEFTbutton_I2CLEFTButton_OnExit(int state, struct LEFTbutton_Instance *_instance) {
switch(state) {
case LEFTBUTTON_I2CLEFTBUTTON_STATE:{
LEFTbutton_I2CLEFTButton_OnExit(_instance->LEFTbutton_I2CLEFTButton_State, _instance);
break;}
case LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE:{
break;}
case LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void LEFTbutton_handle_clock_ms25_tic(struct LEFTbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CLEFTButton
uint8_t LEFTbutton_I2CLEFTButton_State_event_consumed = 0;
if (_instance->LEFTbutton_I2CLEFTButton_State == LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE) {
if (LEFTbutton_I2CLEFTButton_State_event_consumed == 0 && f_LEFTbutton_is_pressed(_instance)) {
LEFTbutton_I2CLEFTButton_OnExit(LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE, _instance);
_instance->LEFTbutton_I2CLEFTButton_State = LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE;
LEFTbutton_send_listener_left_pressed(_instance);
LEFTbutton_I2CLEFTButton_OnEntry(LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE, _instance);
LEFTbutton_I2CLEFTButton_State_event_consumed = 1;
}
}
else if (_instance->LEFTbutton_I2CLEFTButton_State == LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE) {
if (LEFTbutton_I2CLEFTButton_State_event_consumed == 0 &&  !(f_LEFTbutton_is_pressed(_instance))) {
LEFTbutton_I2CLEFTButton_OnExit(LEFTBUTTON_I2CLEFTBUTTON_PRESSED_STATE, _instance);
_instance->LEFTbutton_I2CLEFTButton_State = LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE;
LEFTbutton_send_listener_left_released(_instance);
LEFTbutton_I2CLEFTButton_OnEntry(LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE, _instance);
LEFTbutton_I2CLEFTButton_State_event_consumed = 1;
}
}
//End Region I2CLEFTButton
//End dsregion I2CLEFTButton
//Session list: 
}
void LEFTbutton_handle_I2CShieldButtonMsg_buttons_state(struct LEFTbutton_Instance *_instance, uint8_t msg) {
if(!(_instance->active)) return;
//Region I2CLEFTButton
uint8_t LEFTbutton_I2CLEFTButton_State_event_consumed = 0;
//End Region I2CLEFTButton
//End dsregion I2CLEFTButton
//Session list: 
if (1) {
_instance->LEFTbutton_data_var = msg;
LEFTbutton_I2CLEFTButton_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_LEFTbutton_send_listener_left_pressed_listener)(struct LEFTbutton_Instance *)= 0x0;
void (*LEFTbutton_send_listener_left_pressed_listener)(struct LEFTbutton_Instance *)= 0x0;
void register_external_LEFTbutton_send_listener_left_pressed_listener(void (*_listener)(struct LEFTbutton_Instance *)){
external_LEFTbutton_send_listener_left_pressed_listener = _listener;
}
void register_LEFTbutton_send_listener_left_pressed_listener(void (*_listener)(struct LEFTbutton_Instance *)){
LEFTbutton_send_listener_left_pressed_listener = _listener;
}
void LEFTbutton_send_listener_left_pressed(struct LEFTbutton_Instance *_instance){
if (LEFTbutton_send_listener_left_pressed_listener != 0x0) LEFTbutton_send_listener_left_pressed_listener(_instance);
if (external_LEFTbutton_send_listener_left_pressed_listener != 0x0) external_LEFTbutton_send_listener_left_pressed_listener(_instance);
;
}
void (*external_LEFTbutton_send_listener_left_released_listener)(struct LEFTbutton_Instance *)= 0x0;
void (*LEFTbutton_send_listener_left_released_listener)(struct LEFTbutton_Instance *)= 0x0;
void register_external_LEFTbutton_send_listener_left_released_listener(void (*_listener)(struct LEFTbutton_Instance *)){
external_LEFTbutton_send_listener_left_released_listener = _listener;
}
void register_LEFTbutton_send_listener_left_released_listener(void (*_listener)(struct LEFTbutton_Instance *)){
LEFTbutton_send_listener_left_released_listener = _listener;
}
void LEFTbutton_send_listener_left_released(struct LEFTbutton_Instance *_instance){
if (LEFTbutton_send_listener_left_released_listener != 0x0) LEFTbutton_send_listener_left_released_listener(_instance);
if (external_LEFTbutton_send_listener_left_released_listener != 0x0) external_LEFTbutton_send_listener_left_released_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : TestSoftButtonLongPress
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void TestSoftButtonLongPress_Region1_OnExit(int state, struct TestSoftButtonLongPress_Instance *_instance);
//Prototypes: Message Sending
void TestSoftButtonLongPress_send_led_led_ON(struct TestSoftButtonLongPress_Instance *_instance);
void TestSoftButtonLongPress_send_led_led_OFF(struct TestSoftButtonLongPress_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void TestSoftButtonLongPress_Region1_OnEntry(int state, struct TestSoftButtonLongPress_Instance *_instance) {
switch(state) {
case TESTSOFTBUTTONLONGPRESS_REGION1_STATE:{
_instance->TestSoftButtonLongPress_Region1_State = TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE;
TestSoftButtonLongPress_Region1_OnEntry(_instance->TestSoftButtonLongPress_Region1_State, _instance);
break;
}
case TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE:{
TestSoftButtonLongPress_send_led_led_OFF(_instance);
break;
}
case TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE:{
TestSoftButtonLongPress_send_led_led_ON(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void TestSoftButtonLongPress_Region1_OnExit(int state, struct TestSoftButtonLongPress_Instance *_instance) {
switch(state) {
case TESTSOFTBUTTONLONGPRESS_REGION1_STATE:{
TestSoftButtonLongPress_Region1_OnExit(_instance->TestSoftButtonLongPress_Region1_State, _instance);
break;}
case TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE:{
break;}
case TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void TestSoftButtonLongPress_handle_softbut_long_press(struct TestSoftButtonLongPress_Instance *_instance) {
if(!(_instance->active)) return;
//Region Region1
uint8_t TestSoftButtonLongPress_Region1_State_event_consumed = 0;
if (_instance->TestSoftButtonLongPress_Region1_State == TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE) {
if (TestSoftButtonLongPress_Region1_State_event_consumed == 0 && 1) {
TestSoftButtonLongPress_Region1_OnExit(TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE, _instance);
_instance->TestSoftButtonLongPress_Region1_State = TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE;
TestSoftButtonLongPress_Region1_OnEntry(TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE, _instance);
TestSoftButtonLongPress_Region1_State_event_consumed = 1;
}
}
else if (_instance->TestSoftButtonLongPress_Region1_State == TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE) {
if (TestSoftButtonLongPress_Region1_State_event_consumed == 0 && 1) {
TestSoftButtonLongPress_Region1_OnExit(TESTSOFTBUTTONLONGPRESS_REGION1_ON_STATE, _instance);
_instance->TestSoftButtonLongPress_Region1_State = TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE;
TestSoftButtonLongPress_Region1_OnEntry(TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE, _instance);
TestSoftButtonLongPress_Region1_State_event_consumed = 1;
}
}
//End Region Region1
//End dsregion Region1
//Session list: 
}

// Observers for outgoing messages:
void (*external_TestSoftButtonLongPress_send_led_led_ON_listener)(struct TestSoftButtonLongPress_Instance *)= 0x0;
void (*TestSoftButtonLongPress_send_led_led_ON_listener)(struct TestSoftButtonLongPress_Instance *)= 0x0;
void register_external_TestSoftButtonLongPress_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *)){
external_TestSoftButtonLongPress_send_led_led_ON_listener = _listener;
}
void register_TestSoftButtonLongPress_send_led_led_ON_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *)){
TestSoftButtonLongPress_send_led_led_ON_listener = _listener;
}
void TestSoftButtonLongPress_send_led_led_ON(struct TestSoftButtonLongPress_Instance *_instance){
if (TestSoftButtonLongPress_send_led_led_ON_listener != 0x0) TestSoftButtonLongPress_send_led_led_ON_listener(_instance);
if (external_TestSoftButtonLongPress_send_led_led_ON_listener != 0x0) external_TestSoftButtonLongPress_send_led_led_ON_listener(_instance);
;
}
void (*external_TestSoftButtonLongPress_send_led_led_OFF_listener)(struct TestSoftButtonLongPress_Instance *)= 0x0;
void (*TestSoftButtonLongPress_send_led_led_OFF_listener)(struct TestSoftButtonLongPress_Instance *)= 0x0;
void register_external_TestSoftButtonLongPress_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *)){
external_TestSoftButtonLongPress_send_led_led_OFF_listener = _listener;
}
void register_TestSoftButtonLongPress_send_led_led_OFF_listener(void (*_listener)(struct TestSoftButtonLongPress_Instance *)){
TestSoftButtonLongPress_send_led_led_OFF_listener = _listener;
}
void TestSoftButtonLongPress_send_led_led_OFF(struct TestSoftButtonLongPress_Instance *_instance){
if (TestSoftButtonLongPress_send_led_led_OFF_listener != 0x0) TestSoftButtonLongPress_send_led_led_OFF_listener(_instance);
if (external_TestSoftButtonLongPress_send_led_led_OFF_listener != 0x0) external_TestSoftButtonLongPress_send_led_led_OFF_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : UPbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void UPbutton_I2CUPButton_OnExit(int state, struct UPbutton_Instance *_instance);
//Prototypes: Message Sending
void UPbutton_send_listener_up_pressed(struct UPbutton_Instance *_instance);
void UPbutton_send_listener_up_released(struct UPbutton_Instance *_instance);
//Prototypes: Function
uint8_t f_UPbutton_is_pressed(struct UPbutton_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_UPbutton_is_pressed(struct UPbutton_Instance *_instance) {
return _instance->UPbutton_data_var& BUTTON_UP;
}

// Sessions functionss:


// On Entry Actions:
void UPbutton_I2CUPButton_OnEntry(int state, struct UPbutton_Instance *_instance) {
switch(state) {
case UPBUTTON_I2CUPBUTTON_STATE:{
_instance->UPbutton_I2CUPButton_State = UPBUTTON_I2CUPBUTTON_RELEASED_STATE;
UPbutton_I2CUPButton_OnEntry(_instance->UPbutton_I2CUPButton_State, _instance);
break;
}
case UPBUTTON_I2CUPBUTTON_RELEASED_STATE:{
break;
}
case UPBUTTON_I2CUPBUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void UPbutton_I2CUPButton_OnExit(int state, struct UPbutton_Instance *_instance) {
switch(state) {
case UPBUTTON_I2CUPBUTTON_STATE:{
UPbutton_I2CUPButton_OnExit(_instance->UPbutton_I2CUPButton_State, _instance);
break;}
case UPBUTTON_I2CUPBUTTON_RELEASED_STATE:{
break;}
case UPBUTTON_I2CUPBUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void UPbutton_handle_I2CShieldButtonMsg_buttons_state(struct UPbutton_Instance *_instance, uint8_t msg) {
if(!(_instance->active)) return;
//Region I2CUPButton
uint8_t UPbutton_I2CUPButton_State_event_consumed = 0;
//End Region I2CUPButton
//End dsregion I2CUPButton
//Session list: 
if (1) {
_instance->UPbutton_data_var = msg;
UPbutton_I2CUPButton_State_event_consumed = 1;
}
}
void UPbutton_handle_clock_ms25_tic(struct UPbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CUPButton
uint8_t UPbutton_I2CUPButton_State_event_consumed = 0;
if (_instance->UPbutton_I2CUPButton_State == UPBUTTON_I2CUPBUTTON_RELEASED_STATE) {
if (UPbutton_I2CUPButton_State_event_consumed == 0 && f_UPbutton_is_pressed(_instance)) {
UPbutton_I2CUPButton_OnExit(UPBUTTON_I2CUPBUTTON_RELEASED_STATE, _instance);
_instance->UPbutton_I2CUPButton_State = UPBUTTON_I2CUPBUTTON_PRESSED_STATE;
UPbutton_send_listener_up_pressed(_instance);
UPbutton_I2CUPButton_OnEntry(UPBUTTON_I2CUPBUTTON_PRESSED_STATE, _instance);
UPbutton_I2CUPButton_State_event_consumed = 1;
}
}
else if (_instance->UPbutton_I2CUPButton_State == UPBUTTON_I2CUPBUTTON_PRESSED_STATE) {
if (UPbutton_I2CUPButton_State_event_consumed == 0 &&  !(f_UPbutton_is_pressed(_instance))) {
UPbutton_I2CUPButton_OnExit(UPBUTTON_I2CUPBUTTON_PRESSED_STATE, _instance);
_instance->UPbutton_I2CUPButton_State = UPBUTTON_I2CUPBUTTON_RELEASED_STATE;
UPbutton_send_listener_up_released(_instance);
UPbutton_I2CUPButton_OnEntry(UPBUTTON_I2CUPBUTTON_RELEASED_STATE, _instance);
UPbutton_I2CUPButton_State_event_consumed = 1;
}
}
//End Region I2CUPButton
//End dsregion I2CUPButton
//Session list: 
}

// Observers for outgoing messages:
void (*external_UPbutton_send_listener_up_pressed_listener)(struct UPbutton_Instance *)= 0x0;
void (*UPbutton_send_listener_up_pressed_listener)(struct UPbutton_Instance *)= 0x0;
void register_external_UPbutton_send_listener_up_pressed_listener(void (*_listener)(struct UPbutton_Instance *)){
external_UPbutton_send_listener_up_pressed_listener = _listener;
}
void register_UPbutton_send_listener_up_pressed_listener(void (*_listener)(struct UPbutton_Instance *)){
UPbutton_send_listener_up_pressed_listener = _listener;
}
void UPbutton_send_listener_up_pressed(struct UPbutton_Instance *_instance){
if (UPbutton_send_listener_up_pressed_listener != 0x0) UPbutton_send_listener_up_pressed_listener(_instance);
if (external_UPbutton_send_listener_up_pressed_listener != 0x0) external_UPbutton_send_listener_up_pressed_listener(_instance);
;
}
void (*external_UPbutton_send_listener_up_released_listener)(struct UPbutton_Instance *)= 0x0;
void (*UPbutton_send_listener_up_released_listener)(struct UPbutton_Instance *)= 0x0;
void register_external_UPbutton_send_listener_up_released_listener(void (*_listener)(struct UPbutton_Instance *)){
external_UPbutton_send_listener_up_released_listener = _listener;
}
void register_UPbutton_send_listener_up_released_listener(void (*_listener)(struct UPbutton_Instance *)){
UPbutton_send_listener_up_released_listener = _listener;
}
void UPbutton_send_listener_up_released(struct UPbutton_Instance *_instance){
if (UPbutton_send_listener_up_released_listener != 0x0) UPbutton_send_listener_up_released_listener(_instance);
if (external_UPbutton_send_listener_up_released_listener != 0x0) external_UPbutton_send_listener_up_released_listener(_instance);
;
}



#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_tic_flags = 0;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 25) == 0) {
timer2_tic_flags |= 0b00000001;
}
if(timer2_interrupt_counter >= 25) {
timer2_interrupt_counter = 0;
}
}



struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} timer2_instance;

void timer2_setup() {
	// Run timer2 interrupt up counting at 250kHz 
		 TCCR2A = 0;
		 TCCR2B = 1<<CS22 | 0<<CS21 | 0<<CS20;
		
		 //Timer2 Overflow Interrupt Enable
		 TIMSK2 |= 1<<TOIE2;


	timer2_prev_1sec = millis() + 1000;
}

void timer2_set_listener_id(uint16_t id) {
	timer2_instance.listener_id = id;
}

void timer2_timer_start(uint8_t id, uint32_t ms) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = ms + millis();
}
}

void timer2_timer_cancel(uint8_t id) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = 0;
}
}

void timer2_timeout(uint8_t id) {
uint8_t enqueue_buf[3];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
enqueue_buf[2] = id;
externalMessageEnqueue(enqueue_buf, 3, timer2_instance.listener_id);
}

void timer2_25ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (2 >> 8) & 0xFF;
enqueue_buf[1] = 2 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    uint8_t t;
for(t = 0; t < 4; t++) {
if((timer2_timer[t] > 0) && (timer2_timer[t] < tms)) {
timer2_timer[t] = 0;
timer2_timeout(t);
}
}

    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_25ms_tic();
timer2_tic_flags &= 0b11111110;
}

}
// Forwarding of messages timer2::SoftButton::Timer::timer_start
void forward_timer2_SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::SoftButton::Timer::timer_cancel
void forward_timer2_SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : RIGHTbutton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void RIGHTbutton_I2CRIGHTButton_OnExit(int state, struct RIGHTbutton_Instance *_instance);
//Prototypes: Message Sending
void RIGHTbutton_send_listener_right_pressed(struct RIGHTbutton_Instance *_instance);
void RIGHTbutton_send_listener_right_released(struct RIGHTbutton_Instance *_instance);
//Prototypes: Function
uint8_t f_RIGHTbutton_is_pressed(struct RIGHTbutton_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_RIGHTbutton_is_pressed(struct RIGHTbutton_Instance *_instance) {
return _instance->RIGHTbutton_data_var& BUTTON_RIGHT;
}

// Sessions functionss:


// On Entry Actions:
void RIGHTbutton_I2CRIGHTButton_OnEntry(int state, struct RIGHTbutton_Instance *_instance) {
switch(state) {
case RIGHTBUTTON_I2CRIGHTBUTTON_STATE:{
_instance->RIGHTbutton_I2CRIGHTButton_State = RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE;
RIGHTbutton_I2CRIGHTButton_OnEntry(_instance->RIGHTbutton_I2CRIGHTButton_State, _instance);
break;
}
case RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE:{
break;
}
case RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void RIGHTbutton_I2CRIGHTButton_OnExit(int state, struct RIGHTbutton_Instance *_instance) {
switch(state) {
case RIGHTBUTTON_I2CRIGHTBUTTON_STATE:{
RIGHTbutton_I2CRIGHTButton_OnExit(_instance->RIGHTbutton_I2CRIGHTButton_State, _instance);
break;}
case RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE:{
break;}
case RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void RIGHTbutton_handle_I2CShieldButtonMsg_buttons_state(struct RIGHTbutton_Instance *_instance, uint8_t msg) {
if(!(_instance->active)) return;
//Region I2CRIGHTButton
uint8_t RIGHTbutton_I2CRIGHTButton_State_event_consumed = 0;
//End Region I2CRIGHTButton
//End dsregion I2CRIGHTButton
//Session list: 
if (1) {
_instance->RIGHTbutton_data_var = msg;
RIGHTbutton_I2CRIGHTButton_State_event_consumed = 1;
}
}
void RIGHTbutton_handle_clock_ms25_tic(struct RIGHTbutton_Instance *_instance) {
if(!(_instance->active)) return;
//Region I2CRIGHTButton
uint8_t RIGHTbutton_I2CRIGHTButton_State_event_consumed = 0;
if (_instance->RIGHTbutton_I2CRIGHTButton_State == RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE) {
if (RIGHTbutton_I2CRIGHTButton_State_event_consumed == 0 && f_RIGHTbutton_is_pressed(_instance)) {
RIGHTbutton_I2CRIGHTButton_OnExit(RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE, _instance);
_instance->RIGHTbutton_I2CRIGHTButton_State = RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE;
RIGHTbutton_send_listener_right_pressed(_instance);
RIGHTbutton_I2CRIGHTButton_OnEntry(RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE, _instance);
RIGHTbutton_I2CRIGHTButton_State_event_consumed = 1;
}
}
else if (_instance->RIGHTbutton_I2CRIGHTButton_State == RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE) {
if (RIGHTbutton_I2CRIGHTButton_State_event_consumed == 0 &&  !(f_RIGHTbutton_is_pressed(_instance))) {
RIGHTbutton_I2CRIGHTButton_OnExit(RIGHTBUTTON_I2CRIGHTBUTTON_PRESSED_STATE, _instance);
_instance->RIGHTbutton_I2CRIGHTButton_State = RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE;
RIGHTbutton_send_listener_right_released(_instance);
RIGHTbutton_I2CRIGHTButton_OnEntry(RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE, _instance);
RIGHTbutton_I2CRIGHTButton_State_event_consumed = 1;
}
}
//End Region I2CRIGHTButton
//End dsregion I2CRIGHTButton
//Session list: 
}

// Observers for outgoing messages:
void (*external_RIGHTbutton_send_listener_right_pressed_listener)(struct RIGHTbutton_Instance *)= 0x0;
void (*RIGHTbutton_send_listener_right_pressed_listener)(struct RIGHTbutton_Instance *)= 0x0;
void register_external_RIGHTbutton_send_listener_right_pressed_listener(void (*_listener)(struct RIGHTbutton_Instance *)){
external_RIGHTbutton_send_listener_right_pressed_listener = _listener;
}
void register_RIGHTbutton_send_listener_right_pressed_listener(void (*_listener)(struct RIGHTbutton_Instance *)){
RIGHTbutton_send_listener_right_pressed_listener = _listener;
}
void RIGHTbutton_send_listener_right_pressed(struct RIGHTbutton_Instance *_instance){
if (RIGHTbutton_send_listener_right_pressed_listener != 0x0) RIGHTbutton_send_listener_right_pressed_listener(_instance);
if (external_RIGHTbutton_send_listener_right_pressed_listener != 0x0) external_RIGHTbutton_send_listener_right_pressed_listener(_instance);
;
}
void (*external_RIGHTbutton_send_listener_right_released_listener)(struct RIGHTbutton_Instance *)= 0x0;
void (*RIGHTbutton_send_listener_right_released_listener)(struct RIGHTbutton_Instance *)= 0x0;
void register_external_RIGHTbutton_send_listener_right_released_listener(void (*_listener)(struct RIGHTbutton_Instance *)){
external_RIGHTbutton_send_listener_right_released_listener = _listener;
}
void register_RIGHTbutton_send_listener_right_released_listener(void (*_listener)(struct RIGHTbutton_Instance *)){
RIGHTbutton_send_listener_right_released_listener = _listener;
}
void RIGHTbutton_send_listener_right_released(struct RIGHTbutton_Instance *_instance){
if (RIGHTbutton_send_listener_right_released_listener != 0x0) RIGHTbutton_send_listener_right_released_listener(_instance);
if (external_RIGHTbutton_send_listener_right_released_listener != 0x0) external_RIGHTbutton_send_listener_right_released_listener(_instance);
;
}






/*****************************************************************************
 * Definitions for configuration : Adafruit_I2C_Shield_App
 *****************************************************************************/

//Declaration of instance variables
//Instance right
// Variables for the properties of the instance
struct RIGHTbutton_Instance right_var;
// Variables for the sessions of the instance
//Instance select
// Variables for the properties of the instance
struct SELECTbutton_Instance select_var;
// Variables for the sessions of the instance
//Instance l1
// Variables for the properties of the instance
struct LED_Instance l1_var;
// Variables for the sessions of the instance
//Instance up
// Variables for the properties of the instance
struct UPbutton_Instance up_var;
// Variables for the sessions of the instance
//Instance down
// Variables for the properties of the instance
struct DOWNbutton_Instance down_var;
// Variables for the sessions of the instance
//Instance left
// Variables for the properties of the instance
struct LEFTbutton_Instance left_var;
// Variables for the sessions of the instance
//Instance sbut
// Variables for the properties of the instance
struct SoftButton_Instance sbut_var;
// Variables for the sessions of the instance
//Instance button
// Variables for the properties of the instance
struct Button_Instance button_var;
// Variables for the sessions of the instance
//Instance app2
// Variables for the properties of the instance
struct TestSoftButtonLongPress_Instance app2_var;
// Variables for the sessions of the instance
//Instance I2CScreen
// Variables for the properties of the instance
struct I2CProvider_Instance I2CScreen_var;
// Variables for the sessions of the instance
//Instance l2
// Variables for the properties of the instance
struct LED_Instance l2_var;
// Variables for the sessions of the instance
//Instance I2CButton
// Variables for the properties of the instance
struct I2Cbutton_Instance I2CButton_var;
// Variables for the sessions of the instance
//Instance app1
// Variables for the properties of the instance
struct TestSoftButtonDoubleClick_Instance app1_var;
// Variables for the sessions of the instance


// Enqueue of messages RIGHTbutton::listener::right_released
void enqueue_RIGHTbutton_send_listener_right_released(struct RIGHTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages RIGHTbutton::listener::right_pressed
void enqueue_RIGHTbutton_send_listener_right_pressed(struct RIGHTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages SELECTbutton::listener::select_pressed
void enqueue_SELECTbutton_send_listener_select_pressed(struct SELECTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages SELECTbutton::listener::select_released
void enqueue_SELECTbutton_send_listener_select_released(struct SELECTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages UPbutton::listener::up_pressed
void enqueue_UPbutton_send_listener_up_pressed(struct UPbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages UPbutton::listener::up_released
void enqueue_UPbutton_send_listener_up_released(struct UPbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages DOWNbutton::listener::down_pressed
void enqueue_DOWNbutton_send_listener_down_pressed(struct DOWNbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages DOWNbutton::listener::down_released
void enqueue_DOWNbutton_send_listener_down_released(struct DOWNbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages LEFTbutton::listener::left_released
void enqueue_LEFTbutton_send_listener_left_released(struct LEFTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages LEFTbutton::listener::left_pressed
void enqueue_LEFTbutton_send_listener_left_pressed(struct LEFTbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_listener >> 8) & 0xFF );
_fifo_enqueue( _instance->id_listener & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::print_long_click
void enqueue_SoftButton_send_Lcd_print_long_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::print_double_click
void enqueue_SoftButton_send_Lcd_print_double_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::print_num
void enqueue_SoftButton_send_Lcd_print_num(struct SoftButton_Instance *_instance, int16_t num){
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );

// parameter num
union u_num_t {
int16_t p;
byte bytebuffer[2];
} u_num;
u_num.p = num;
_fifo_enqueue(u_num.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_num.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::clear
void enqueue_SoftButton_send_Lcd_clear(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::print_dec
void enqueue_SoftButton_send_Lcd_print_dec(struct SoftButton_Instance *_instance, float num){
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );

// parameter num
union u_num_t {
float p;
byte bytebuffer[4];
} u_num;
u_num.p = num;
_fifo_enqueue(u_num.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_num.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_num.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_num.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages SoftButton::Lcd::print_simple_click
void enqueue_SoftButton_send_Lcd_print_simple_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Lcd >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Lcd & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::click
void enqueue_SoftButton_send_SoftButton_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (19 >> 8) & 0xFF );
_fifo_enqueue( 19 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::long_press
void enqueue_SoftButton_send_SoftButton_long_press(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (20 >> 8) & 0xFF );
_fifo_enqueue( 20 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::double_click
void enqueue_SoftButton_send_SoftButton_double_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (21 >> 8) & 0xFF );
_fifo_enqueue( 21 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages Button::evt::release
void enqueue_Button_send_evt_release(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (22 >> 8) & 0xFF );
_fifo_enqueue( 22 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages Button::evt::press
void enqueue_Button_send_evt_press(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (23 >> 8) & 0xFF );
_fifo_enqueue( 23 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages TestSoftButtonLongPress::led::led_OFF
void enqueue_TestSoftButtonLongPress_send_led_led_OFF(struct TestSoftButtonLongPress_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (24 >> 8) & 0xFF );
_fifo_enqueue( 24 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages TestSoftButtonLongPress::led::led_ON
void enqueue_TestSoftButtonLongPress_send_led_led_ON(struct TestSoftButtonLongPress_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (25 >> 8) & 0xFF );
_fifo_enqueue( 25 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages I2CProvider::buttonAccess::buttons_state
void enqueue_I2CProvider_send_buttonAccess_buttons_state(struct I2CProvider_Instance *_instance, uint8_t msg){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (26 >> 8) & 0xFF );
_fifo_enqueue( 26 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_buttonAccess >> 8) & 0xFF );
_fifo_enqueue( _instance->id_buttonAccess & 0xFF );

// parameter msg
union u_msg_t {
uint8_t p;
byte bytebuffer[1];
} u_msg;
u_msg.p = msg;
_fifo_enqueue(u_msg.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::down_press
void enqueue_I2Cbutton_send_button_down_press(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (27 >> 8) & 0xFF );
_fifo_enqueue( 27 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::left_release
void enqueue_I2Cbutton_send_button_left_release(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (28 >> 8) & 0xFF );
_fifo_enqueue( 28 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::down_release
void enqueue_I2Cbutton_send_button_down_release(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (29 >> 8) & 0xFF );
_fifo_enqueue( 29 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::left_press
void enqueue_I2Cbutton_send_button_left_press(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (30 >> 8) & 0xFF );
_fifo_enqueue( 30 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::up_release
void enqueue_I2Cbutton_send_button_up_release(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (31 >> 8) & 0xFF );
_fifo_enqueue( 31 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::right_release
void enqueue_I2Cbutton_send_button_right_release(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (32 >> 8) & 0xFF );
_fifo_enqueue( 32 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::right_press
void enqueue_I2Cbutton_send_button_right_press(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (33 >> 8) & 0xFF );
_fifo_enqueue( 33 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::select_release
void enqueue_I2Cbutton_send_button_select_release(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (34 >> 8) & 0xFF );
_fifo_enqueue( 34 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::up_press
void enqueue_I2Cbutton_send_button_up_press(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (35 >> 8) & 0xFF );
_fifo_enqueue( 35 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages I2Cbutton::button::select_press
void enqueue_I2Cbutton_send_button_select_press(struct I2Cbutton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (36 >> 8) & 0xFF );
_fifo_enqueue( 36 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_button >> 8) & 0xFF );
_fifo_enqueue( _instance->id_button & 0xFF );
}
}
// Enqueue of messages TestSoftButtonDoubleClick::led::led_OFF
void enqueue_TestSoftButtonDoubleClick_send_led_led_OFF(struct TestSoftButtonDoubleClick_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (24 >> 8) & 0xFF );
_fifo_enqueue( 24 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages TestSoftButtonDoubleClick::led::led_ON
void enqueue_TestSoftButtonDoubleClick_send_led_led_ON(struct TestSoftButtonDoubleClick_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (25 >> 8) & 0xFF );
_fifo_enqueue( 25 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}


//New dispatcher for messages
void dispatch_right_released(uint16_t sender) {
if (sender == right_var.id_listener) {
I2Cbutton_handle_listener_right_released(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_down_pressed(uint16_t sender) {
if (sender == down_var.id_listener) {
I2Cbutton_handle_listener_down_pressed(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_double_click(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {
TestSoftButtonDoubleClick_handle_softbut_double_click(&app1_var);

}

}


//New dispatcher for messages
void dispatch_buttons_state(uint16_t sender, uint8_t param_msg) {
if (sender == I2CScreen_var.id_buttonAccess) {
UPbutton_handle_I2CShieldButtonMsg_buttons_state(&up_var, param_msg);
DOWNbutton_handle_I2CShieldButtonMsg_buttons_state(&down_var, param_msg);
RIGHTbutton_handle_I2CShieldButtonMsg_buttons_state(&right_var, param_msg);
SELECTbutton_handle_I2CShieldButtonMsg_buttons_state(&select_var, param_msg);
LEFTbutton_handle_I2CShieldButtonMsg_buttons_state(&left_var, param_msg);

}

}


//New dispatcher for messages
void dispatch_clear(uint16_t sender) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_clear(&I2CScreen_var);

}

}


//New dispatcher for messages
void dispatch_up_pressed(uint16_t sender) {
if (sender == up_var.id_listener) {
I2Cbutton_handle_listener_up_pressed(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_select_released(uint16_t sender) {
if (sender == select_var.id_listener) {
I2Cbutton_handle_listener_select_released(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_print_simple_click(uint16_t sender) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_print_simple_click(&I2CScreen_var);

}

}


//New dispatcher for messages
void dispatch_long_press(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {
TestSoftButtonLongPress_handle_softbut_long_press(&app2_var);

}

}


//New dispatcher for messages
void dispatch_left_release(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_left_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_select_pressed(uint16_t sender) {
if (sender == select_var.id_listener) {
I2Cbutton_handle_listener_select_pressed(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_up_release(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_up_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_left_pressed(uint16_t sender) {
if (sender == left_var.id_listener) {
I2Cbutton_handle_listener_left_pressed(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_LCDready(uint16_t sender) {
if (sender == I2CScreen_var.id_lcd) {

}

}

void sync_dispatch_I2CProvider_send_lcd_LCDready(struct I2CProvider_Instance *_instance){
dispatch_LCDready(_instance->id_lcd);
}

//New dispatcher for messages
void dispatch_select_press(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_select_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_up_released(uint16_t sender) {
if (sender == up_var.id_listener) {
I2Cbutton_handle_listener_up_released(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_click(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {

}

}


//New dispatcher for messages
void dispatch_ms25_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Button_handle_clock_ms25_tic(&button_var);

}
if (sender == timer2_instance.listener_id) {
LEFTbutton_handle_clock_ms25_tic(&left_var);

}
if (sender == timer2_instance.listener_id) {
UPbutton_handle_clock_ms25_tic(&up_var);

}
if (sender == timer2_instance.listener_id) {
RIGHTbutton_handle_clock_ms25_tic(&right_var);

}
if (sender == timer2_instance.listener_id) {
I2CProvider_handle_clock_ms25_tic(&I2CScreen_var);

}
if (sender == timer2_instance.listener_id) {
DOWNbutton_handle_clock_ms25_tic(&down_var);

}
if (sender == timer2_instance.listener_id) {
SELECTbutton_handle_clock_ms25_tic(&select_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
SoftButton_handle_Timer_timer_timeout(&sbut_var, param_id);

}

}


//New dispatcher for messages
void dispatch_left_press(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_left_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_left_released(uint16_t sender) {
if (sender == left_var.id_listener) {
I2Cbutton_handle_listener_left_released(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_right_pressed(uint16_t sender) {
if (sender == right_var.id_listener) {
I2Cbutton_handle_listener_right_pressed(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_release(uint16_t sender) {
if (sender == button_var.id_evt) {
SoftButton_handle_Button_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_print_dec(uint16_t sender, float param_num) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_print_dec(&I2CScreen_var, param_num);

}

}


//New dispatcher for messages
void dispatch_up_press(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_up_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_down_press(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_down_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_down_release(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_down_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_led_OFF(uint16_t sender) {
if (sender == app1_var.id_led) {
LED_handle_ctrl_led_OFF(&l1_var);

}
if (sender == app2_var.id_led) {
LED_handle_ctrl_led_OFF(&l2_var);

}

}


//New dispatcher for messages
void dispatch_print_long_click(uint16_t sender) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_print_long_click(&I2CScreen_var);

}

}


//New dispatcher for messages
void dispatch_print_double_click(uint16_t sender) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_print_double_click(&I2CScreen_var);

}

}


//New dispatcher for messages
void dispatch_led_ON(uint16_t sender) {
if (sender == app1_var.id_led) {
LED_handle_ctrl_led_ON(&l1_var);

}
if (sender == app2_var.id_led) {
LED_handle_ctrl_led_ON(&l2_var);

}

}


//New dispatcher for messages
void dispatch_right_release(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_right_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_print_num(uint16_t sender, int16_t param_num) {
if (sender == sbut_var.id_Lcd) {
I2CProvider_handle_lcd_print_num(&I2CScreen_var, param_num);

}

}


//New dispatcher for messages
void dispatch_right_press(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_right_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_select_release(uint16_t sender) {
if (sender == I2CButton_var.id_button) {
SoftButton_handle_I2Cbutton_select_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_down_released(uint16_t sender) {
if (sender == down_var.id_listener) {
I2Cbutton_handle_listener_down_released(&I2CButton_var);

}

}


//New dispatcher for messages
void dispatch_press(uint16_t sender) {
if (sender == button_var.id_evt) {
SoftButton_handle_Button_press(&sbut_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_right_released = 2;
dispatch_right_released((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 9:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_down_pressed = 2;
dispatch_down_pressed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 21:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_double_click = 2;
dispatch_double_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 26:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_buttons_state = 2;
union u_buttons_state_msg_t {
uint8_t p;
byte bytebuffer[1];
} u_buttons_state_msg;
u_buttons_state_msg.bytebuffer[0] = mbuf[mbufi_buttons_state + 0];
mbufi_buttons_state += 1;
dispatch_buttons_state((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_buttons_state_msg.p /* msg */ );
break;
}
case 16:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_clear = 2;
dispatch_clear((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_up_pressed = 2;
dispatch_up_pressed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_select_released = 2;
dispatch_select_released((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 18:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_print_simple_click = 2;
dispatch_print_simple_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 20:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_long_press = 2;
dispatch_long_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 28:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_left_release = 2;
dispatch_left_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_select_pressed = 2;
dispatch_select_pressed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 31:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_up_release = 2;
dispatch_up_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 12:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_left_pressed = 2;
dispatch_left_pressed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_up_released = 2;
dispatch_up_released((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 36:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_select_press = 2;
dispatch_select_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 19:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_click = 2;
dispatch_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_ms25_tic = 2;
dispatch_ms25_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_timer_timeout = 2;
union u_timer_timeout_id_t {
uint8_t p;
byte bytebuffer[1];
} u_timer_timeout_id;
u_timer_timeout_id.bytebuffer[0] = mbuf[mbufi_timer_timeout + 0];
mbufi_timer_timeout += 1;
dispatch_timer_timeout((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_timer_timeout_id.p /* id */ );
break;
}
case 30:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_left_press = 2;
dispatch_left_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_left_released = 2;
dispatch_left_released((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_right_pressed = 2;
dispatch_right_pressed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 22:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_release = 2;
dispatch_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 17:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_print_dec = 2;
union u_print_dec_num_t {
float p;
byte bytebuffer[4];
} u_print_dec_num;
u_print_dec_num.bytebuffer[3] = mbuf[mbufi_print_dec + 0];
u_print_dec_num.bytebuffer[2] = mbuf[mbufi_print_dec + 1];
u_print_dec_num.bytebuffer[1] = mbuf[mbufi_print_dec + 2];
u_print_dec_num.bytebuffer[0] = mbuf[mbufi_print_dec + 3];
mbufi_print_dec += 4;
dispatch_print_dec((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_print_dec_num.p /* num */ );
break;
}
case 35:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_up_press = 2;
dispatch_up_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 27:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_down_press = 2;
dispatch_down_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 24:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_led_OFF = 2;
dispatch_led_OFF((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 29:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_down_release = 2;
dispatch_down_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 13:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_print_long_click = 2;
dispatch_print_long_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 14:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_print_double_click = 2;
dispatch_print_double_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 25:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_led_ON = 2;
dispatch_led_ON((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 15:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_print_num = 2;
union u_print_num_num_t {
int16_t p;
byte bytebuffer[2];
} u_print_num_num;
u_print_num_num.bytebuffer[1] = mbuf[mbufi_print_num + 0];
u_print_num_num.bytebuffer[0] = mbuf[mbufi_print_num + 1];
mbufi_print_num += 2;
dispatch_print_num((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_print_num_num.p /* num */ );
break;
}
case 32:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_right_release = 2;
dispatch_right_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 33:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_right_press = 2;
dispatch_right_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 34:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_select_release = 2;
dispatch_select_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_down_released = 2;
dispatch_down_released((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 23:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_press = 2;
dispatch_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id){
if(_instance->id_Timer == sbut_var.id_Timer) {
forward_timer2_SoftButton_send_Timer_timer_cancel(_instance, id);
}
}
void forward_SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_Timer == sbut_var.id_Timer) {
forward_timer2_SoftButton_send_Timer_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 1:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
}
}
}

void initialize_configuration_Adafruit_I2C_Shield_App() {
// Initialize connectors
register_external_SoftButton_send_Timer_timer_start_listener(&forward_SoftButton_send_Timer_timer_start);
register_external_SoftButton_send_Timer_timer_cancel_listener(&forward_SoftButton_send_Timer_timer_cancel);
register_RIGHTbutton_send_listener_right_pressed_listener(&enqueue_RIGHTbutton_send_listener_right_pressed);
register_RIGHTbutton_send_listener_right_released_listener(&enqueue_RIGHTbutton_send_listener_right_released);
register_SELECTbutton_send_listener_select_pressed_listener(&enqueue_SELECTbutton_send_listener_select_pressed);
register_SELECTbutton_send_listener_select_released_listener(&enqueue_SELECTbutton_send_listener_select_released);
register_UPbutton_send_listener_up_pressed_listener(&enqueue_UPbutton_send_listener_up_pressed);
register_UPbutton_send_listener_up_released_listener(&enqueue_UPbutton_send_listener_up_released);
register_DOWNbutton_send_listener_down_pressed_listener(&enqueue_DOWNbutton_send_listener_down_pressed);
register_DOWNbutton_send_listener_down_released_listener(&enqueue_DOWNbutton_send_listener_down_released);
register_LEFTbutton_send_listener_left_pressed_listener(&enqueue_LEFTbutton_send_listener_left_pressed);
register_LEFTbutton_send_listener_left_released_listener(&enqueue_LEFTbutton_send_listener_left_released);
register_SoftButton_send_Lcd_print_num_listener(&enqueue_SoftButton_send_Lcd_print_num);
register_SoftButton_send_Lcd_print_dec_listener(&enqueue_SoftButton_send_Lcd_print_dec);
register_SoftButton_send_Lcd_clear_listener(&enqueue_SoftButton_send_Lcd_clear);
register_SoftButton_send_Lcd_print_simple_click_listener(&enqueue_SoftButton_send_Lcd_print_simple_click);
register_SoftButton_send_Lcd_print_double_click_listener(&enqueue_SoftButton_send_Lcd_print_double_click);
register_SoftButton_send_Lcd_print_long_click_listener(&enqueue_SoftButton_send_Lcd_print_long_click);
register_SoftButton_send_SoftButton_click_listener(&enqueue_SoftButton_send_SoftButton_click);
register_SoftButton_send_SoftButton_double_click_listener(&enqueue_SoftButton_send_SoftButton_double_click);
register_SoftButton_send_SoftButton_long_press_listener(&enqueue_SoftButton_send_SoftButton_long_press);
register_Button_send_evt_press_listener(&enqueue_Button_send_evt_press);
register_Button_send_evt_release_listener(&enqueue_Button_send_evt_release);
register_TestSoftButtonLongPress_send_led_led_ON_listener(&enqueue_TestSoftButtonLongPress_send_led_led_ON);
register_TestSoftButtonLongPress_send_led_led_OFF_listener(&enqueue_TestSoftButtonLongPress_send_led_led_OFF);
register_I2CProvider_send_lcd_LCDready_listener(&sync_dispatch_I2CProvider_send_lcd_LCDready);
register_I2CProvider_send_buttonAccess_buttons_state_listener(&enqueue_I2CProvider_send_buttonAccess_buttons_state);
register_I2Cbutton_send_button_up_press_listener(&enqueue_I2Cbutton_send_button_up_press);
register_I2Cbutton_send_button_up_release_listener(&enqueue_I2Cbutton_send_button_up_release);
register_I2Cbutton_send_button_down_press_listener(&enqueue_I2Cbutton_send_button_down_press);
register_I2Cbutton_send_button_down_release_listener(&enqueue_I2Cbutton_send_button_down_release);
register_I2Cbutton_send_button_left_press_listener(&enqueue_I2Cbutton_send_button_left_press);
register_I2Cbutton_send_button_left_release_listener(&enqueue_I2Cbutton_send_button_left_release);
register_I2Cbutton_send_button_right_press_listener(&enqueue_I2Cbutton_send_button_right_press);
register_I2Cbutton_send_button_right_release_listener(&enqueue_I2Cbutton_send_button_right_release);
register_I2Cbutton_send_button_select_press_listener(&enqueue_I2Cbutton_send_button_select_press);
register_I2Cbutton_send_button_select_release_listener(&enqueue_I2Cbutton_send_button_select_release);
register_TestSoftButtonDoubleClick_send_led_led_ON_listener(&enqueue_TestSoftButtonDoubleClick_send_led_led_ON);
register_TestSoftButtonDoubleClick_send_led_led_OFF_listener(&enqueue_TestSoftButtonDoubleClick_send_led_led_OFF);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance I2CButton
I2CButton_var.active = true;
I2CButton_var.id_button = add_instance( (void*) &I2CButton_var);
I2CButton_var.id_listener = add_instance( (void*) &I2CButton_var);
I2CButton_var.I2Cbutton_I2CButton_State = I2CBUTTON_I2CBUTTON_NONE_STATE;

I2Cbutton_I2CButton_OnEntry(I2CBUTTON_I2CBUTTON_STATE, &I2CButton_var);
// Init the ID, state variables and properties for instance I2CScreen
I2CScreen_var.active = true;
I2CScreen_var.id_clock = add_instance( (void*) &I2CScreen_var);
I2CScreen_var.id_lcd = add_instance( (void*) &I2CScreen_var);
I2CScreen_var.id_buttonAccess = add_instance( (void*) &I2CScreen_var);
I2CScreen_var.I2CProvider_RGBLCDShieldSM_State = I2CPROVIDER_RGBLCDSHIELDSM_EMPTY_STATE;

I2CProvider_RGBLCDShieldSM_OnEntry(I2CPROVIDER_RGBLCDSHIELDSM_STATE, &I2CScreen_var);
// Init the ID, state variables and properties for instance right
right_var.active = true;
right_var.id_clock = add_instance( (void*) &right_var);
right_var.id_listener = add_instance( (void*) &right_var);
right_var.id_I2CShieldButtonMsg = add_instance( (void*) &right_var);
right_var.RIGHTbutton_I2CRIGHTButton_State = RIGHTBUTTON_I2CRIGHTBUTTON_RELEASED_STATE;
right_var.RIGHTbutton_data_var = 0;

RIGHTbutton_I2CRIGHTButton_OnEntry(RIGHTBUTTON_I2CRIGHTBUTTON_STATE, &right_var);
// Init the ID, state variables and properties for instance select
select_var.active = true;
select_var.id_clock = add_instance( (void*) &select_var);
select_var.id_listener = add_instance( (void*) &select_var);
select_var.id_I2CShieldButtonMsg = add_instance( (void*) &select_var);
select_var.SELECTbutton_I2CSELECTButton_State = SELECTBUTTON_I2CSELECTBUTTON_RELEASED_STATE;
select_var.SELECTbutton_data_var = 0;

SELECTbutton_I2CSELECTButton_OnEntry(SELECTBUTTON_I2CSELECTBUTTON_STATE, &select_var);
// Init the ID, state variables and properties for instance l1
l1_var.active = true;
l1_var.id_ctrl = add_instance( (void*) &l1_var);
l1_var.LED_LED_State = LED_LED_READY_STATE;
l1_var.LED_PIN_var = 11;

LED_LED_OnEntry(LED_LED_STATE, &l1_var);
// Init the ID, state variables and properties for instance up
up_var.active = true;
up_var.id_clock = add_instance( (void*) &up_var);
up_var.id_listener = add_instance( (void*) &up_var);
up_var.id_I2CShieldButtonMsg = add_instance( (void*) &up_var);
up_var.UPbutton_I2CUPButton_State = UPBUTTON_I2CUPBUTTON_RELEASED_STATE;
up_var.UPbutton_data_var = 0;

UPbutton_I2CUPButton_OnEntry(UPBUTTON_I2CUPBUTTON_STATE, &up_var);
// Init the ID, state variables and properties for instance down
down_var.active = true;
down_var.id_clock = add_instance( (void*) &down_var);
down_var.id_listener = add_instance( (void*) &down_var);
down_var.id_I2CShieldButtonMsg = add_instance( (void*) &down_var);
down_var.DOWNbutton_I2CDOWNButton_State = DOWNBUTTON_I2CDOWNBUTTON_RELEASED_STATE;
down_var.DOWNbutton_data_var = 0;

DOWNbutton_I2CDOWNButton_OnEntry(DOWNBUTTON_I2CDOWNBUTTON_STATE, &down_var);
// Init the ID, state variables and properties for instance left
left_var.active = true;
left_var.id_clock = add_instance( (void*) &left_var);
left_var.id_listener = add_instance( (void*) &left_var);
left_var.id_I2CShieldButtonMsg = add_instance( (void*) &left_var);
left_var.LEFTbutton_I2CLEFTButton_State = LEFTBUTTON_I2CLEFTBUTTON_RELEASED_STATE;
left_var.LEFTbutton_data_var = 0;

LEFTbutton_I2CLEFTButton_OnEntry(LEFTBUTTON_I2CLEFTBUTTON_STATE, &left_var);
// Init the ID, state variables and properties for instance button
button_var.active = true;
button_var.id_clock = add_instance( (void*) &button_var);
button_var.id_evt = add_instance( (void*) &button_var);
button_var.Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
button_var.Button_PIN_var = 8;

Button_Button_OnEntry(BUTTON_BUTTON_STATE, &button_var);
// Init the ID, state variables and properties for instance sbut
sbut_var.active = true;
sbut_var.id_I2Cbutton = add_instance( (void*) &sbut_var);
sbut_var.id_Button = add_instance( (void*) &sbut_var);
sbut_var.id_Timer = add_instance( (void*) &sbut_var);
sbut_var.id_Lcd = add_instance( (void*) &sbut_var);
sbut_var.id_SoftButton = add_instance( (void*) &sbut_var);
sbut_var.SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
sbut_var.SoftButton_double_delay_var = 250;
sbut_var.SoftButton_long_delay_var = 1000;

SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_STATE, &sbut_var);
// Init the ID, state variables and properties for instance l2
l2_var.active = true;
l2_var.id_ctrl = add_instance( (void*) &l2_var);
l2_var.LED_LED_State = LED_LED_READY_STATE;
l2_var.LED_PIN_var = 12;

LED_LED_OnEntry(LED_LED_STATE, &l2_var);
// Init the ID, state variables and properties for instance app2
app2_var.active = true;
app2_var.id_led = add_instance( (void*) &app2_var);
app2_var.id_softbut = add_instance( (void*) &app2_var);
app2_var.TestSoftButtonLongPress_Region1_State = TESTSOFTBUTTONLONGPRESS_REGION1_OFF_STATE;

TestSoftButtonLongPress_Region1_OnEntry(TESTSOFTBUTTONLONGPRESS_REGION1_STATE, &app2_var);
// Init the ID, state variables and properties for instance app1
app1_var.active = true;
app1_var.id_led = add_instance( (void*) &app1_var);
app1_var.id_softbut = add_instance( (void*) &app1_var);
app1_var.TestSoftButtonDoubleClick_Region1_State = TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE;

TestSoftButtonDoubleClick_Region1_OnEntry(TESTSOFTBUTTONDOUBLECLICK_REGION1_STATE, &app1_var);
}




void setup() {
Serial.begin(9600);
initialize_configuration_Adafruit_I2C_Shield_App();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener

I2CProvider_handle_empty_event(&I2CScreen_var);

    processMessageQueue();
}
