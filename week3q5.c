 
 ​#​include​ ​<​stdio.h​>​     
 ​      
 ​int​ ​main​()     
 ​{     
 ​    ​int​ arr[] = {​2,77,56,90,87};       
 ​     
 ​    ​int​ length = ​sizeof​(arr)/​sizeof​(arr[​0​]);     
  
 ​    ​int​ max = arr[​0​];     
 ​    
 ​    ​for​ (​int​ i = ​0​; i < length; i++) {      
 ​   
 ​       ​if​(arr[i] > max)     
 ​           max = arr[i];     
 ​    }       
 ​    ​printf​(​"​Largest element present in given array: ​%d​\n​"​, max);     
 ​    ​return​ ​0​;     
 ​}    