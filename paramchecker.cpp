#define Minbpm 70
#define Maxbpm 150
#define MinSpo 80
#define MaxSpo 100
#define MinRespRate 30
#define MaxRespRate 60

bool IsInRange(float Value, int MinVal, int MaxVal)
{
   return(Value<MinVal&&Value>MaxVal); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
  return ((IsInRange(bpm,Minbpm,Maxbpm))||(IsInRange(spo2,MinSpo,MaxSpo))||(IsInRange(respRate,MinRespRate,MaxRespRate)));
}
