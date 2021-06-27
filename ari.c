char* ari(char s[])
{
  int chara=0, words=0, sent=0;
  float ari;
  for(int count=0; count<strlen(s); count++)
  {
    if(isalnum(s[count]))
      chara = chara +1;
    else if(s[count]==' ')
      words = words + 1;
    if( s[count]=='.'|| s[count]=='!' || s[count]=='?')
      sent = sent +1;
  }
  //printf("sent:%d\nchar:%d, words:%d ",sent,chara,words );
  ari = 4.71*((float)chara/words) + 0.5*((float)words/sent) - 21.43;
  if (ari /(int)ari != 0)
    ari = (int)ari + 1;
    if (ari==1)
      return ("Kindergarten");
    else if (ari==2)
      return ("First/Second Grade");
    else if (ari==3)
      return ("Third Grade");
    else if (ari==4)
      return ("Fourth Grade");
    else if (ari==5)
      return ("Fifth Grade");
    else if (ari==6)
      return ("Sixth Grade");
    else if (ari==7)
      return ("Seventh Grade");
    else if (ari==8)
      return ("Eighth Grade");
    else if (ari==9)
      return ("Ninth Grade");
    else if (ari==10)
      return ("Tenth Grade");
    else if (ari==11)
      return ("Eleventh Grade");
    else if (ari==12)
      return ("Twelfth grade");
    else if (ari==13)
      return ("College student");
    else if (ari==14)
      return ("Professor");
    else
      return ("Error");
}
