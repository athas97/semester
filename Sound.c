 unsigned char i;

void main() {
      unsigned char notes[Max_Notes] =
    { 
     262,262,294,262,349,330,262,262,294,262,392,349,262,
     262,524,440,349,330,294,466,466,440,349,392,349
    };
 // unsigned int notes[max_notes]={262,277.18,293.66,311.13,329.63,349.23,370.0,392.0,415.3,440.0,466.16,193.88};

  unsigned char duration[max_notes]={1,1,2,2,2,3,1,1,2,2,2,3,1,1,2,2,2,2,2,1,1,2,2,2,4};

  Sound_Init(&PORTC,2);

  while(1){
   for(i=0;i<Max_Notes;i++){
    Sound_Play(notes[i],400*duration[i]);
    delay_ms(100);
   }
   delay_ms(3000);
  }
}