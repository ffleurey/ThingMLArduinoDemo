/*****************************************************************************
 * Headers for type : HelloWorld
 *****************************************************************************/

// Definition of the instance struct:
struct HelloWorld_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
// Variables for the current instance state
int HelloWorld_HelloWorld_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void HelloWorld_HelloWorld_OnEntry(int state, struct HelloWorld_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define HELLOWORLD_HELLOWORLD_STATE 0
#define HELLOWORLD_HELLOWORLD_GREETINGS_STATE 1



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

#define MAX_INSTANCES 0
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
 * Implementation for type : HelloWorld
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void HelloWorld_HelloWorld_OnExit(int state, struct HelloWorld_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void HelloWorld_HelloWorld_OnEntry(int state, struct HelloWorld_Instance *_instance) {
switch(state) {
case HELLOWORLD_HELLOWORLD_STATE:{
_instance->HelloWorld_HelloWorld_State = HELLOWORLD_HELLOWORLD_GREETINGS_STATE;
Serial.begin(9600);
HelloWorld_HelloWorld_OnEntry(_instance->HelloWorld_HelloWorld_State, _instance);
break;
}
case HELLOWORLD_HELLOWORLD_GREETINGS_STATE:{
Serial.println("Hello World!");
break;
}
default: break;
}
}

// On Exit Actions:
void HelloWorld_HelloWorld_OnExit(int state, struct HelloWorld_Instance *_instance) {
switch(state) {
case HELLOWORLD_HELLOWORLD_STATE:{
HelloWorld_HelloWorld_OnExit(_instance->HelloWorld_HelloWorld_State, _instance);
break;}
case HELLOWORLD_HELLOWORLD_GREETINGS_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:

// Observers for outgoing messages:






/*****************************************************************************
 * Definitions for configuration : HelloApp
 *****************************************************************************/

//Declaration of instance variables
//Instance hello
// Variables for the properties of the instance
struct HelloWorld_Instance hello_var;
// Variables for the sessions of the instance




int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
}
return 1;
}


//external Message enqueue

void initialize_configuration_HelloApp() {
// Initialize connectors


// Network Initialization
// End Network Initialization

// Init the ID, state variables and properties for instance hello
hello_var.active = true;
hello_var.HelloWorld_HelloWorld_State = HELLOWORLD_HELLOWORLD_GREETINGS_STATE;

HelloWorld_HelloWorld_OnEntry(HELLOWORLD_HELLOWORLD_STATE, &hello_var);
}




void setup() {
initialize_configuration_HelloApp();

}

void loop() {

// Network Listener// End Network Listener


    processMessageQueue();
}
