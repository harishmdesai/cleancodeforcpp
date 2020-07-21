bool IsInRange(float Value, int MinVal, int MaxVal)
{
   return(Value<MinVal&&Value>MaxVal); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
  return ((IsInRange(bpm,70,150))||(IsInRange(spo2,80,100))||(IsInRange(respRate,30,60)));
}
