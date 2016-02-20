/*****************************************************************************
 * Headers for type : Button
 *****************************************************************************/

// Definition of the instance stuct:
struct Button_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_evt;
// Variables for the current instance state
int Button_Button_State;
// Variables for the properties of the instance
uint8_t Button_PIN__var;

};
// Declaration of prototypes outgoing messages:
void Button_Button_OnEntry(int state, struct Button_Instance *_instance);
void Button_handle_clock_25ms_tic(struct Button_Instance *_instance);
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
 * Headers for type : TestButton
 *****************************************************************************/

// Definition of the instance stuct:
struct TestButton_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_led1;
uint16_t id_led2;
uint16_t id_but;
uint16_t id_timer;
// Variables for the current instance state
int TestButton_TestButton_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void TestButton_TestButton_OnEntry(int state, struct TestButton_Instance *_instance);
void TestButton_handle_timer_timer_timeout(struct TestButton_Instance *_instance, uint8_t id);
void TestButton_handle_but_release(struct TestButton_Instance *_instance);
void TestButton_handle_but_press(struct TestButton_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_TestButton_send_led1_led_ON_listener(void (*_listener)(struct TestButton_Instance *));
void register_external_TestButton_send_led1_led_ON_listener(void (*_listener)(struct TestButton_Instance *));
void register_TestButton_send_led1_led_OFF_listener(void (*_listener)(struct TestButton_Instance *));
void register_external_TestButton_send_led1_led_OFF_listener(void (*_listener)(struct TestButton_Instance *));
void register_TestButton_send_led2_led_ON_listener(void (*_listener)(struct TestButton_Instance *));
void register_external_TestButton_send_led2_led_ON_listener(void (*_listener)(struct TestButton_Instance *));
void register_TestButton_send_led2_led_OFF_listener(void (*_listener)(struct TestButton_Instance *));
void register_external_TestButton_send_led2_led_OFF_listener(void (*_listener)(struct TestButton_Instance *));
void register_TestButton_send_timer_timer_start_listener(void (*_listener)(struct TestButton_Instance *, uint8_t, uint32_t));
void register_external_TestButton_send_timer_timer_start_listener(void (*_listener)(struct TestButton_Instance *, uint8_t, uint32_t));
void register_TestButton_send_timer_timer_cancel_listener(void (*_listener)(struct TestButton_Instance *, uint8_t));
void register_external_TestButton_send_timer_timer_cancel_listener(void (*_listener)(struct TestButton_Instance *, uint8_t));

// Definition of the states:
#define TESTBUTTON_TESTBUTTON_STATE 0
#define TESTBUTTON_TESTBUTTON_WAITING_STATE 1


/*****************************************************************************
 * Headers for type : LED
 *****************************************************************************/

// Definition of the instance stuct:
struct LED_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
// Variables for the current instance state
int LED_LED_State;
// Variables for the properties of the instance
uint8_t LED_PIN__var;

};
// Declaration of prototypes outgoing messages:
void LED_LED_OnEntry(int state, struct LED_Instance *_instance);
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance);
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define LED_LED_STATE 0
#define LED_LED_READY_STATE 1


//timer2

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

#define MAX_INSTANCES 10
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
 * Implementation for type : Button
 *****************************************************************************/

// Declaration of prototypes:
void Button_Button_OnExit(int state, struct Button_Instance *_instance);
void Button_send_evt_press(struct Button_Instance *_instance);
void Button_send_evt_release(struct Button_Instance *_instance);
uint8_t f_Button_is_pressed(struct Button_Instance *_instance);
// Declaration of functions:
// Definition of function is_pressed
uint8_t f_Button_is_pressed(struct Button_Instance *_instance) {
return digitalRead(_instance->Button_PIN__var);
}

// On Entry Actions:
void Button_Button_OnEntry(int state, struct Button_Instance *_instance) {
switch(state) {
case BUTTON_BUTTON_STATE:
_instance->Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
Button_Button_OnEntry(_instance->Button_Button_State, _instance);
break;
case BUTTON_BUTTON_RELEASED_STATE:
break;
case BUTTON_BUTTON_PRESSED_STATE:
break;
default: break;
}
}

// On Exit Actions:
void Button_Button_OnExit(int state, struct Button_Instance *_instance) {
switch(state) {
case BUTTON_BUTTON_STATE:
Button_Button_OnExit(_instance->Button_Button_State, _instance);
break;
case BUTTON_BUTTON_RELEASED_STATE:
break;
case BUTTON_BUTTON_PRESSED_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void Button_handle_clock_25ms_tic(struct Button_Instance *_instance) {
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



#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 25) == 0) {
timer2_25ms_tic();
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
}
/*****************************************************************************
 * Implementation for type : TestButton
 *****************************************************************************/

// Declaration of prototypes:
void TestButton_TestButton_OnExit(int state, struct TestButton_Instance *_instance);
void TestButton_send_led1_led_ON(struct TestButton_Instance *_instance);
void TestButton_send_led1_led_OFF(struct TestButton_Instance *_instance);
void TestButton_send_led2_led_ON(struct TestButton_Instance *_instance);
void TestButton_send_led2_led_OFF(struct TestButton_Instance *_instance);
void TestButton_send_timer_timer_start(struct TestButton_Instance *_instance, uint8_t id, uint32_t time);
void TestButton_send_timer_timer_cancel(struct TestButton_Instance *_instance, uint8_t id);
// Declaration of functions:

// On Entry Actions:
void TestButton_TestButton_OnEntry(int state, struct TestButton_Instance *_instance) {
switch(state) {
case TESTBUTTON_TESTBUTTON_STATE:
_instance->TestButton_TestButton_State = TESTBUTTON_TESTBUTTON_WAITING_STATE;
TestButton_TestButton_OnEntry(_instance->TestButton_TestButton_State, _instance);
break;
case TESTBUTTON_TESTBUTTON_WAITING_STATE:
TestButton_send_led1_led_OFF(_instance);
TestButton_send_led2_led_OFF(_instance);
break;
default: break;
}
}

// On Exit Actions:
void TestButton_TestButton_OnExit(int state, struct TestButton_Instance *_instance) {
switch(state) {
case TESTBUTTON_TESTBUTTON_STATE:
TestButton_TestButton_OnExit(_instance->TestButton_TestButton_State, _instance);
break;
case TESTBUTTON_TESTBUTTON_WAITING_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void TestButton_handle_timer_timer_timeout(struct TestButton_Instance *_instance, uint8_t id) {
uint8_t TestButton_TestButton_State_event_consumed = 0;
if (_instance->TestButton_TestButton_State == TESTBUTTON_TESTBUTTON_WAITING_STATE) {
if (TestButton_TestButton_State_event_consumed == 0 && 1) {
if(id == 0) {
TestButton_send_led1_led_OFF(_instance);

} else {
if(id == 1) {
TestButton_send_led2_led_OFF(_instance);

}

}
TestButton_TestButton_State_event_consumed = 1;
}
}
}
void TestButton_handle_but_release(struct TestButton_Instance *_instance) {
uint8_t TestButton_TestButton_State_event_consumed = 0;
if (_instance->TestButton_TestButton_State == TESTBUTTON_TESTBUTTON_WAITING_STATE) {
if (TestButton_TestButton_State_event_consumed == 0 && 1) {
TestButton_send_led2_led_ON(_instance);
TestButton_send_timer_timer_start(_instance, 1, 1000);
TestButton_TestButton_State_event_consumed = 1;
}
}
}
void TestButton_handle_but_press(struct TestButton_Instance *_instance) {
uint8_t TestButton_TestButton_State_event_consumed = 0;
if (_instance->TestButton_TestButton_State == TESTBUTTON_TESTBUTTON_WAITING_STATE) {
if (TestButton_TestButton_State_event_consumed == 0 && 1) {
TestButton_send_led1_led_ON(_instance);
TestButton_send_timer_timer_start(_instance, 0, 1000);
TestButton_TestButton_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:
void (*external_TestButton_send_led1_led_ON_listener)(struct TestButton_Instance *)= 0x0;
void (*TestButton_send_led1_led_ON_listener)(struct TestButton_Instance *)= 0x0;
void register_external_TestButton_send_led1_led_ON_listener(void (*_listener)(struct TestButton_Instance *)){
external_TestButton_send_led1_led_ON_listener = _listener;
}
void register_TestButton_send_led1_led_ON_listener(void (*_listener)(struct TestButton_Instance *)){
TestButton_send_led1_led_ON_listener = _listener;
}
void TestButton_send_led1_led_ON(struct TestButton_Instance *_instance){
if (TestButton_send_led1_led_ON_listener != 0x0) TestButton_send_led1_led_ON_listener(_instance);
if (external_TestButton_send_led1_led_ON_listener != 0x0) external_TestButton_send_led1_led_ON_listener(_instance);
;
}
void (*external_TestButton_send_led1_led_OFF_listener)(struct TestButton_Instance *)= 0x0;
void (*TestButton_send_led1_led_OFF_listener)(struct TestButton_Instance *)= 0x0;
void register_external_TestButton_send_led1_led_OFF_listener(void (*_listener)(struct TestButton_Instance *)){
external_TestButton_send_led1_led_OFF_listener = _listener;
}
void register_TestButton_send_led1_led_OFF_listener(void (*_listener)(struct TestButton_Instance *)){
TestButton_send_led1_led_OFF_listener = _listener;
}
void TestButton_send_led1_led_OFF(struct TestButton_Instance *_instance){
if (TestButton_send_led1_led_OFF_listener != 0x0) TestButton_send_led1_led_OFF_listener(_instance);
if (external_TestButton_send_led1_led_OFF_listener != 0x0) external_TestButton_send_led1_led_OFF_listener(_instance);
;
}
void (*external_TestButton_send_led2_led_ON_listener)(struct TestButton_Instance *)= 0x0;
void (*TestButton_send_led2_led_ON_listener)(struct TestButton_Instance *)= 0x0;
void register_external_TestButton_send_led2_led_ON_listener(void (*_listener)(struct TestButton_Instance *)){
external_TestButton_send_led2_led_ON_listener = _listener;
}
void register_TestButton_send_led2_led_ON_listener(void (*_listener)(struct TestButton_Instance *)){
TestButton_send_led2_led_ON_listener = _listener;
}
void TestButton_send_led2_led_ON(struct TestButton_Instance *_instance){
if (TestButton_send_led2_led_ON_listener != 0x0) TestButton_send_led2_led_ON_listener(_instance);
if (external_TestButton_send_led2_led_ON_listener != 0x0) external_TestButton_send_led2_led_ON_listener(_instance);
;
}
void (*external_TestButton_send_led2_led_OFF_listener)(struct TestButton_Instance *)= 0x0;
void (*TestButton_send_led2_led_OFF_listener)(struct TestButton_Instance *)= 0x0;
void register_external_TestButton_send_led2_led_OFF_listener(void (*_listener)(struct TestButton_Instance *)){
external_TestButton_send_led2_led_OFF_listener = _listener;
}
void register_TestButton_send_led2_led_OFF_listener(void (*_listener)(struct TestButton_Instance *)){
TestButton_send_led2_led_OFF_listener = _listener;
}
void TestButton_send_led2_led_OFF(struct TestButton_Instance *_instance){
if (TestButton_send_led2_led_OFF_listener != 0x0) TestButton_send_led2_led_OFF_listener(_instance);
if (external_TestButton_send_led2_led_OFF_listener != 0x0) external_TestButton_send_led2_led_OFF_listener(_instance);
;
}
void (*external_TestButton_send_timer_timer_start_listener)(struct TestButton_Instance *, uint8_t, uint32_t)= 0x0;
void (*TestButton_send_timer_timer_start_listener)(struct TestButton_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_TestButton_send_timer_timer_start_listener(void (*_listener)(struct TestButton_Instance *, uint8_t, uint32_t)){
external_TestButton_send_timer_timer_start_listener = _listener;
}
void register_TestButton_send_timer_timer_start_listener(void (*_listener)(struct TestButton_Instance *, uint8_t, uint32_t)){
TestButton_send_timer_timer_start_listener = _listener;
}
void TestButton_send_timer_timer_start(struct TestButton_Instance *_instance, uint8_t id, uint32_t time){
if (TestButton_send_timer_timer_start_listener != 0x0) TestButton_send_timer_timer_start_listener(_instance, id, time);
if (external_TestButton_send_timer_timer_start_listener != 0x0) external_TestButton_send_timer_timer_start_listener(_instance, id, time);
;
}
void (*external_TestButton_send_timer_timer_cancel_listener)(struct TestButton_Instance *, uint8_t)= 0x0;
void (*TestButton_send_timer_timer_cancel_listener)(struct TestButton_Instance *, uint8_t)= 0x0;
void register_external_TestButton_send_timer_timer_cancel_listener(void (*_listener)(struct TestButton_Instance *, uint8_t)){
external_TestButton_send_timer_timer_cancel_listener = _listener;
}
void register_TestButton_send_timer_timer_cancel_listener(void (*_listener)(struct TestButton_Instance *, uint8_t)){
TestButton_send_timer_timer_cancel_listener = _listener;
}
void TestButton_send_timer_timer_cancel(struct TestButton_Instance *_instance, uint8_t id){
if (TestButton_send_timer_timer_cancel_listener != 0x0) TestButton_send_timer_timer_cancel_listener(_instance, id);
if (external_TestButton_send_timer_timer_cancel_listener != 0x0) external_TestButton_send_timer_timer_cancel_listener(_instance, id);
;
}



/*****************************************************************************
 * Implementation for type : LED
 *****************************************************************************/

// Declaration of prototypes:
void LED_LED_OnExit(int state, struct LED_Instance *_instance);
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

// On Entry Actions:
void LED_LED_OnEntry(int state, struct LED_Instance *_instance) {
switch(state) {
case LED_LED_STATE:
_instance->LED_LED_State = LED_LED_READY_STATE;
f_LED_setDigitalOutput(_instance, _instance->LED_PIN__var);
LED_LED_OnEntry(_instance->LED_LED_State, _instance);
break;
case LED_LED_READY_STATE:
break;
default: break;
}
}

// On Exit Actions:
void LED_LED_OnExit(int state, struct LED_Instance *_instance) {
switch(state) {
case LED_LED_STATE:
LED_LED_OnExit(_instance->LED_LED_State, _instance);
break;
case LED_LED_READY_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance) {
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN__var, 0);
LED_LED_State_event_consumed = 1;
}
}
}
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance) {
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN__var, 1);
LED_LED_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:






/*****************************************************************************
 * Definitions for configuration : Button2App
 *****************************************************************************/

//Declaration of instance variables
//Instance l1
// Variables for the properties of the instance
struct LED_Instance l1_var;
//Instance app
// Variables for the properties of the instance
struct TestButton_Instance app_var;
//Instance button
// Variables for the properties of the instance
struct Button_Instance button_var;
//Instance l2
// Variables for the properties of the instance
struct LED_Instance l2_var;

// Enqueue of messages Button::evt::release
void enqueue_Button_send_evt_release(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages Button::evt::press
void enqueue_Button_send_evt_press(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
// Enqueue of messages TestButton::led1::led_OFF
void enqueue_TestButton_send_led1_led_OFF(struct TestButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led1 >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led1 & 0xFF );
}
}
// Enqueue of messages TestButton::led1::led_ON
void enqueue_TestButton_send_led1_led_ON(struct TestButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led1 >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led1 & 0xFF );
}
}
// Enqueue of messages TestButton::led2::led_OFF
void enqueue_TestButton_send_led2_led_OFF(struct TestButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led2 >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led2 & 0xFF );
}
}
// Enqueue of messages TestButton::led2::led_ON
void enqueue_TestButton_send_led2_led_ON(struct TestButton_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led2 >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led2 & 0xFF );
}
}


//New dispatcher for messages
void dispatch_release(uint16_t sender) {
if (sender == button_var.id_evt) {
TestButton_handle_but_release(&app_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
TestButton_handle_timer_timer_timeout(&app_var, param_id);

}

}


//New dispatcher for messages
void dispatch_press(uint16_t sender) {
if (sender == button_var.id_evt) {
TestButton_handle_but_press(&app_var);

}

}


//New dispatcher for messages
void dispatch_led_OFF(uint16_t sender) {
if (sender == app_var.id_led2) {
LED_handle_ctrl_led_OFF(&l2_var);

}
if (sender == app_var.id_led1) {
LED_handle_ctrl_led_OFF(&l1_var);

}

}


//New dispatcher for messages
void dispatch_led_ON(uint16_t sender) {
if (sender == app_var.id_led2) {
LED_handle_ctrl_led_ON(&l2_var);

}
if (sender == app_var.id_led1) {
LED_handle_ctrl_led_ON(&l1_var);

}

}


//New dispatcher for messages
void dispatch_25ms_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Button_handle_clock_25ms_tic(&button_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

byte mbuf[3];
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 3:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 1:
while (mbufi < 3) mbuf[mbufi++] = fifo_dequeue();
union u_timer_timeout_id_t {
uint8_t p;
byte bytebuffer[1];
} u_timer_timeout_id;
u_timer_timeout_id.bytebuffer[0] = mbuf[2];
dispatch_timer_timeout((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_timer_timeout_id.p /* id */ );
break;
case 4:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 5:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_led_OFF((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 6:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_led_ON((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 2:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_25ms_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
return 1;
}

// Forwarding of messages timer2::TestButton::timer::timer_start
void forward_timer2_TestButton_send_timer_timer_start(struct TestButton_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::TestButton::timer::timer_cancel
void forward_timer2_TestButton_send_timer_timer_cancel(struct TestButton_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

void forward_TestButton_send_timer_timer_cancel(struct TestButton_Instance *_instance, uint8_t id){
if(_instance->id_timer == app_var.id_timer) {
forward_timer2_TestButton_send_timer_timer_cancel(_instance, id);
}
}
void forward_TestButton_send_timer_timer_start(struct TestButton_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_timer == app_var.id_timer) {
forward_timer2_TestButton_send_timer_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 1:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
case 2:
if(msgSize == 2) {
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

void initialize_configuration_Button2App() {
// Initialize connectors
register_external_TestButton_send_timer_timer_start_listener(&forward_TestButton_send_timer_timer_start);
register_external_TestButton_send_timer_timer_cancel_listener(&forward_TestButton_send_timer_timer_cancel);
register_TestButton_send_led1_led_ON_listener(&enqueue_TestButton_send_led1_led_ON);
register_TestButton_send_led1_led_OFF_listener(&enqueue_TestButton_send_led1_led_OFF);
register_TestButton_send_led2_led_ON_listener(&enqueue_TestButton_send_led2_led_ON);
register_TestButton_send_led2_led_OFF_listener(&enqueue_TestButton_send_led2_led_OFF);
register_Button_send_evt_press_listener(&enqueue_Button_send_evt_press);
register_Button_send_evt_release_listener(&enqueue_Button_send_evt_release);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initilization 


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();


// End Network Initilization 

// Init the ID, state variables and properties for instance l1
l1_var.id_ctrl = add_instance( (void*) &l1_var);
l1_var.LED_LED_State = LED_LED_READY_STATE;
l1_var.LED_PIN__var = 12;

LED_LED_OnEntry(LED_LED_STATE, &l1_var);
// Init the ID, state variables and properties for instance button
button_var.id_clock = add_instance( (void*) &button_var);
button_var.id_evt = add_instance( (void*) &button_var);
button_var.Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
button_var.Button_PIN__var = 8;

Button_Button_OnEntry(BUTTON_BUTTON_STATE, &button_var);
// Init the ID, state variables and properties for instance l2
l2_var.id_ctrl = add_instance( (void*) &l2_var);
l2_var.LED_LED_State = LED_LED_READY_STATE;
l2_var.LED_PIN__var = 11;

LED_LED_OnEntry(LED_LED_STATE, &l2_var);
// Init the ID, state variables and properties for instance app
app_var.id_led1 = add_instance( (void*) &app_var);
app_var.id_led2 = add_instance( (void*) &app_var);
app_var.id_but = add_instance( (void*) &app_var);
app_var.id_timer = add_instance( (void*) &app_var);
app_var.TestButton_TestButton_State = TESTBUTTON_TESTBUTTON_WAITING_STATE;

TestButton_TestButton_OnEntry(TESTBUTTON_TESTBUTTON_STATE, &app_var);
}




void setup() {
initialize_configuration_Button2App();

}

void loop() {

// Network Listener

timer2_read();

    processMessageQueue();
}
