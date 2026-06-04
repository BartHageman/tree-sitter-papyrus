ScriptName Basic Extends ObjectReference
{A basic Papyrus script}

Import Utility

int Property MyCount = 0 Auto
{Counts things}

string Property Title = "Hello" AutoReadOnly

float jiffies = 0.0

Group Settings
  int Property Threshold = 10 Auto
  bool Property Enabled = true Auto Hidden
EndGroup

Struct Point
  float X
  {X coord}
  float Y
  {Y coord}
EndStruct

CustomEvent OnSomethingHappened

Auto State Idle
  Event OnActivate(ObjectReference akActivator)
    PlayAnimation("CoolStuff")
    MyCount += 1
    if MyCount >= Threshold
      GotoState("Active")
    endIf
  EndEvent
EndState

State Active
  Function DoStuff()
    int i = 0
    while i < 10
      Debug.Trace("i = " + i)
      i += 1
    endWhile
  EndFunction
EndState

int Function AddTwo(int a, int b) global
  return a + b
EndFunction

Function Negate(float x = 1.0)
  float y = -x * 2.0
  if y is Float
    Debug.Trace(y as string)
  endIf
EndFunction

Event ObjectReference.OnActivate(ObjectReference akSender, ObjectReference akActivator)
  Debug.Trace("remote")
EndEvent

int Property Computed Hidden
  int Function Get()
    return MyCount * 2
  EndFunction
  Function Set(int v)
    MyCount = v / 2
  EndFunction
EndProperty
