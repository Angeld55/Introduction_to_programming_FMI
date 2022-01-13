//Way 1 - 3 parameters(array,size,position/index)
bool Is_monotonically_increasing(const float* seq,int length,int position)
{
   if(position==length-1)
	   return true;
   if(seq[position]>seq[position+1])
	   return false;
   return Is_monotonically_increasing(seq,length,position+1);
}

//Way 2 - 2 parameters(array + size)
bool Is_rising(const float* seq,int Size)
{
    if(Size<2)
		return true;
	
    if(*seq>*(seq+1)) ///Same as if(seq[0]>seq[1]) return false;
		return false;
		
    return Is_rising(++seq,Size-1);
}