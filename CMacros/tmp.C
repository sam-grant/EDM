#include <regex>
void tmp() {

   string test_str = "acec3223sjvna_MRF_sdkjsdcsvmnvs2323";

   string key = "MRF"; 

   if(regex_match(test_str, regex("("+key+")(_*_)"))) {
      cout<<"MATCHED"<<endl;
   }

   if(test_str.find(key) != std::string::npos) { 
      cout<<"Got em"<<endl;

   } 




   return;


}