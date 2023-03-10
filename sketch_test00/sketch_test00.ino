#include <M5Stack.h>
#include "TestControl.hpp"

TestControl *m_testControl;

void setup() {
  M5.begin();
  M5.Lcd.print("Hello World!"); 
  
  m_testControl = new TestControl();
  m_testControl->Start();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!m_testControl->IsEnd())
  {
    m_testControl->Update();
  }
}