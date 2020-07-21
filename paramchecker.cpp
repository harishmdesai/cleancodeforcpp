bool IsInRange(float Value, float MinVal, float MaxVal){
   return(Value<MinVal||Value>MaxVal); 
}

bool IsbpmOk(float bpm){
  return(IsInRange(bpm,70,150));
}

bool Isspo2InRange(float spo2){
  return(IsInRange(spo2,80,100));
}

bool IsrespRateinRange(float respRate){
  return(IsInRange(respRate,30,60); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (IsbpmOk(bpm)||Isspo2InRange(spo2)||IsrespRateinRange(respRate));
}
