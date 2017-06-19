/*****************************************************************************
 * Headers for type : SoftButton
 *****************************************************************************/

// Definition of the instance struct:
struct SoftButton_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_Button;
uint16_t id_Timer;
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
void SoftButton_handle_Button_press(struct SoftButton_Instance *_instance);
void SoftButton_handle_Button_release(struct SoftButton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t));
void register_external_SoftButton_send_Timer_timer_start_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t, uint32_t));
void register_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t));
void register_external_SoftButton_send_Timer_timer_cancel_listener(void (*_listener)(struct SoftButton_Instance *, uint8_t));
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
void TestSoftButtonDoubleClick_handle_softbut_click(struct TestSoftButtonDoubleClick_Instance *_instance);
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
//timer2
// Definition of Enumeration  DigitalState
#define DIGITALSTATE_LOW 0
#define DIGITALSTATE_HIGH 1


/*****************************************************************************
 * Implementation for type : SoftButton
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void SoftButton_SoftButtonImpl_OnExit(int state, struct SoftButton_Instance *_instance);
//Prototypes: Message Sending
void SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time);
void SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id);
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
SoftButton_send_SoftButton_long_press(_instance);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
SoftButton_SoftButtonImpl_State_event_consumed = 1;
}
}
else if (_instance->SoftButton_SoftButtonImpl_State == SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE) {
if (SoftButton_SoftButtonImpl_State_event_consumed == 0 && 1) {
SoftButton_SoftButtonImpl_OnExit(SOFTBUTTON_SOFTBUTTONIMPL_RELEASED_STATE, _instance);
_instance->SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
SoftButton_send_SoftButton_click(_instance);
SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE, _instance);
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
SoftButton_send_SoftButton_double_click(_instance);
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




#define MAX_INSTANCES 13
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
void TestSoftButtonDoubleClick_handle_softbut_click(struct TestSoftButtonDoubleClick_Instance *_instance) {
if(!(_instance->active)) return;
//Region Region1
uint8_t TestSoftButtonDoubleClick_Region1_State_event_consumed = 0;
//End Region Region1
//End dsregion Region1
//Session list: 
if (1) {
Serial.print("CLICK\n");
TestSoftButtonDoubleClick_Region1_State_event_consumed = 1;
}
}
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
 * Definitions for configuration : Button3App
 *****************************************************************************/

//Declaration of instance variables
//Instance app1
// Variables for the properties of the instance
struct TestSoftButtonDoubleClick_Instance app1_var;
// Variables for the sessions of the instance
//Instance button
// Variables for the properties of the instance
struct Button_Instance button_var;
// Variables for the sessions of the instance
//Instance sbut
// Variables for the properties of the instance
struct SoftButton_Instance sbut_var;
// Variables for the sessions of the instance
//Instance l2
// Variables for the properties of the instance
struct LED_Instance l2_var;
// Variables for the sessions of the instance
//Instance app2
// Variables for the properties of the instance
struct TestSoftButtonLongPress_Instance app2_var;
// Variables for the sessions of the instance
//Instance l1
// Variables for the properties of the instance
struct LED_Instance l1_var;
// Variables for the sessions of the instance


// Enqueue of messages TestSoftButtonDoubleClick::led::led_OFF
void enqueue_TestSoftButtonDoubleClick_send_led_led_OFF(struct TestSoftButtonDoubleClick_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages TestSoftButtonDoubleClick::led::led_ON
void enqueue_TestSoftButtonDoubleClick_send_led_led_ON(struct TestSoftButtonDoubleClick_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages Button::evt::press
void enqueue_Button_send_evt_press(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages Button::evt::release
void enqueue_Button_send_evt_release(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::click
void enqueue_SoftButton_send_SoftButton_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::long_press
void enqueue_SoftButton_send_SoftButton_long_press(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages SoftButton::SoftButton::double_click
void enqueue_SoftButton_send_SoftButton_double_click(struct SoftButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SoftButton >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SoftButton & 0xFF );
}
}
// Enqueue of messages TestSoftButtonLongPress::led::led_OFF
void enqueue_TestSoftButtonLongPress_send_led_led_OFF(struct TestSoftButtonLongPress_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages TestSoftButtonLongPress::led::led_ON
void enqueue_TestSoftButtonLongPress_send_led_led_ON(struct TestSoftButtonLongPress_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}


//New dispatcher for messages
void dispatch_click(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {
TestSoftButtonDoubleClick_handle_softbut_click(&app1_var);

}

}


//New dispatcher for messages
void dispatch_led_OFF(uint16_t sender) {
if (sender == app2_var.id_led) {
LED_handle_ctrl_led_OFF(&l2_var);

}
if (sender == app1_var.id_led) {
LED_handle_ctrl_led_OFF(&l1_var);

}

}


//New dispatcher for messages
void dispatch_long_press(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {
TestSoftButtonLongPress_handle_softbut_long_press(&app2_var);

}

}


//New dispatcher for messages
void dispatch_press(uint16_t sender) {
if (sender == button_var.id_evt) {
SoftButton_handle_Button_press(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_double_click(uint16_t sender) {
if (sender == sbut_var.id_SoftButton) {
TestSoftButtonDoubleClick_handle_softbut_double_click(&app1_var);

}

}


//New dispatcher for messages
void dispatch_release(uint16_t sender) {
if (sender == button_var.id_evt) {
SoftButton_handle_Button_release(&sbut_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
SoftButton_handle_Timer_timer_timeout(&sbut_var, param_id);

}

}


//New dispatcher for messages
void dispatch_ms25_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Button_handle_clock_ms25_tic(&button_var);

}

}


//New dispatcher for messages
void dispatch_led_ON(uint16_t sender) {
if (sender == app2_var.id_led) {
LED_handle_ctrl_led_ON(&l2_var);

}
if (sender == app1_var.id_led) {
LED_handle_ctrl_led_ON(&l1_var);

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
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_click = 2;
dispatch_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_led_OFF = 2;
dispatch_led_OFF((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_long_press = 2;
dispatch_long_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_press = 2;
dispatch_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_release = 2;
dispatch_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 9:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_double_click = 2;
dispatch_double_click((mbuf[0] << 8) + mbuf[1] /* instance port*/);
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
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_led_ON = 2;
dispatch_led_ON((mbuf[0] << 8) + mbuf[1] /* instance port*/);
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

void initialize_configuration_Button3App() {
// Initialize connectors
register_external_SoftButton_send_Timer_timer_start_listener(&forward_SoftButton_send_Timer_timer_start);
register_external_SoftButton_send_Timer_timer_cancel_listener(&forward_SoftButton_send_Timer_timer_cancel);
register_TestSoftButtonDoubleClick_send_led_led_ON_listener(&enqueue_TestSoftButtonDoubleClick_send_led_led_ON);
register_TestSoftButtonDoubleClick_send_led_led_OFF_listener(&enqueue_TestSoftButtonDoubleClick_send_led_led_OFF);
register_Button_send_evt_press_listener(&enqueue_Button_send_evt_press);
register_Button_send_evt_release_listener(&enqueue_Button_send_evt_release);
register_SoftButton_send_SoftButton_click_listener(&enqueue_SoftButton_send_SoftButton_click);
register_SoftButton_send_SoftButton_double_click_listener(&enqueue_SoftButton_send_SoftButton_double_click);
register_SoftButton_send_SoftButton_long_press_listener(&enqueue_SoftButton_send_SoftButton_long_press);
register_TestSoftButtonLongPress_send_led_led_ON_listener(&enqueue_TestSoftButtonLongPress_send_led_led_ON);
register_TestSoftButtonLongPress_send_led_led_OFF_listener(&enqueue_TestSoftButtonLongPress_send_led_led_OFF);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance l1
l1_var.active = true;
l1_var.id_ctrl = add_instance( (void*) &l1_var);
l1_var.LED_LED_State = LED_LED_READY_STATE;
l1_var.LED_PIN_var = 11;

LED_LED_OnEntry(LED_LED_STATE, &l1_var);
// Init the ID, state variables and properties for instance button
button_var.active = true;
button_var.id_clock = add_instance( (void*) &button_var);
button_var.id_evt = add_instance( (void*) &button_var);
button_var.Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
button_var.Button_PIN_var = 8;

Button_Button_OnEntry(BUTTON_BUTTON_STATE, &button_var);
// Init the ID, state variables and properties for instance sbut
sbut_var.active = true;
sbut_var.id_Button = add_instance( (void*) &sbut_var);
sbut_var.id_Timer = add_instance( (void*) &sbut_var);
sbut_var.id_SoftButton = add_instance( (void*) &sbut_var);
sbut_var.SoftButton_SoftButtonImpl_State = SOFTBUTTON_SOFTBUTTONIMPL_IDLE_STATE;
sbut_var.SoftButton_double_delay_var = 250;
sbut_var.SoftButton_long_delay_var = 1000;

SoftButton_SoftButtonImpl_OnEntry(SOFTBUTTON_SOFTBUTTONIMPL_STATE, &sbut_var);
// Init the ID, state variables and properties for instance app1
app1_var.active = true;
app1_var.id_led = add_instance( (void*) &app1_var);
app1_var.id_softbut = add_instance( (void*) &app1_var);
app1_var.TestSoftButtonDoubleClick_Region1_State = TESTSOFTBUTTONDOUBLECLICK_REGION1_OFF_STATE;

TestSoftButtonDoubleClick_Region1_OnEntry(TESTSOFTBUTTONDOUBLECLICK_REGION1_STATE, &app1_var);
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
}




void setup() {
Serial.begin(9600);
initialize_configuration_Button3App();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener


    processMessageQueue();
}
