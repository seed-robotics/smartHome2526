# Arduino Challenges

Try the five tasks under a lesson in order. Each task tells you what to connect, what to change in the program, and what you should see or hear. Open the linked `.ino` file for a complete example solution. Pin numbers are examples: follow your kit wiring and change the constants if needed.

For Arduino basics, see the [general guide](../../README.md). For lesson explanations and the complete lesson sketches, see the [Lesson Material guide](../../LessonMaterial/README.md).

## Lesson 1: Blink an LED

Use the built-in LED on pin 13, or connect an LED to a suitable output pin with the correct resistor.

1. **Slow blink:** Make the LED stay on for 1 second and off for 1 second. See [solution](../Solutions/Lesson01/Challenge01_SlowBlink/Challenge01_SlowBlink.ino).
2. **Short and long flashes:** Make one short flash (200 ms), then one long flash (800 ms), then wait 1 second before repeating. See [solution](../Solutions/Lesson01/Challenge02_FlashPattern/Challenge02_FlashPattern.ino).
3. **Count three flashes:** Make the LED flash exactly three times, wait 2 seconds, and repeat the group. See [solution](../Solutions/Lesson01/Challenge03_ThreeFlashes/Challenge03_ThreeFlashes.ino).
4. **Make an SOS pattern:** Flash three short times, three long times, and three short times, then wait before repeating. See [solution](../Solutions/Lesson01/Challenge04_SOS/Challenge04_SOS.ino).
5. **Choose the speed:** Add a variable named `blinkDelay`. Use it for the on and off time, and change its value to compare slow and fast blinking. See [solution](../Solutions/Lesson01/Challenge05_ChooseSpeed/Challenge05_ChooseSpeed.ino).

## Lesson 2: Read a Button

Use the button on digital pin 13 with the kit's pull-down wiring. Open the Serial Monitor at 9600 baud.

1. **Print the raw reading:** Read pin 13 and print its `HIGH` or `LOW` value every half-second. See [solution](../Solutions/Lesson02/Challenge01_RawReading/Challenge01_RawReading.ino).
2. **Print words:** Print `Pressed` when the button reads `HIGH`; otherwise print `Released`. See [solution](../Solutions/Lesson02/Challenge02_PressedReleased/Challenge02_PressedReleased.ino).
3. **Count presses:** Add 1 to a counter when the button changes from `LOW` to `HIGH`. Print the count. See [solution](../Solutions/Lesson02/Challenge03_CountPresses/Challenge03_CountPresses.ino).
4. **Report changes only:** Print `Button pressed` or `Button released` only when the reading changes, not on every loop. See [solution](../Solutions/Lesson02/Challenge04_ReportChanges/Challenge04_ReportChanges.ino).
5. **Time a press:** Save `millis()` when the button becomes pressed. When it is released, print how many milliseconds it was held. See [solution](../Solutions/Lesson02/Challenge05_TimePress/Challenge05_TimePress.ino).

## Lesson 3: Make a Button Control an LED

Use a pull-down button on pin 13 and an LED on pin 12. Use the kit's LED module or a suitable resistor.

1. **Follow the button:** Keep the LED on only while the button is pressed. See [solution](../Solutions/Lesson03/Challenge01_FollowButton/Challenge01_FollowButton.ino).
2. **Toggle the LED:** Change the LED from off to on, or on to off, once each time the button is pressed. See [solution](../Solutions/Lesson03/Challenge02_ToggleLED/Challenge02_ToggleLED.ino).
3. **Alternate two LEDs:** Add a second LED on pin 11. Each press should turn one LED off and the other on. See [solution](../Solutions/Lesson03/Challenge03_AlternateLEDs/Challenge03_AlternateLEDs.ino).
4. **Cycle three modes:** Each press should choose the next mode: off, steady on, or blinking. See [solution](../Solutions/Lesson03/Challenge04_ThreeModes/Challenge04_ThreeModes.ino).
5. **Show the mode:** Keep the three modes and also print `Off`, `On`, or `Blinking` once whenever a new mode is selected. See [solution](../Solutions/Lesson03/Challenge05_PrintMode/Challenge05_PrintMode.ino).

## Lesson 4: Read a Photocell

Connect the photocell to analog input A1 as shown in the kit guide. Open the Serial Monitor at 9600 baud.

1. **Print one reading:** Read A1 and print the number every half-second. Cover and uncover the sensor to see the number change. See [solution](../Solutions/Lesson04/Challenge01_PrintReading/Challenge01_PrintReading.ino).
2. **Label the light:** Print the reading and the word `Darker` or `Brighter` depending on whether it is below or above 500. See [solution](../Solutions/Lesson04/Challenge02_LabelLight/Challenge02_LabelLight.ino).
3. **Find the range:** While you move the sensor between shade and light, keep and print the lowest and highest readings. See [solution](../Solutions/Lesson04/Challenge03_FindRange/Challenge03_FindRange.ino).
4. **Average readings:** Read A1 ten times, calculate their average, and print both the latest reading and the average. See [solution](../Solutions/Lesson04/Challenge04_AverageReadings/Challenge04_AverageReadings.ino).
5. **Make three light levels:** Print `Dim`, `Medium`, or `Bright` using two threshold values that you can adjust after observing your sensor. See [solution](../Solutions/Lesson04/Challenge05_ThreeLevels/Challenge05_ThreeLevels.ino).

## Lesson 5: Let Light Control an LED

Use the photocell on A1 and the LED on pin 5. Test and adjust thresholds for your room.

1. **Switch at one threshold:** Turn the LED on when the reading is at least 500; otherwise turn it off. See [solution](../Solutions/Lesson05/Challenge01_ThresholdSwitch/Challenge01_ThresholdSwitch.ino).
2. **Calibrate the threshold:** Print the reading and use a named `LIGHT_THRESHOLD` constant so you can change the switch point without editing the logic. See [solution](../Solutions/Lesson05/Challenge02_Calibrate/Challenge02_Calibrate.ino).
3. **Add a middle range:** Keep the LED off below 400, on above 700, and blinking between those values. See [solution](../Solutions/Lesson05/Challenge03_ThreeRanges/Challenge03_ThreeRanges.ino).
4. **Stop flicker:** Turn on below 450, but do not turn off until the reading rises above 550. This gap should stop the LED flickering near the boundary. See [solution](../Solutions/Lesson05/Challenge04_Hysteresis/Challenge04_Hysteresis.ino).
5. **Signal three levels:** Show dim light with one flash, medium light with two flashes, and bright light with three flashes, then wait before checking again. See [solution](../Solutions/Lesson05/Challenge05_FlashLightLevel/Challenge05_FlashLightLevel.ino).

## Lesson 6: Make a Buzzer Sound

Connect a passive buzzer to pin 12 as shown in the kit guide. Keep the volume comfortable.

1. **Play a note:** Play 440 Hz for half a second, then stop the sound. See [solution](../Solutions/Lesson06/Challenge01_OneNote/Challenge01_OneNote.ino).
2. **Compare two notes:** Play 440 Hz, pause, then play 880 Hz. Listen for which note is higher. See [solution](../Solutions/Lesson06/Challenge02_TwoNotes/Challenge02_TwoNotes.ino).
3. **Make a short tune:** Play 440 Hz, 660 Hz, and 880 Hz in order, leaving a short silence after each note. See [solution](../Solutions/Lesson06/Challenge03_ThreeNotes/Challenge03_ThreeNotes.ino).
4. **Repeat a sound pattern:** Play two short notes followed by one longer note, then repeat the pattern. See [solution](../Solutions/Lesson06/Challenge04_Rhythm/Challenge04_Rhythm.ino).
5. **Add a rest:** Play three different notes with a full second of silence between the second and third notes. See [solution](../Solutions/Lesson06/Challenge05_Rest/Challenge05_Rest.ino).

## Lesson 7: Play a Note Sequence

Use the passive buzzer on pin 12. The examples use `tone()` and arrays built into Arduino C++.

1. **Change one note:** Play the supplied three-note sequence and change its middle pitch. See [solution](../Solutions/Lesson07/Challenge01_ChangeNote/Challenge01_ChangeNote.ino).
2. **Give notes different lengths:** Play three notes for 200, 400, and 600 ms. See [solution](../Solutions/Lesson07/Challenge02_DifferentLengths/Challenge02_DifferentLengths.ino).
3. **Add silence:** Play three notes with a one-second silent rest after the second note. See [solution](../Solutions/Lesson07/Challenge03_AddRest/Challenge03_AddRest.ino).
4. **Use two arrays:** Store four pitches in one array and their four durations in another; use one `for` loop to play matching entries. See [solution](../Solutions/Lesson07/Challenge04_TwoArrays/Challenge04_TwoArrays.ino).
5. **Repeat the tune:** Play the four-note tune twice, then print `Finished` to the Serial Monitor and stop playing. See [solution](../Solutions/Lesson07/Challenge05_RepeatTwice/Challenge05_RepeatTwice.ino).

## Lesson 8: Let Light Change a Buzzer Pitch

Connect the photocell to A0 and passive buzzer to pin 12. Keep the pitch in a comfortable range.

1. **Choose two pitches:** Play 300 Hz in dim light and 700 Hz in bright light, using 500 as the boundary. See [solution](../Solutions/Lesson08/Challenge01_TwoPitches/Challenge01_TwoPitches.ino).
2. **Choose three pitches:** Play a low, middle, or high pitch for dim, medium, or bright readings. See [solution](../Solutions/Lesson08/Challenge02_ThreePitches/Challenge02_ThreePitches.ino).
3. **Map light to sound:** Convert readings from 0–1023 to pitches from 200–800 Hz and print both numbers. See [solution](../Solutions/Lesson08/Challenge03_MapPitch/Challenge03_MapPitch.ino).
4. **Keep the pitch in range:** Limit the mapped pitch so it never goes below 200 Hz or above 800 Hz. See [solution](../Solutions/Lesson08/Challenge04_LimitPitch/Challenge04_LimitPitch.ino).
5. **Add a quiet range:** Stop the sound when the reading is below 200. Above that value, map the reading to a pitch from 200–800 Hz. See [solution](../Solutions/Lesson08/Challenge05_QuietInDark/Challenge05_QuietInDark.ino).

## Lesson 9: Fade an LED with PWM

Use an LED on PWM pin 9. `analogWrite()` accepts brightness values from 0 (off) to 255 (bright).

1. **Choose a brightness:** Set the LED to brightness 80 for two seconds, then 220 for two seconds. See [solution](../Solutions/Lesson09/Challenge01_TwoBrightnesses/Challenge01_TwoBrightnesses.ino).
2. **Fade up:** Increase brightness from 0 to 255 in steps of 5, waiting 30 ms between steps. See [solution](../Solutions/Lesson09/Challenge02_FadeUp/Challenge02_FadeUp.ino).
3. **Fade up and down:** Increase brightness from 0 to 255 and then decrease it to 0; repeat. See [solution](../Solutions/Lesson09/Challenge03_FadeBothWays/Challenge03_FadeBothWays.ino).
4. **Change the fade speed:** Make one fade use 10 ms per step and another use 50 ms per step. See [solution](../Solutions/Lesson09/Challenge04_CompareSpeed/Challenge04_CompareSpeed.ino).
5. **Build a night-light:** Use the photocell on A1 so the LED becomes brighter as the room gets darker. See [solution](../Solutions/Lesson09/Challenge05_NightLight/Challenge05_NightLight.ino).

## Lesson 10: Detect Movement with PIR

Connect the PIR signal to digital pin 2 and the indicator LED to pin 12. Allow the sensor to settle as directed by the kit guide.

1. **Print motion status:** Print `Motion` when pin 2 is HIGH and `No motion` when it is LOW. See [solution](../Solutions/Lesson10/Challenge01_PrintStatus/Challenge01_PrintStatus.ino).
2. **Light an LED:** Turn the LED on while pin 2 is HIGH and off when it is LOW. See [solution](../Solutions/Lesson10/Challenge02_LEDIndicator/Challenge02_LEDIndicator.ino).
3. **Count motion events:** Add one to a counter only when the signal changes from LOW to HIGH. Print the count. See [solution](../Solutions/Lesson10/Challenge03_CountEvents/Challenge03_CountEvents.ino).
4. **Keep the LED on:** When motion is detected, keep the LED on for five seconds, then turn it off if no new motion happens. See [solution](../Solutions/Lesson10/Challenge04_HoldLED/Challenge04_HoldLED.ino).
5. **Keep checking while lit:** Use `millis()` to keep checking the PIR input while the LED timer is running; every new motion should restart the five-second timer. See [solution](../Solutions/Lesson10/Challenge05_NonBlockingTimer/Challenge05_NonBlockingTimer.ino).

## Lesson 11: Read the Steam Sensor

Use the kit's approved steam-sensor wiring and demonstration only. Keep moisture away from the Arduino, USB cable, and electrical connections.

1. **Print the sensor value:** Read analog input A0 and print the number during the teacher-approved demonstration. See [solution](../Solutions/Lesson11/Challenge01_PrintValue/Challenge01_PrintValue.ino).
2. **Compare two readings:** Print the value and label it `Lower` or `Higher` than 500. See [solution](../Solutions/Lesson11/Challenge02_CompareTo500/Challenge02_CompareTo500.ino).
3. **Choose a threshold:** Store a threshold in a named constant and print `Threshold reached` when the reading is above it. See [solution](../Solutions/Lesson11/Challenge03_Threshold/Challenge03_Threshold.ino).
4. **Smooth the reading:** Take five readings, average them, and print the average. See [solution](../Solutions/Lesson11/Challenge04_AverageFive/Challenge04_AverageFive.ino).
5. **Show a safe status:** Print the averaged value and either `Normal experiment reading` or `Reading changed`. Add a message that this is not a safety alarm. See [solution](../Solutions/Lesson11/Challenge05_ExperimentStatus/Challenge05_ExperimentStatus.ino).

## Lesson 12: Measure Soil Humidity

Connect the soil sensor to analog input A2. Compare only teacher-approved dry and damp soil samples.

1. **Print a reading:** Print the value from A2 every half-second. See [solution](../Solutions/Lesson12/Challenge01_PrintReading/Challenge01_PrintReading.ino).
2. **Label dry or damp:** Use a threshold of 500 to print `Dry` or `Damp`. Adjust the threshold after testing your sensor. See [solution](../Solutions/Lesson12/Challenge02_DryDamp/Challenge02_DryDamp.ino).
3. **Add a middle level:** Use two thresholds to print `Dry`, `Okay`, or `Damp`. See [solution](../Solutions/Lesson12/Challenge03_ThreeLevels/Challenge03_ThreeLevels.ino).
4. **Average five readings:** Average five sensor readings before choosing the soil label. See [solution](../Solutions/Lesson12/Challenge04_Average/Challenge04_Average.ino).
5. **Print a plant reminder:** Print `Check the plant` for dry soil and `Soil is okay` otherwise. This sketch only reports a reminder; it must not operate a pump. See [solution](../Solutions/Lesson12/Challenge05_Reminder/Challenge05_Reminder.ino).

## Lesson 13: Explore the MQ-2 Gas Sensor

This is only a teacher-supervised classroom experiment. Use the approved kit demonstration; never use flames, lighters, household gas, or unapproved substances. This sensor is not a safety alarm.

1. **Print the reading:** Read analog input A3 and print the number in the approved conditions. See [solution](../Solutions/Lesson13/Challenge01_PrintReading/Challenge01_PrintReading.ino).
2. **Compare with a value:** Print `Near baseline` below 500 and `Different from baseline` at or above 500. See [solution](../Solutions/Lesson13/Challenge02_Compare/Challenge02_Compare.ino).
3. **Set a baseline:** Record an approved baseline value in a constant and print whether the current reading is above or below it. See [solution](../Solutions/Lesson13/Challenge03_Baseline/Challenge03_Baseline.ino).
4. **Average readings:** Average five readings before comparing with the baseline. See [solution](../Solutions/Lesson13/Challenge04_Average/Challenge04_Average.ino).
5. **Print an experiment status:** Print the average and an experimental status, plus the words `Not a safety alarm`. See [solution](../Solutions/Lesson13/Challenge05_ExperimentStatus/Challenge05_ExperimentStatus.ino).

## Lesson 14: Switch a Low-Voltage Device with a Relay

Use only the teacher-approved low-voltage kit circuit. Never connect a relay to a wall outlet or household mains electricity.

1. **Switch the relay:** Turn the relay on for one second and off for one second. Confirm the correct ON/OFF logic in the kit guide. See [solution](../Solutions/Lesson14/Challenge01_BlinkRelay/Challenge01_BlinkRelay.ino).
2. **Follow a button:** Use a button on pin 13 to control the relay on pin 8. See [solution](../Solutions/Lesson14/Challenge02_ButtonRelay/Challenge02_ButtonRelay.ino).
3. **Run for two seconds:** When the button is pressed, switch the relay on for two seconds and then off. See [solution](../Solutions/Lesson14/Challenge03_TimedRelay/Challenge03_TimedRelay.ino).
4. **Print relay state:** Print `Relay on` or `Relay off` only when the commanded state changes. See [solution](../Solutions/Lesson14/Challenge04_PrintState/Challenge04_PrintState.ino).
5. **Default to off:** At startup, set the relay to its verified OFF state; use a button to switch it and an LED on pin 12 to show its state. See [solution](../Solutions/Lesson14/Challenge05_SafeController/Challenge05_SafeController.ino).

## Lesson 15: Control the Fan Module

Use the kit fan only, with teacher-approved wiring. Keep fingers and loose objects away from moving parts.

1. **Run and stop:** Turn the fan on for two seconds, then off for two seconds. See [solution](../Solutions/Lesson15/Challenge01_RunStop/Challenge01_RunStop.ino).
2. **Use a button:** Use the button on pin 13 to turn the fan on while pressed and off when released. See [solution](../Solutions/Lesson15/Challenge02_ButtonFan/Challenge02_ButtonFan.ino).
3. **Run for five seconds:** Press the button once to start a five-second fan run, then stop automatically. See [solution](../Solutions/Lesson15/Challenge03_TimedRun/Challenge03_TimedRun.ino).
4. **Add a cooldown:** After the five-second run, do not allow another run for three seconds. See [solution](../Solutions/Lesson15/Challenge04_Cooldown/Challenge04_Cooldown.ino).
5. **Keep reading the button:** Use `millis()` for the run and cooldown timers so the button can still be checked while the fan is running. See [solution](../Solutions/Lesson15/Challenge05_NonBlocking/Challenge05_NonBlocking.ino).

## Lesson 16: Move a Servo

Use the Servo library and the kit's approved servo wiring. Do not force the servo arm or hold it against an object.

1. **Try three positions:** Move the servo on pin 9 to 30, 90, and 150 degrees with a one-second pause at each. See [solution](../Solutions/Lesson16/Challenge01_ThreePositions/Challenge01_ThreePositions.ino).
2. **Sweep slowly:** Move from 30 to 150 degrees one degree at a time, then back again. See [solution](../Solutions/Lesson16/Challenge02_Sweep/Challenge02_Sweep.ino).
3. **Change the speed:** Repeat the sweep with a 10 ms pause, then a 40 ms pause. See [solution](../Solutions/Lesson16/Challenge03_CompareSpeed/Challenge03_CompareSpeed.ino).
4. **Return to center:** Move from 90 to 30, back to 90, then to 150 and back to 90. See [solution](../Solutions/Lesson16/Challenge04_ReturnToCenter/Challenge04_ReturnToCenter.ino).
5. **Use the photocell:** Read A1 and choose one of the three safe positions 30, 90, or 150 degrees based on the light level. See [solution](../Solutions/Lesson16/Challenge05_LightPosition/Challenge05_LightPosition.ino).

## Lesson 17: Show Information on the LCD

These examples use a 16-by-2 LCD with the standard `LiquidCrystal` library and pins 7, 6, 5, 4, 3, and 2. If your kit uses a different display or wiring, adjust the library and pins to match its guide.

1. **Show a greeting:** Display `Hello Arduino` on the first line. See [solution](../Solutions/Lesson17/Challenge01_Greeting/Challenge01_Greeting.ino).
2. **Show a counter:** Display a counter that increases once a second. See [solution](../Solutions/Lesson17/Challenge02_Counter/Challenge02_Counter.ino).
3. **Show a photocell value:** Read A1 and display its number on the second line. See [solution](../Solutions/Lesson17/Challenge03_LightReading/Challenge03_LightReading.ino).
4. **Label the value:** Display `Light:` and the current photocell value; clear or overwrite old digits when the number gets shorter. See [solution](../Solutions/Lesson17/Challenge04_LabeledReading/Challenge04_LabeledReading.ino).
5. **Show a status:** Display both the light value and `Dim`, `Medium`, or `Bright` based on two thresholds. See [solution](../Solutions/Lesson17/Challenge05_StatusDisplay/Challenge05_StatusDisplay.ino).

## Lesson 18: Send Data with Bluetooth

These examples use a Bluetooth serial module on SoftwareSerial pins 2 (Arduino RX) and 3 (Arduino TX). Follow the kit guide for pairing and voltage-safe wiring; do not connect to unapproved devices.

1. **Send a message:** Send `Arduino ready` to the paired device once per second. See [solution](../Solutions/Lesson18/Challenge01_SendMessage/Challenge01_SendMessage.ino).
2. **Send the photocell value:** Read A1 and send the number once per second. See [solution](../Solutions/Lesson18/Challenge02_SendReading/Challenge02_SendReading.ino).
3. **Send a button state:** Read a button on pin 13 and send `Pressed` or `Released` when it changes. See [solution](../Solutions/Lesson18/Challenge03_SendButton/Challenge03_SendButton.ino).
4. **Receive a command:** Receive character `1` to turn an LED on and `0` to turn it off; ignore other characters. See [solution](../Solutions/Lesson18/Challenge04_ReceiveCommand/Challenge04_ReceiveCommand.ino).
5. **Send and receive:** Send the A1 light reading once a second and accept the same `1`/`0` LED commands. See [solution](../Solutions/Lesson18/Challenge05_TwoWay/Challenge05_TwoWay.ino).

## Lesson 19: Build the Multipurpose Smart Home

Use only teacher-approved low-voltage kit components. This classroom prototype is not a safety or security device.

1. **Make a night-light:** Read the photocell on A1 and turn an LED on pin 9 on when the room is dim. See [solution](../Solutions/Lesson19/Challenge01_NightLight/Challenge01_NightLight.ino).
2. **Add motion:** Use the PIR sensor on pin 2; turn the LED on if the room is dim or motion is detected. See [solution](../Solutions/Lesson19/Challenge02_LightOrMotion/Challenge02_LightOrMotion.ino).
3. **Add a status tone:** Play one short buzzer sound on pin 12 when motion is first detected. Do not repeat it on every loop. See [solution](../Solutions/Lesson19/Challenge03_MotionTone/Challenge03_MotionTone.ino).
4. **Show the status:** Print light level, motion status, and LED state to the Serial Monitor once each second. See [solution](../Solutions/Lesson19/Challenge04_PrintStatus/Challenge04_PrintStatus.ino).
5. **Combine the parts:** Build a night-light using the photocell, PIR, LED, and buzzer. The LED should stay on while motion is detected and otherwise turn on only when it is dim; beep once when motion first starts. See [solution](../Solutions/Lesson19/Challenge05_CompletePrototype/Challenge05_CompletePrototype.ino).
