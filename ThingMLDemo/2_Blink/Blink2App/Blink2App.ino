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
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance);
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define LED_LED_STATE 0
#define LED_LED_READY_STATE 1


/*****************************************************************************
 * Headers for type : Blink2
 *****************************************************************************/

// Definition of the instance stuct:
struct Blink2_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_timer;
uint16_t id_led;
// Variables for the current instance state
int Blink2_Blink_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void Blink2_Blink_OnEntry(int state, struct Blink2_Instance *_instance);
void Blink2_handle_timer_timer_timeout(struct Blink2_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_Blink2_send_timer_timer_start_listener(void (*_listener)(struct Blink2_Instance *, uint8_t, uint32_t));
void register_external_Blink2_send_timer_timer_start_listener(void (*_listener)(struct Blink2_Instance *, uint8_t, uint32_t));
void register_Blink2_send_timer_timer_cancel_listener(void (*_listener)(struct Blink2_Instance *, uint8_t));
void register_external_Blink2_send_timer_timer_cancel_listener(void (*_listener)(struct Blink2_Instance *, uint8_t));
void register_Blink2_send_led_led_ON_listener(void (*_listener)(struct Blink2_Instance *));
void register_external_Blink2_send_led_led_ON_listener(void (*_listener)(struct Blink2_Instance *));
void register_Blink2_send_led_led_OFF_listener(void (*_listener)(struct Blink2_Instance *));
void register_external_Blink2_send_led_led_OFF_listener(void (*_listener)(struct Blink2_Instance *));

// Definition of the states:
#define BLINK2_BLINK_STATE 0
#define BLINK2_BLINK_OFF_STATE 1
#define BLINK2_BLINK_ON_STATE 2


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
 * Implementation for type : Blink2
 *****************************************************************************/

// Declaration of prototypes:
void Blink2_Blink_OnExit(int state, struct Blink2_Instance *_instance);
void Blink2_send_timer_timer_start(struct Blink2_Instance *_instance, uint8_t id, uint32_t time);
void Blink2_send_timer_timer_cancel(struct Blink2_Instance *_instance, uint8_t id);
void Blink2_send_led_led_ON(struct Blink2_Instance *_instance);
void Blink2_send_led_led_OFF(struct Blink2_Instance *_instance);
// Declaration of functions:

// On Entry Actions:
void Blink2_Blink_OnEntry(int state, struct Blink2_Instance *_instance) {
switch(state) {
case BLINK2_BLINK_STATE:
_instance->Blink2_Blink_State = BLINK2_BLINK_OFF_STATE;
Blink2_Blink_OnEntry(_instance->Blink2_Blink_State, _instance);
break;
case BLINK2_BLINK_OFF_STATE:
Blink2_send_led_led_OFF(_instance);
Blink2_send_timer_timer_start(_instance, 0, 1200);
break;
case BLINK2_BLINK_ON_STATE:
Blink2_send_led_led_ON(_instance);
Blink2_send_timer_timer_start(_instance, 0, 50);
break;
default: break;
}
}

// On Exit Actions:
void Blink2_Blink_OnExit(int state, struct Blink2_Instance *_instance) {
switch(state) {
case BLINK2_BLINK_STATE:
Blink2_Blink_OnExit(_instance->Blink2_Blink_State, _instance);
break;
case BLINK2_BLINK_OFF_STATE:
break;
case BLINK2_BLINK_ON_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void Blink2_handle_timer_timer_timeout(struct Blink2_Instance *_instance, uint8_t id) {
uint8_t Blink2_Blink_State_event_consumed = 0;
if (_instance->Blink2_Blink_State == BLINK2_BLINK_OFF_STATE) {
if (Blink2_Blink_State_event_consumed == 0 && 1) {
Blink2_Blink_OnExit(BLINK2_BLINK_OFF_STATE, _instance);
_instance->Blink2_Blink_State = BLINK2_BLINK_ON_STATE;
Blink2_Blink_OnEntry(BLINK2_BLINK_ON_STATE, _instance);
Blink2_Blink_State_event_consumed = 1;
}
}
else if (_instance->Blink2_Blink_State == BLINK2_BLINK_ON_STATE) {
if (Blink2_Blink_State_event_consumed == 0 && 1) {
Blink2_Blink_OnExit(BLINK2_BLINK_ON_STATE, _instance);
_instance->Blink2_Blink_State = BLINK2_BLINK_OFF_STATE;
Blink2_Blink_OnEntry(BLINK2_BLINK_OFF_STATE, _instance);
Blink2_Blink_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:
void (*external_Blink2_send_timer_timer_start_listener)(struct Blink2_Instance *, uint8_t, uint32_t)= 0x0;
void (*Blink2_send_timer_timer_start_listener)(struct Blink2_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_Blink2_send_timer_timer_start_listener(void (*_listener)(struct Blink2_Instance *, uint8_t, uint32_t)){
external_Blink2_send_timer_timer_start_listener = _listener;
}
void register_Blink2_send_timer_timer_start_listener(void (*_listener)(struct Blink2_Instance *, uint8_t, uint32_t)){
Blink2_send_timer_timer_start_listener = _listener;
}
void Blink2_send_timer_timer_start(struct Blink2_Instance *_instance, uint8_t id, uint32_t time){
if (Blink2_send_timer_timer_start_listener != 0x0) Blink2_send_timer_timer_start_listener(_instance, id, time);
if (external_Blink2_send_timer_timer_start_listener != 0x0) external_Blink2_send_timer_timer_start_listener(_instance, id, time);
;
}
void (*external_Blink2_send_timer_timer_cancel_listener)(struct Blink2_Instance *, uint8_t)= 0x0;
void (*Blink2_send_timer_timer_cancel_listener)(struct Blink2_Instance *, uint8_t)= 0x0;
void register_external_Blink2_send_timer_timer_cancel_listener(void (*_listener)(struct Blink2_Instance *, uint8_t)){
external_Blink2_send_timer_timer_cancel_listener = _listener;
}
void register_Blink2_send_timer_timer_cancel_listener(void (*_listener)(struct Blink2_Instance *, uint8_t)){
Blink2_send_timer_timer_cancel_listener = _listener;
}
void Blink2_send_timer_timer_cancel(struct Blink2_Instance *_instance, uint8_t id){
if (Blink2_send_timer_timer_cancel_listener != 0x0) Blink2_send_timer_timer_cancel_listener(_instance, id);
if (external_Blink2_send_timer_timer_cancel_listener != 0x0) external_Blink2_send_timer_timer_cancel_listener(_instance, id);
;
}
void (*external_Blink2_send_led_led_ON_listener)(struct Blink2_Instance *)= 0x0;
void (*Blink2_send_led_led_ON_listener)(struct Blink2_Instance *)= 0x0;
void register_external_Blink2_send_led_led_ON_listener(void (*_listener)(struct Blink2_Instance *)){
external_Blink2_send_led_led_ON_listener = _listener;
}
void register_Blink2_send_led_led_ON_listener(void (*_listener)(struct Blink2_Instance *)){
Blink2_send_led_led_ON_listener = _listener;
}
void Blink2_send_led_led_ON(struct Blink2_Instance *_instance){
if (Blink2_send_led_led_ON_listener != 0x0) Blink2_send_led_led_ON_listener(_instance);
if (external_Blink2_send_led_led_ON_listener != 0x0) external_Blink2_send_led_led_ON_listener(_instance);
;
}
void (*external_Blink2_send_led_led_OFF_listener)(struct Blink2_Instance *)= 0x0;
void (*Blink2_send_led_led_OFF_listener)(struct Blink2_Instance *)= 0x0;
void register_external_Blink2_send_led_led_OFF_listener(void (*_listener)(struct Blink2_Instance *)){
external_Blink2_send_led_led_OFF_listener = _listener;
}
void register_Blink2_send_led_led_OFF_listener(void (*_listener)(struct Blink2_Instance *)){
Blink2_send_led_led_OFF_listener = _listener;
}
void Blink2_send_led_led_OFF(struct Blink2_Instance *_instance){
if (Blink2_send_led_led_OFF_listener != 0x0) Blink2_send_led_led_OFF_listener(_instance);
if (external_Blink2_send_led_led_OFF_listener != 0x0) external_Blink2_send_led_led_OFF_listener(_instance);
;
}



#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint16_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 500) == 0) {
timer2_500ms_tic();
}
if((timer2_interrupt_counter % 25) == 0) {
timer2_25ms_tic();
}
if(timer2_interrupt_counter >= 500) {
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

void timer2_500ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (2 >> 8) & 0xFF;
enqueue_buf[1] = 2 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}

void timer2_25ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (3 >> 8) & 0xFF;
enqueue_buf[1] = 3 & 0xFF;
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
void LED_handle_ctrl_led_ON(struct LED_Instance *_instance) {
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN__var, 1);
LED_LED_State_event_consumed = 1;
}
}
}
void LED_handle_ctrl_led_OFF(struct LED_Instance *_instance) {
uint8_t LED_LED_State_event_consumed = 0;
if (_instance->LED_LED_State == LED_LED_READY_STATE) {
if (LED_LED_State_event_consumed == 0 && 1) {
f_LED_digitalWrite(_instance, _instance->LED_PIN__var, 0);
LED_LED_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:






/*****************************************************************************
 * Definitions for configuration : Blink2App
 *****************************************************************************/

//Declaration of instance variables
//Instance led13
// Variables for the properties of the instance
struct LED_Instance led13_var;
//Instance blink2
// Variables for the properties of the instance
struct Blink2_Instance blink2_var;

// Enqueue of messages Blink2::led::led_ON
void enqueue_Blink2_send_led_led_ON(struct Blink2_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}
// Enqueue of messages Blink2::led::led_OFF
void enqueue_Blink2_send_led_led_OFF(struct Blink2_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_led >> 8) & 0xFF );
_fifo_enqueue( _instance->id_led & 0xFF );
}
}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
Blink2_handle_timer_timer_timeout(&blink2_var, param_id);

}

}


//New dispatcher for messages
void dispatch_25ms_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {

}

}


//New dispatcher for messages
void dispatch_500ms_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {

}

}


//New dispatcher for messages
void dispatch_led_ON(uint16_t sender) {
if (sender == blink2_var.id_led) {
LED_handle_ctrl_led_ON(&led13_var);

}

}


//New dispatcher for messages
void dispatch_led_OFF(uint16_t sender) {
if (sender == blink2_var.id_led) {
LED_handle_ctrl_led_OFF(&led13_var);

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
case 3:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_25ms_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 2:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_500ms_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 4:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_led_ON((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
case 5:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_led_OFF((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
return 1;
}

// Forwarding of messages timer2::Blink2::timer::timer_start
void forward_timer2_Blink2_send_timer_timer_start(struct Blink2_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::Blink2::timer::timer_cancel
void forward_timer2_Blink2_send_timer_timer_cancel(struct Blink2_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

void forward_Blink2_send_timer_timer_cancel(struct Blink2_Instance *_instance, uint8_t id){
if(_instance->id_timer == blink2_var.id_timer) {
forward_timer2_Blink2_send_timer_timer_cancel(_instance, id);
}
}
void forward_Blink2_send_timer_timer_start(struct Blink2_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_timer == blink2_var.id_timer) {
forward_timer2_Blink2_send_timer_timer_start(_instance, id, time);
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
case 3:
if(msgSize == 2) {
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

void initialize_configuration_Blink2App() {
// Initialize connectors
register_external_Blink2_send_timer_timer_start_listener(&forward_Blink2_send_timer_timer_start);
register_external_Blink2_send_timer_timer_cancel_listener(&forward_Blink2_send_timer_timer_cancel);
register_Blink2_send_led_led_ON_listener(&enqueue_Blink2_send_led_led_ON);
register_Blink2_send_led_led_OFF_listener(&enqueue_Blink2_send_led_led_OFF);

// Init the ID, state variables and properties for external connector timer2

// Network Initilization 


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();


// End Network Initilization 

// Init the ID, state variables and properties for instance led13
led13_var.id_ctrl = add_instance( (void*) &led13_var);
led13_var.LED_LED_State = LED_LED_READY_STATE;
led13_var.LED_PIN__var = 11;

LED_LED_OnEntry(LED_LED_STATE, &led13_var);
// Init the ID, state variables and properties for instance blink2
blink2_var.id_timer = add_instance( (void*) &blink2_var);
blink2_var.id_led = add_instance( (void*) &blink2_var);
blink2_var.Blink2_Blink_State = BLINK2_BLINK_OFF_STATE;

Blink2_Blink_OnEntry(BLINK2_BLINK_STATE, &blink2_var);
}




void setup() {
initialize_configuration_Blink2App();

}

void loop() {

// Network Listener

timer2_read();

    processMessageQueue();
}
