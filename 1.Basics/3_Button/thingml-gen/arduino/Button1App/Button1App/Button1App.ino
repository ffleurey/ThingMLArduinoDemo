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
 * Headers for type : Button1
 *****************************************************************************/

// Definition of the instance struct:
struct Button1_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_but;
// Variables for the current instance state
int Button1_TestButton_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void Button1_TestButton_OnEntry(int state, struct Button1_Instance *_instance);
void Button1_handle_but_press(struct Button1_Instance *_instance);
void Button1_handle_but_release(struct Button1_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define BUTTON1_TESTBUTTON_STATE 0
#define BUTTON1_TESTBUTTON_WAITING_STATE 1


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

#define MAX_INSTANCES 4
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
 * Implementation for type : Button1
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Button1_TestButton_OnExit(int state, struct Button1_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void Button1_TestButton_OnEntry(int state, struct Button1_Instance *_instance) {
switch(state) {
case BUTTON1_TESTBUTTON_STATE:{
_instance->Button1_TestButton_State = BUTTON1_TESTBUTTON_WAITING_STATE;
Serial.print("READY!\n");
Button1_TestButton_OnEntry(_instance->Button1_TestButton_State, _instance);
break;
}
case BUTTON1_TESTBUTTON_WAITING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void Button1_TestButton_OnExit(int state, struct Button1_Instance *_instance) {
switch(state) {
case BUTTON1_TESTBUTTON_STATE:{
Button1_TestButton_OnExit(_instance->Button1_TestButton_State, _instance);
break;}
case BUTTON1_TESTBUTTON_WAITING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Button1_handle_but_press(struct Button1_Instance *_instance) {
if(!(_instance->active)) return;
//Region TestButton
uint8_t Button1_TestButton_State_event_consumed = 0;
if (_instance->Button1_TestButton_State == BUTTON1_TESTBUTTON_WAITING_STATE) {
if (Button1_TestButton_State_event_consumed == 0 && 1) {
Serial.print("PRESS\n");
Button1_TestButton_State_event_consumed = 1;
}
}
//End Region TestButton
//End dsregion TestButton
//Session list: 
}
void Button1_handle_but_release(struct Button1_Instance *_instance) {
if(!(_instance->active)) return;
//Region TestButton
uint8_t Button1_TestButton_State_event_consumed = 0;
if (_instance->Button1_TestButton_State == BUTTON1_TESTBUTTON_WAITING_STATE) {
if (Button1_TestButton_State_event_consumed == 0 && 1) {
Serial.print("RELEASE\n");
Button1_TestButton_State_event_consumed = 1;
}
}
//End Region TestButton
//End dsregion TestButton
//Session list: 
}

// Observers for outgoing messages:



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

void timer2_25ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    
    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_25ms_tic();
timer2_tic_flags &= 0b11111110;
}

}



/*****************************************************************************
 * Definitions for configuration : Button1App
 *****************************************************************************/

//Declaration of instance variables
//Instance button
// Variables for the properties of the instance
struct Button_Instance button_var;
// Variables for the sessions of the instance
//Instance button1
// Variables for the properties of the instance
struct Button1_Instance button1_var;
// Variables for the sessions of the instance


// Enqueue of messages Button::evt::press
void enqueue_Button_send_evt_press(struct Button_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (2 >> 8) & 0xFF );
_fifo_enqueue( 2 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_evt >> 8) & 0xFF );
_fifo_enqueue( _instance->id_evt & 0xFF );
}
}
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


//New dispatcher for messages
void dispatch_press(uint16_t sender) {
if (sender == button_var.id_evt) {
Button1_handle_but_press(&button1_var);

}

}


//New dispatcher for messages
void dispatch_release(uint16_t sender) {
if (sender == button_var.id_evt) {
Button1_handle_but_release(&button1_var);

}

}


//New dispatcher for messages
void dispatch_ms25_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Button_handle_clock_ms25_tic(&button_var);

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
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_press = 2;
dispatch_press((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_release = 2;
dispatch_release((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_ms25_tic = 2;
dispatch_ms25_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}


//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 1:
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

void initialize_configuration_Button1App() {
// Initialize connectors
register_Button_send_evt_press_listener(&enqueue_Button_send_evt_press);
register_Button_send_evt_release_listener(&enqueue_Button_send_evt_release);

// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance button
button_var.active = true;
button_var.id_clock = add_instance( (void*) &button_var);
button_var.id_evt = add_instance( (void*) &button_var);
button_var.Button_Button_State = BUTTON_BUTTON_RELEASED_STATE;
button_var.Button_PIN_var = 8;

Button_Button_OnEntry(BUTTON_BUTTON_STATE, &button_var);
// Init the ID, state variables and properties for instance button1
button1_var.active = true;
button1_var.id_but = add_instance( (void*) &button1_var);
button1_var.Button1_TestButton_State = BUTTON1_TESTBUTTON_WAITING_STATE;

Button1_TestButton_OnEntry(BUTTON1_TESTBUTTON_STATE, &button1_var);
}




void setup() {
Serial.begin(9600);
initialize_configuration_Button1App();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener


    processMessageQueue();
}
