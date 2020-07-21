#define Minbpm 70
#define Maxbpm 150

bool IsInRange(float Value, int MinVal, int MaxVal)
{
   return(Value<MinVal&&Value>MaxVal); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
  return ((IsInRange(bpm,Minbpm,Maxbpm))||(IsInRange(spo2,80,100))||(IsInRange(respRate,30,60)));
}
