#include "MyForm.h"
using namespace System;                                      
using namespace System::Windows::Forms;                      
using namespace testapp;                                     
                                                             
[STAThreadAttribute]                                        
int main() {                                                            
  Application::Run(gcnew MyForm());  
  //aaa
  return 0;                                                 

}
