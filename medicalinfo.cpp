#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class medii{
    public:
    void headace();
    void backpain();
    void painkillers();
    void maleria();
    void dengu();
    void jundice();
    void allergy();
    void infection();
    void migrane();
};
void medii::headace()
{   

    char med[50];
  system("cls");
    cout<<"\n\n                 HEADACE   ";
    cout<<"\n";
    cout<<"\nHeadache can be due to mental stress, emotional anxiety, medical disorder, hunger, hangovers and fatigue. It is an illness that is faced by everyone on day to day basis. Headache may be radiating, throbbing, and gradually increasing.";
    cout<<"\n .......... THER ARE DIFFERNT TYPES OF  HEADACE........";
    cout<<"\n Primary \nA primary headache is when the headache itself is the main problem. It is not a symptom of an underlying disease or condition. While the pain from primary headaches can be disabling, the headaches are not dangerous.  ";
    cout<<"\n secondary \nA secondary headache is caused by another condition that triggers pain-sensitive areas in the neck and head. Secondary headaches are rare, but they can also be much more serious than primary headaches. ";
    cout<<" medicines for headace are as follw";
   
    //cout<<"\n TAKE REST AND SOME PAINKILLER AS FOLLOW .....\n                                                                                                        as per doctor instruction";
    cout<<"\n  Acetaminophen \nAspirin \n Ibuprofen \nNaproxen\n Barbiturate\nAmitriptyline \n Topiramate \n Tizanidine \nBuspirone";
    cout<<"enter the name of medicine for  search";
    cin>>med;
    {
        if(strcmp(med,"Acetaminophen")==0)
{           cout<<"\n                            Acetaminophen"    ;
           cout<<"\n\n#Acetaminophen is a pain reliever. It is often used to treat the pain of any kind.";
           cout<<"\n\n#It is also said to reduce fever.\n# Acetaminophen is not advised to take it when you have liver relates issues. ";
           cout<<"\n\n#Avoid alcohol when on medication and is not generally recommended for pregnant women. ";
           
           cout<<"\n                   *** This medicine is strictly to be taken under guidance of physicians.";
}
       if(strcmp(med,"ASPRIN")==0)
          { cout<<"\n                            Headache Relief Aspirin:";
           cout<<"\n\n#Aspirin is a derivative of salicylic acid and is a common medicine name for a headache. It is a salicylate. Aspirin is known to reduce pain.";

           cout<<"\n\n#It reduces the substance that causes pain in the body. \n\n# Aspirin is a very common choice of medicine for headache. ";
           cout<<"\n\n#IT is said to be taken under supervision for a patient with a heart condition";
          }
        if(strcmp(med,"Ibuprofen")==0)
          { cout<<"\n                            Ibuprofen for Migraines, Sinus and Tension Headaches ";
           cout<<"\n\n#Ibuprofen is non-steroidal anti-inflammatory drug and is another best medicine for migraine headaches and sinus headaches. \n\n#It treats pain and reduces inflammation. The pain can be of a head, tooth, menstrual cramp and bones. \n\n#It can be used for adults and six month old babies.\n\n# It is not to be given to people who have had heart bypass surgery. \n\n#You should not have it in last trimester of pregnancy. This medicine needs to be taken only after a proper meal.";
          }
        if(strcmp(med, "Naproxen")==0)
           { cout<<"                             Naproxen for Tension, Migraine and Hormone Headaches:";
            cout<<"\n\n#Naproxen is a nonsteroidal anti-inflammatory drug.\n\n# It is of the propionic acid.\n\n# This element helps to relax and reduce the pain in the head.\n\n# It is a risk of stomach ulcers.\n\n# Naprosyn reduces pain, stiffness and inflammation.\n\n# It advisable to be taken with food. It is used for getting patients off medication. \n\n\nHence, it is called ‘bridge medicine’.";
           }
        if(strcmp(med,"Barbiturate")==0)  
          {  cout<<"\n                            Barbiturate for Cluster and Migraine Headaches:";
            cout<<"\n\n# Barbiturate is a good anti-depression medicine. \n\n#It has analgesic effects. It has mild anaesthetic effects. \n\n#Brabiturate treats a cluster headache and is a medicine for migraine headache.\n\n# Barbiturate is used to treat insomnia and anxiety too. \n\n#It is addictive and has no antidote. It can be addictive.\n\n# Barbiturate is not given to older adults, babies and pregnant ladies. ";
          }
        if (strcmp (med,"Amitriptyline")==0)
          { cout<<" \n                             Amitriptyline for Migraine and Chronic Headaches:";
           cout<<"\n\n#Amitriptyline is sold under the name ‘Elavil’.\n\n# It is used to treat conditions like depression, anxiety and is known to reduce acute headaches. \n\n#It is known for preventing migraine in case of neuropathic pain. \n\n#Amitriptyline has few side-effects like low blood pressure, dry mouth and constipation. \n\n#It is advised for those who have a history of migraine.";
          }
        if(strcmp(med,"Topiramate")==0)
           {cout<<"\n                               Topiramate for Daily and Migraine Headaches:  ";
           cout<<"\n\n#Topiramate is an anticonvulsant. It treats epilepsy.\n\n# It is used to in acute headache and migraines.\n\n# Topiramate has an effect on blood vssels of the brain.\n\n# This medicine for adults reduces the pain and helps you relax.\n\n# It is very effective for migraine sufferers with fewer side effects. \n\n#It may cause dizziness, weight loss, fatigue and depression.";
           }
        if(strcmp(med,"Tizanidine")==0)
         {  cout<<"\n                               Tizanidine for Cluster Headaches:";
           cout<<"\n\n#Tizanidine is muscle relaxant and is the best medicine to reduce pain.\n\n# It helps to reduce the pain of spinal and central nervous system.\n\n# It is a medicine for severe headaches.\n\n# Tizanidine is given when the pain is not tolerable.\n\n# It can cause liver damage and dizziness.\n\n# It also causes nervousness, hallucination, drowsiness, constipation, dry mouth, vomiting, stomach pain, heart pain and tingling sensation in hands, feet and legs. ";
         }
        if(strcmp(med, "Buspirone")==0)
           { cout<<"\n                                   Buspirone for Tension Type Headaches:";
            cout<<"\n\nBuspirone is anxiety medicine which affects natural substance like neurotransmitters produced in the brain. This helps to reduce pain in the head and is a sinus headache medicine. It is medication taken by mouth. Buspirone has some adverse effects like drugs. It can get very addictive. It can cause dizziness, sleepiness and emotional imbalance. ";
           }   
        else
           cout<<"enter the given medicine";
           
    }

   }
   void medii::backpain()
   {
    
   }
   int main()
   {
    
    char ask[50];
    medii obj;
    cout<<"                                              **************    MEDICAL INFORMATION SYSTEM";
    cout<<"\n\n ENTER THE GROUP OF MEDICINES TO SEARCH";
    cout<<"\n                        HEADACAE ";
    cout<<"\n                        BACKPAIN";
    cout<<"\n                        PAINKILLERS";
    cout<<"\n                        ALLERGIES";
    cout<<"\n                        INFECTIONS";
    cout<<"\n                        MALERIA ";
    cout<<"\n                        JUNDICE ";
    cout<<"\n                        MIGRANE  ";
     cout<<"your search=";
     cin>>ask;
  if(strcmp(ask,"headache")==0)
   {// case "HEADACHE":
      obj.headace();
       
  }    
    
return 0;
   }


