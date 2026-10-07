# Arduino Adventures

Welcome! This guide introduces the basics of programming an Arduino: reading inputs, controlling outputs, and building simple projects.

For the sequenced Smart Home Kit activities, lesson plans, starter sketches, and solutions, see the [Lesson Material guide](LessonMaterial/README.md). The optional practice challenges and their complete solutions are in [ChallengesAndSolutions](ChallengesAndSolutions/README.md).

## First, How Arduino Code Works

Arduino code is a list of instructions. The Arduino follows them from top to bottom. Some instructions are **functions**: named jobs that do something. The words inside parentheses tell the function what to work on.

Every sketch has two special functions:

- `setup()` runs once when the Arduino starts. Put one-time jobs here, like preparing pins.
- `loop()` runs again and again for as long as the Arduino has power. Put the repeating activity here.

Here is a tiny blink program. Read it line by line and match each instruction to what the LED does:

```cpp
const int LED_PIN = 13;

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_PIN, HIGH);
	delay(500);
	digitalWrite(LED_PIN, LOW);
	delay(500);
}
```

`LED_PIN` is a **variable**: a named place to keep a value. `const` means this value should stay the same. Giving pin 13 the name `LED_PIN` makes the sketch easier to read and change.

## Inputs and Outputs

Think of the Arduino like a tiny helper. It **reads inputs** to find out what is happening, then **controls outputs** to do something about it.

- An **input** sends information to the Arduino. A button is usually on or off. A photocell sends a changing reading depending on the light.
- An **output** is controlled by the Arduino. An LED can turn on or off; a buzzer can make a sound.
- A **pin** is a connection the Arduino uses to talk to a part. Always use the pin number shown in the wiring diagram and sketch.

For a button wired with a pull-down resistor, a released button reads `LOW` and a pressed button reads `HIGH`. Other circuits can work the opposite way, so check the wiring and lesson instructions.

On this UNO-compatible board, `analogRead()` gives a number from 0 to 1023. A higher number means a higher measured voltage at that input; for a photocell, the exact reading depends on its wiring and the light.

## Code Toolbox

Meet these tools as you reach the matching lessons. A function call has a name followed by parentheses. Its **arguments** (the values inside) tell it which pin or value to use.

### Prepare a Pin

`pinMode(pin, mode)` tells a pin what job to do. Use `INPUT` when a button or sensor sends information in. Use `OUTPUT` when the Arduino controls an LED or another part.

```cpp
pinMode(13, INPUT);
pinMode(12, OUTPUT);
```

### Read and Control Digital Signals

- `digitalRead(pin)` checks an input pin. It gives back `HIGH` or `LOW`.
- `digitalWrite(pin, state)` sets an output pin to `HIGH` (on) or `LOW` (off).
- `HIGH` and `LOW` are named values for the two digital states. They are easier to understand than writing `1` and `0`.

```cpp
int buttonState = digitalRead(13);
digitalWrite(12, HIGH);
```

`int` makes a variable for a whole number. In the first line, the number returned by `digitalRead()` is saved so the program can use it later.

### Read a Changing Sensor

`analogRead(pin)` measures a changing input and gives back a number. For example:

```cpp
int lightReading = analogRead(A1);
```

`A1` means analog input 1. The Arduino stores the result in `lightReading`. Cover the photocell and watch how the number changes in the Serial Monitor.

### Make Decisions

`if` is a C++ language instruction, not a function. It checks a question and runs the code inside `{ }` only when the answer is true.

```cpp
if (lightReading < 500) {
	digitalWrite(12, HIGH);
} else {
	digitalWrite(12, LOW);
}
```

Here `<` means “is less than.” `else` means “otherwise.” Other useful comparison signs are `>` (greater than) and `==` (is equal to). Use `==` to compare two things; one `=` saves a value in a variable.

### Wait and Look at Readings

- `delay(milliseconds)` pauses the sketch. `delay(500)` waits for half a second because 1,000 milliseconds make one second.
- `Serial.begin(9600)` starts the link to the computer. Put it in `setup()`.
- `Serial.print(value)` shows a value without moving to a new line.
- `Serial.println(value)` shows a value and then starts a new line. Open the IDE's Serial Monitor to see it.

```cpp
Serial.begin(9600);
Serial.println(lightReading);
```

### Make a Buzzer Play

- `tone(pin, frequency)` tells a passive buzzer to play a pitch. Frequency is measured in hertz (`Hz`); a bigger number makes a higher pitch.
- `noTone(pin)` stops the sound on that pin.

```cpp
tone(12, 440);  // Play a note at 440 Hz
delay(500);
noTone(12);
```

This makes a sound; it is **not** the PWM brightness lesson.

### Repeat Instructions

`for` is another C++ language instruction, not a function. It repeats instructions and counts each time. This example counts from 0 to 4:

```cpp
for (int count = 0; count < 5; count++) {
	Serial.println(count);
}
```

The three parts mean: start `count` at 0; keep going while it is less than 5; add 1 after each turn. An **array** is a numbered list of values, useful for storing a row of musical notes. A loop can visit each value in the list.

### Measure Time for a Reaction Game

`millis()` gives the number of milliseconds since the Arduino started. It is useful for measuring elapsed time without rounding to whole seconds.

```cpp
unsigned long startTime = millis();
// Wait for the player to press the button...
unsigned long elapsedTime = millis() - startTime;
```

`unsigned long` is a whole-number type that can hold the large time values returned by `millis()`. `random(minimum, maximum)` chooses a changing number for a wait; the maximum is not included. `randomSeed(value)` helps the sequence change after restarting.

### Change LED Brightness with PWM

`analogWrite(pin, amount)` uses **PWM** on a supported pin. The amount goes from `0` (off) to `255` (brightest). PWM turns the pin on and off very quickly; changing the on-time changes how bright the LED looks. It does not make a smooth analog voltage, and it only works for PWM-capable pins.

```cpp
analogWrite(9, 80);   // A dimmer brightness
analogWrite(9, 255);  // Brightest setting
```

You will meet this in Lesson 9; see the [lesson guide](LessonMaterial/README.md). For servos, displays, relays, and Bluetooth, the kit guide shows the extra library functions or wiring those parts need.
