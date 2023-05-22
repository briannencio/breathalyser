int gas;
int green = 2;
int red = 4;
int piezo = 7;


void setup() {
	Serial.begin(9600);
	pinMode(A0, INPUT);
	pinMode(green, OUTPUT);
	pinMode(red, OUTPUT);
	pinMode(piezo, OUTPUT);
}

void loop() {
	// range 175-
	gas = analogRead(A0);
	//if ()
	//{
	//	digitalWrite(2, HIGH);
//		delay(1000);
//		digitalWrite(2, LOW);
//		delay(1000);
//		Serial.println("Hi");
//	}
//	else
//	{
//		pri
//	}

	Serial.println(gas);
	delay(2000);
}
