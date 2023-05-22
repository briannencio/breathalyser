int gas;
int green = 2;
int red = 4;
int piezo = 7;
int maxi = 355;
int mini = 108;


void setup() {
	Serial.begin(9600);
	pinMode(A0, INPUT);
	pinMode(green, OUTPUT);
	pinMode(red, OUTPUT);
	pinMode(piezo, OUTPUT);
}

void loop() {
	int midNum = ((maxi-mini) / 2) + mini;

	gas = analogRead(A0);

	if (gas > midNum) // (max-min)/2
	{
		digitalWrite(red, HIGH);
		digitalWrite(green, LOW);
		digitalWrite(piezo, HIGH);
		delay(1000);
		digitalWrite(piezo, LOW);
		delay(1000);
	}
	else
	{
		digitalWrite(red, LOW);
		digitalWrite(green, HIGH);
		digitalWrite(piezo, LOW);
	}
	Serial.println(gas);
	delay(2000);
}
