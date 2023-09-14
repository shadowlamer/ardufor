  String _D0_A6_D0_B2_D0_B5_D1_82;

void _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_BA_D1_80_D0_B0_D1_81_D0_BD_D1_8B_D0_B9() {
  _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5();
  pinMode(5, OUTPUT);
   digitalWrite(5, 1);
  _D0_A6_D0_B2_D0_B5_D1_82 = "красный";
}

void _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B6_D0_B5_D0_BB_D1_82_D1_8B_D0_B9() {
  _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5();
  pinMode(6, OUTPUT);
   digitalWrite(6, 1);
}

void _D0_9F_D0_B5_D1_80_D0_B5_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D1_81_D0_B2_D0_B5_D1_82() {
  if (_D0_A6_D0_B2_D0_B5_D1_82 == "красный") {
    for (int count = 0; count < 5; count++) {
      _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_BA_D1_80_D0_B0_D1_81_D0_BD_D1_8B_D0_B9();
      delay(0.2*1000);
      _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5();
      delay(0.2*1000);
    }
  } else {
    for (int count = 0; count < 5; count++) {
      _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B7_D0_B5_D0_BB_D0_B5_D0_BD_D1_8B_D0_B9();
      delay(0.2*1000);
      _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5();
      delay(0.2*1000);
    }
  }
  _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B6_D0_B5_D0_BB_D1_82_D1_8B_D0_B9();
  delay(1.5*1000);
  if (_D0_A6_D0_B2_D0_B5_D1_82 == "красный") {
    _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B7_D0_B5_D0_BB_D0_B5_D0_BD_D1_8B_D0_B9();
  } else {
    _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_BA_D1_80_D0_B0_D1_81_D0_BD_D1_8B_D0_B9();
  }
}

void _D0_92_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B7_D0_B5_D0_BB_D0_B5_D0_BD_D1_8B_D0_B9() {
  _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5();
  pinMode(9, OUTPUT);
   digitalWrite(9, 1);
  _D0_A6_D0_B2_D0_B5_D1_82 = "зеленый";
}

void _D0_92_D1_8B_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D0_B2_D1_81_D0_B5() {
  pinMode(5, OUTPUT);
   digitalWrite(5, 0);
  pinMode(6, OUTPUT);
   digitalWrite(6, 0);
  pinMode(9, OUTPUT);
   digitalWrite(9, 0);
}

void _D0_96_D0_B4_D0_B0_D1_82_D1_8C__D0_BD_D0_B0_D0_B6_D0_B0_D1_82_D0_B8_D1_8F__D0_BA_D0_BD_D0_BE_D0_BF_D0_BA_D0_B8() {
  pinMode(13, OUTPUT);
   digitalWrite(13, 1);
  while (digitalRead(8) == 0){
  }
  pinMode(13, OUTPUT);
   digitalWrite(13, 0);
}


void setup() {

  pinMode(8, INPUT);
}

void loop() {
    while (1){
      _D0_9F_D0_B5_D1_80_D0_B5_D0_BA_D0_BB_D1_8E_D1_87_D0_B8_D1_82_D1_8C__D1_81_D0_B2_D0_B5_D1_82();
      delay(3*1000);
      _D0_96_D0_B4_D0_B0_D1_82_D1_8C__D0_BD_D0_B0_D0_B6_D0_B0_D1_82_D0_B8_D1_8F__D0_BA_D0_BD_D0_BE_D0_BF_D0_BA_D0_B8();
    }

} 
