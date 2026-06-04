; A comment
;/ multi
   line /;
ScriptName Edges
Function Demo()
  int x = 0x1F2C8
  string s = "Hello\n\tWorld\\\""
  float f = 1.5234
  ; Line continuation
  int total = 1 + 2 \
            + 3 + 4
  ; Cast + method chain + index
  int first = (MyVariable as MyObject).MyFunction()[0]
  ; Namespaced call
  MyMod:Utility.MyGlobal()
  ; New array
  Point[] pts = new Point[5 * total]
  pts[0] = new Point
  ; Length
  int len = pts.Length
  ; Var + is
  Var v = 1
  if v is int
    Debug.Trace("int")
  elseIf v is float
    Debug.Trace("float")
  else
    Debug.Trace("other")
  endIf
EndFunction
