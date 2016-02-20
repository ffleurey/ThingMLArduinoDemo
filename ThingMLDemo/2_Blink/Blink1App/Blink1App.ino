/*****************************************************************************
 * Headers for type : Blink1
 *****************************************************************************/

// Definition of the instance stuct:
struct Blink1_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_clock;
// Variables for the current instance state
int Blink1_Blink1_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void Blink1_Blink1_OnEntry(int state, struct Blink1_Instance *_instance);
void Blink1_handle_clock_tic(struct Blink1_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define BLINK1_BLINK1_STATE 0
#define BLINK1_BLINK1_OFF_STATE 1
#define BLINK1_BLINK1_ON_STATE 2


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
/*****************************************************************************
 * Implementation for type : Blink1
 *****************************************************************************/

// Declaration of prototypes:
void Blink1_Blink1_OnExit(int state, struct Blink1_Instance *_instance);
// Declaration of functions:

// On Entry Actions:
void Blink1_Blink1_OnEntry(int state, struct Blink1_Instance *_instance) {
switch(state) {
case BLINK1_BLINK1_STATE:
_instance->Blink1_Blink1_State = BLINK1_BLINK1_OFF_STATE;
pinMode(12, OUTPUT);
Blink1_Blink1_OnEntry(_instance->Blink1_Blink1_State, _instance);
break;
case BLINK1_BLINK1_OFF_STATE:
digitalWrite(12, LOW);
break;
case BLINK1_BLINK1_ON_STATE:
digitalWrite(12, HIGH);
break;
default: break;
}
}

// On Exit Actions:
void Blink1_Blink1_OnExit(int state, struct Blink1_Instance *_instance) {
switch(state) {
case BLINK1_BLINK1_STATE:
Blink1_Blink1_OnExit(_instance->Blink1_Blink1_State, _instance);
break;
case BLINK1_BLINK1_OFF_STATE:
break;
case BLINK1_BLINK1_ON_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void Blink1_handle_clock_tic(struct Blink1_Instance *_instance) {
uint8_t Blink1_Blink1_State_event_consumed = 0;
if (_instance->Blink1_Blink1_State == BLINK1_BLINK1_OFF_STATE) {
if (Blink1_Blink1_State_event_consumed == 0 && 1) {
Blink1_Blink1_OnExit(BLINK1_BLINK1_OFF_STATE, _instance);
_instance->Blink1_Blink1_State = BLINK1_BLINK1_ON_STATE;
Blink1_Blink1_OnEntry(BLINK1_BLINK1_ON_STATE, _instance);
Blink1_Blink1_State_event_consumed = 1;
}
}
else if (_instance->Blink1_Blink1_State == BLINK1_BLINK1_ON_STATE) {
if (Blink1_Blink1_State_event_consumed == 0 && 1) {
Blink1_Blink1_OnExit(BLINK1_BLINK1_ON_STATE, _instance);
_instance->Blink1_Blink1_State = BLINK1_BLINK1_OFF_STATE;
Blink1_Blink1_OnEntry(BLINK1_BLINK1_OFF_STATE, _instance);
Blink1_Blink1_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:




#define MAX_INSTANCES 2
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

void timer2_500ms_tic() {
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
}



/*****************************************************************************
 * Definitions for configuration : Blink1App
 *****************************************************************************/

//Declaration of instance variables
//Instance blink1
// Variables for the properties of the instance
struct Blink1_Instance blink1_var;



//New dispatcher for messages
void dispatch_tic(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Blink1_handle_clock_tic(&blink1_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

byte mbuf[2];
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 1:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_tic((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
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

void initialize_configuration_Blink1App() {
// Initialize connectors

// Init the ID, state variables and properties for external connector timer2

// Network Initilization 


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();


// End Network Initilization 

// Init the ID, state variables and properties for instance blink1
blink1_var.id_clock = add_instance( (void*) &blink1_var);
blink1_var.Blink1_Blink1_State = BLINK1_BLINK1_OFF_STATE;

Blink1_Blink1_OnEntry(BLINK1_BLINK1_STATE, &blink1_var);
}




void setup() {
initialize_configuration_Blink1App();

}

void loop() {

// Network Listener

timer2_read();

    processMessageQueue();
}
