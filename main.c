#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void mainMenu();
void maths();
void biology();
void applicationbio();
void applicationmaths();
void registaionbio();
void registaionmaths();
void admin();
void regimathsbio();
int main()
{
    mainMenu();
    return 0;
}
void mainMenu(){
 int select;
    printf("\n\t\a!!!!!!***** University Registration in Colombo District  *****!!!!!!");
    printf("\n\n Select Your A/L Subject Stream");
    printf("\n\n - 1.Maths");
    printf("\n\n - 2.Biology");
    printf("\n\n - 3.Administrative");
    printf("\n\n Enter Your Selection : ");
    scanf("%d",&select);
    switch(select){
    case 1:
        system("cls");
        maths();
        break;
    case 2:
        system("cls");
        biology();
        break;
     case 3:
        system("cls");
        admin();
        break;
    default :
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Selection");
        system("cls");
        mainMenu();
    }
}
void biology(){
    int select;
    printf("\n\n - 1.Press 1 to Continue");
    printf("\n\n - 2.Press 2 to main menu");
    printf("\n\n Enter Your Selection : ");
    scanf("%d",&select);
    switch(select){
    case 1:
       system("cls");
    applicationbio();
        break;
    case 2:
        system("cls");
        mainMenu();
        break;
    default :
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Selection");
        system("cls");
        mainMenu();
    }
 }
void maths(){
         int select;
    printf("\n\n 1.Press 1 continue");
    printf("\n\n 2.Press 2 to main menu");
    printf("\n\n Enter Your Selection : ");
    scanf("%d",&select);
    switch(select){
    case 1:
       system("cls");
     applicationmaths();
        break;
    case 2:
        system("cls");
        mainMenu();
        break;
    default :
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Selection");
        system("cls");
        mainMenu();
    }
    }
void applicationmaths(){
       int select;
    float zscore;
     printf("\n\t-- University Course for Maths students -- ");
    printf(" \n\n\nEnter Z score : ");
    scanf("%f",&zscore);
     if(zscore>4){
            printf("\n\t\t\tInvalid Z-score Please Try Again");
             mainMenu();}
    else if(zscore>=1.9232){
    printf("\n\tYou Can Enter The Engineering Faculty:\n\n\tMoratuwa:\n\t1.Biomedical Engineering\n\t2.Electrical Engineering\n0\t3.Chemical & ProcessEngineering\n\t4.Electronic & Telecommunication Engineering\n\t5.Civil Engineering\n\t6.Mechanical Engineering\n\t7.Computer Science & Engineering\n\t8.Materials Science & Engineering");
    printf("\n\n\tPeradeniya:\n\t1.Civil Engineering\n\t2.Chemical & Process Engineering\n\t3.Computer Engineering\n\t4.Electrical & Electronic Engineering\n\t5.Mechanical Engineering\n\t6.Production Engineering");
    printf("\n\n\tSri Jayewardenepura:\n\t1.Civil Engineering\n\t2.Computer Engineering\n\t3.Electrical & Electronic Engineering\n\t4.Mechanical Engineering");
    printf("\n\n\tRuhuna:\n\t1.Civil & Environmental Engineering\n\t2.Electrical & Information Engineering\n\t3.Mechanical & Manufacturing Engineering");
    printf("\n\n\tSouth Eastern:\n\t1.Civil Engineering\n\t2.Electrical Engineering\n\t3.Electronic Engineering\n\t4.Mechanical Engineering");
    printf("\n\n\tJaffna:\n\t1.Civil Engineering\n\t2.Electrical & Electronic Engineering\n\t3.Mechanical Engineering\n\t4.Computer Engineering");}
     else if(zscore>=1.9029)
       printf("\n\tYou Can Enter The Law Faculty & You Can Complete Bachelor of Law Degree in 4 Years @ Colombo,Peradeniya,Jaffna.");
     else if(zscore>=1.8776)
       printf("\n\tYou Can Enter The Engineering Faculty (TM)-Textile & Clothing Technology @ Moratuwa.You Can Complete Degree in 4 Years.");
     else if(zscore>=1.8724)
       printf("\n\tYou Can Enter The Engineering Faculty (EM)-Earth Resources @ Moratuwa.You Can Complete Degree in 4 Years.");
     else if(zscore>=1.8148)
        printf("\n\tYou Can Complete B.Sc.in Physiotherapy @ Colombo & Peradeniya university.");
     else if(zscore>=1.7970)
        printf("\n\tYou Can Complete B.Sc.in Transport & Logistic Management Degree in 4 Years @ Moratuwa university");
     else if(zscore>=1.7944)
        printf("\n\tYou Can Complete B.Sc.in Quantity Surveying in 4 Years @ Moratuwa university");
     else if(zscore>=1.7692)
        printf("\n\tYou Can Complete B.Sc. Degree in Town & Country Planing in 4 Years @ Moratuwa university");
     else if(zscore>=1.7678)
        printf("\n\tYou Can Complete B.Sc.(Hons) in Information Technology & Management in 4 Years @ Moratuwa university\n\tCandidate must also fulfil the following requirements @ the G.C.E(O/L) Examination\n\t\t(1).Have at least a credit Pass(C)in English\n\t\t(2).Have at least a credit Pass(C)in Mathematics");
     else if(zscore>=1.7441)
        printf("\n\tYou Can Complete B.Sc.Software Engineering(Special).in 4 Years @ Kelaniya university");
     else if(zscore>=1.7352)
        printf("\n\tYou Can Complete B.Sc.(Hons) in Information Technology.in 4 Years @ university of Moratuwa ");
     else if(zscore>=1.7236)
        printf("\n\tYou Can Complete B.Sc.in Speech & Hearing Science(Special).in 4 Years.\n\tThis Degree offered with specialization in Speech and Language Therapy or Audiology Witch are\n\tconducted by Faculty of Medicine of University Kelaniya");
     else if(zscore>=1.7037)
         printf("\n\tYou Can Enter The Kelaniya university for study in Peace & Conflict Resolution.\n\tName of the Degree program is BA in Peace & Conflict Resolution\n\tDuration-3 Years\n\tCandidate must pass Common General Paper more than 30 Percentage for G.C.E (A/L)");
     else if(zscore>=1.6903)
        printf("\n\tYou Can Complete Honour Degree of B.Sc.in Facilities Management.in 4 Years @ Moratuwa university\n\tCandidate should have obtained;\n\t\t(a) at least a Credit Pass(C) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination");
     else if(zscore>=1.6574)
        printf("\n\tYou Can Complete B.Sc.(Hons) in Computation & Management in 4 Years @ university of Peradeniya\n\tCandidate should have obtained a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination");
     else if(zscore>=1.6399)
        printf("\n\tYou Can Complete B.Sc.in Computer Science in 3 Years.\n\t Available University-:\n\t\t(a)University of Colombo School of Computing(UCSC).\n\t\t(b)Jaffna.\n\t\t(c)Ruhuna\n\t\t(d)Trincomalee Campus of the Eastern University.\n\tBased on the performance & preference of students,a selected number of students will be able to\n\tfollow a 4year degree program conducted by the UCSC\n\t\t* B.Sc.(Hons)in Computer Science\n\t\t*B.Sc.(Hons)in Software Engineering\n\tUniversity of Kelaniya also offers the B.Sc.(Hons)in Computer Science.");
     else if(zscore>=1.6014)
        printf("\n\tYou Can Enter The Kelaniya university for study in Management & Information Technology(MIT).in 4 Years\n\tDegree Program-:B.Sc.Honours in Management & Information Technology.\n\tCandidates should pass the Aptitude test conducted by University of Keleniya.");
     else if(zscore>=1.5694)
        printf("\n\tYou Can Complete Degree in 4 Years @ university of Colombo\n\n\tDegree programmes-:General-B.Sc.in Industrial Statistic & Mathematical Finance\n\t\t\t   Special-B.Sc.in Industrial Statistic\n\t\t\t   Special-B.Sc.in Mathematical Finance. ");
     else if(zscore>=1.5417)
        printf("\n\tDegree Programmes-:B.Sc.in Tourism Management(Special)\n\t\t\t   B.Sc.in Hospitality Management(Special)\n\t\t\t   University-Sabaragamuwa.\n\n\t\t\t   B.Sc.in Tourism Management(Special)\n\t\t\t   B.Sc.in Tourism & Hospitality Management(Special)\n\t\t\t   University-Rajarata.\n\n\t\t\t\tYou Can Complete Degree in 4 Years");
     else if(zscore>=1.5391)
        printf("\n\tYou Can Enter The Peradeniya university for study in Statistics & Operations Research.in 4years\n\n\tDegree Programme-:B.Sc.in Statistics & Operations Research");
     else if(zscore>=1.5214)
        printf("\n\tYou Can Complete B.Sc.in Surveying Science in 4 Years @ university of Sabaragamuwa");
     else if(zscore>=1.4931)
        printf("\n\tYou Can Enter The Southern Eastern university for study in Management & Information Technology(MIT).in 4 Years \n\tDegree Program-:B.Sc.Honours in Management & Information Technology.");
     else if(zscore>=1.4313)
        printf("\n\tYou Can Enter The Management Studies(TV).Duration- 4 Years\n\n\tTrincomalee campus of the Eastern University\n\t\t1. B.Sc.in Accounting & Financial Management\n\t\t2. B.Sc.in Marketing Management\n\t\t3. B.Sc.in Human Resources Management\n\t\t4. B.Sc.in Information Management\n\n\tVavuniya campus of Jaffna\n\t\t1. B.B.M.in Business Management\n\t\t2. B.B.M.in Accounting & Finance(special)\n\t\t3. B.B.M.in Marketing Management(special)\n\t\t4. B.B.M.in Business Economics(special)\n\t\t5. B.B.M.in Human Resources Management(special) ");
     else if(zscore>=1.4286)
        printf("\n\tYou Can Complete Bachelor of Business Management Degree in Project Management in 3 Years @ Vavuniya campus university of Jaffna");
     else if(zscore>=1.4115)
        printf("\n\tYou Can Enter The University of Colombo,School of Computing(UCSC) for study in Information System.in 3 Years.\n\t Degree Programme-:B.Sc. in Information System\n\n\tCandidate must have fulfil the following requirements-:\n\n\t\ta)at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\tb)at least a credit Pass(C)in English @ G.C.E.(O/L)Examination\n\t\tc)Pass the aptitude test");
     else if(zscore>=1.3938)
        printf("\n\tYou Can Complete B.B.M in Entrepreneurship & Management in 4 Years @ university of Uva Wellassa.\n\t The candidate should have passed the aptitude test which will be conducted by the University.\n\n\tStudents will be selected for one of the following specialization area @ the beginning of the third academic year\n\t\t1) Insurance & Actuary\n\t\t2) Entrepreneurship & Management Technology\n\n\tInthe final year all students should carry out an industrial training & research project relevant to their area of interest");
     else if(zscore>=1.3715)
        printf("\n\tYou Can Enter The University of Moratuwa,You Can Complete Honours Degree in Bachelor of Design in 4 Years\n\n\t at least a credit Pass(C)in English,Mathematics & Science @ the G.C.E(O/L)Examination & Passed the Aptitude Test,\n\twhich will be conducted by the university of Moratuwa.");
     else if(zscore>=1.3381)
        printf("\n\tDegree Programme-: B.A(Special)in Translation Studies(English/Sinhala)\n\t\t\t   University of Kelaniya\n\n\t\t\t   B.A(Honours)in Translation Studies(English/Sinhala)\n\t\t\t   University of Sabaragamuwa\n\n\t\t\t   B.A(Special)in Translation Studies(English/Tamil)\n\t\t\t   University of Jaffna\n\n\tDuration-: 4years\n\nCandidate should have passed the Aptitude Test based on specific Language proficiency \nwitch will be jointly conducted by the University of Kelaniya,Sabaragamuwa & Jaffna");
     else if(zscore>=1.3300)
         printf("\n\tYou Can Complete B.B.M in Hospitality,Tourism & Event Management in 4 Years @ university of Uva Wellassa.\n\tThe candidate should have passed the aptitude test which will be conducted by the University.");
     else if(zscore>=1.2999)
         printf("\n\tYou Can Enter The University of Jaffna,You Can Complete B.A(Special)in Translation Studies(English/Tamil)in 4 Years");
     else if(zscore>=1.2819)
         printf("\n\tYou Can Complete B.Sc in Industrial Information Technology(BITT) in 4 Years @ university of Uva Wellassa.\n\tThe candidate should have passed the aptitude test which will be conducted by the University\n\n\tIn the final year all students should carry out an industrial training & research project relevant to their area of interest");
     else if(zscore>=1.2813)
        printf("\n\tYou Can Enter The University of Kelaniya,You Can Complete  B.A.(Special)in Film & Television Studies in 4 Years\n\n\tThe candidate should have passed the aptitude test which will be conducted by the University based on specific skills in Film & Television\n\t!!The candidate who are interested in Film & Television disciplines & posses specific skills are expected to apply\n\t  the aptitude test may consist of either an interview,practical test or written test or of all three components as decided by the University.");
     else if(zscore>=1.1540)
        printf("\n\tYou Can Enter The University of Moratuwa You Can Complete Degree in Bachelor of Architecture in 5 Years\n\n\tCandidate should have obtained;\n\t\t(a) at least a Ordinary Pass(S) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination\n\t\t(d)candidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=1.1433)
        printf("\n\tYou Can Complete B.Sc in Computer Science & Technology in 4 Years @ university of Uva Wellassa \n\n\tThe candidate should have passed the aptitude test which will be conducted by the University\n\tIn the final Year all students should carry out an industrial trainning & research relevent to their area of intrest");
     else if(zscore>=1.1328)
        printf("\n\tDegree Programme-:B.Sc in Physical Science\n\n\tAvailable Universities-:Colombo\n\t\t Peradeniya.\n\t\t Sri Jayewardenapura.\n\t\t Kelaniya.\n\t\t Jaffna\n\t\t Ruhuna\n\t\t Eastern University\n\t\t South Eastern");
     else if(zscore>=1.1172)
        printf("\n\tYou Can Complete B.Sc in Computing & Information System in 4 Years @ university of Sabaragamuwa\n\n\tCandidate should have obtained at least a credit Pass(C) in English @ G.C.E.(O/L)Examination");
     else if(zscore>=1.0169)
        printf("\n\tDetails of the degree programs under Applied Science(Physical Science)\n\n\tRajarata University-: B.Sc.(Genaral)Degree in applied Science\n\t\tDuration:3 Year\n\t\tB.Sc.Degree in applied Science\n\t\tDuration:4 Year\n\t\tB.Sc.(Joint Major)Degree in applied Science\n\t\tDuration:4 Year\n\n\tSabaragamuwa University:-");
     else if(zscore>=0.9186)
        printf("\n\tYou Can Complete Bachelor of Technology(BTech)degree in Science & Technology in 4 Years @ university of Uva Wellassa\n\n\tStudent will be selected for one of the following specialization areas @ the beginning of the third academic year.\n\n\t\t1) Food Engineering & Business Technology\n\t\t2) Mathematical Science & Technology\n\t\t3) Mechatronics\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.8305)
        printf("\n\tYou Can Complete B.Sc. in Mineral Resources & Technology(Special) in 4 Years @ university of Uva Wellassa\n\n\tStudent will be selected for one of the following specialization areas @ the beginning of the third academic year.\n\n\t\t*) Mineral Processing Technology\n\n\t\t**) Water Science Technology\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.8273)
        printf("\n\tYou Can Enter The University of Uva Wellassa,You Can Complete B.Sc.in Tea Technology & Value Addition in 4 Years\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.7492)
        printf("\n\tYou Can Complete B.Sc. in Palm & Latex Technology & Value Addition in 4 Years @ university of Uva Wellassa");
     else if(zscore>=0.5216)
        printf("\n\tYou are Selected Physical Science-Information & Communication Technology(ICT)\n\n\tDegree Programmes: B.Sc.in Physics & Electronics\n\t\t\t   University of Kelaniya\n\n\t\t\t   B.Sc.in Physics & ICT\n\t\t\t   University of Jayewardenapura\n\n\t\tDuration-3 Years\n\n\tThe respective Faculties of the university to which the student has been admitted will do the selection\n\tfor a particular degree programme within a university.");
     else if(zscore>=0.3045)
        printf("\n\tYou Can Enter The University of Sabaragamuwa,You Can Complete B.Sc.in Physical Education(Special) in 4 Years\n\n\tcandidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=0.1424)
       printf("\n\tYou Can Complete Bachelor of Design Honours in 4 Years @ university of Moratuwa\n\n\tCandidate must fulfil the following requirements:\n\n\t\t(a) at least a credit Pass(C) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination\n\t\t(d)candidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=0.0934)
        printf("\n\tDegree Programme : B.Sc.in Sports Science & Management(Special)\n\n\tAvailable Universities : Sabaragamuwa University\n\t\tUniversity of Sri Jayewardenepura\n\n\tDuration-4 Years\n\n\tcandidate should have passed the aptitude test which will be conducted by the University of Sabaragamuwa & Sri Jayewardenapura\n\t At the aptitude test 30 present marks will be given to performance in the subject @ the school,Provincial & National\n\tlevel achievements in sport related events.Another 30 present will be given for the practical test & balance\n\t40 present will be given to the theory paper");
     else if(zscore>=0.0134)
        printf("\n\tYou Can Complete Bachelor of Landscape Architecture in 4 Years @ university of Moratuwa\n\n\tCandidate must fulfil the following requirements:\n\t\t(a) at least a Odinary Pass(S) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination\n\t\t(d)candidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=0.0000){
        printf("\a\t\tSORRY!!!! You can't enter to University");
         mainMenu();}

         printf("\n\n-- University registration for Maths students -- ");
      printf("\n\n  1)Press 1 to main menu ");
    printf("\n\n  2)Press 2 to registration");
    printf("\n\n Enter Your Selection : ");
    scanf("%d",&select);
    switch(select){
    case 1:
       system("cls");
     mainMenu();
        break;
    case 2:
        system("cls");
        registaionmaths();
        break;
    default :
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Selection");
        system("cls");
        mainMenu();
    }
}
void applicationbio(){
        int select;
    float zscore;
      printf("\n\t-- University Course for Biology students -- ");
    printf(" \n\n\nEnter Zscore : ");
    scanf("%f",&zscore);
    if(zscore>4){
            printf("\n\t\t\tInvalid Z-score Please Try Again");
             mainMenu();}
   else if(zscore>=1.9370)
    printf("\n\tYou can complete MBBS Degree[course code:1] in 5 Years,\n\t Available Universities : Faculty of Medicine - University of Colombo[uni-code:001A]\n\t\t\t\t  Faculty of Medicine - University of Peradeniya[uni-code:001B]\n\t\t\t\t  Faculty of Medicine- University of Jaffna[uni-code:001E]\n\t\t\t\t  Faculty of Medicine - University of Ruhuna[uni-code:001F]\n\t\t\t\t  Faculty of Medicine- University of Kelaniya[uni-code:001D]\n\t\t\t\t  Faculty of Medical Sciences - University of Sri Jayewardenepura[uni-code:001C]\n\t\t\t\t  Faculty of Health Sciences- University of Rajarata[uni-code:001K]\n\t\t\t\t  Faculty of Health Sciences- Eastem University[uni-code:001H]");
    else if(zscore>=1.9029)
      printf("\n\tYou Can Enter The Law Faculty & You Can Complete Bachelor of Law[course code:25] Degree in 4 Years @ Colombo[uni-code:025A],Peradeniya[uni-code:025B],Jaffna[uni-code:025E].");
    else if(zscore>=1.8926)
        printf("\n\tYou Can Enter The University of Peradeniya[uni-code:002B],The course of study in Dental Surgery in 5 Years[course code:2]");
    else if(zscore>=1.8547)
        printf("\n\tYou Can Enter The University of Colombo [uni-code:058A] to study in Molecular Biology & Biochemistry [course code:58]\n\tDegree programme-B.Sc.(General) in Molecular Biology & Biochemistry\n\t\t\t\tDuration : 03 years and 04 years\n\t\t\t B.Sc.(Special) in Molecular Biology & Biochemistry\n\t\t\t\tDuration : 04 years");
    else if(zscore>=1.8148)
        printf("\n\tYou Can Complete B.Sc.in Physiotherapy [course code:54]@ Colombo [uni-code:054A] & Peradeniya university [uni-code:054B].");
     else if(zscore>=1.7944)
        printf("\n\tYou Can Enter The Faculty of Veterinary Science[course code:3]in University of Peradeniya [uni-code:003B]for  04 years");
    else if(zscore>=1.7692)
        printf("\n\tYou Can Complete B.Sc. Degree in Town & Country Planing[course code:30] in 4 Years @ Moratuwa university[uni-code:030G]");
    else if(zscore>=1.7678)
        printf("\n\tYou Can Complete B.Sc.(Hons) in Information Technology & Management[course code:91] in 4 Years @ Moratuwa university[uni-code:091G]\n\tCandidate must also fulfil the following requirements @ the G.C.E(O/L) Examination\n\t\t(1).Have at least a credit Pass(C)in English\n\t\t(2).Have at least a credit Pass(C)in Mathematics");
    else if(zscore>=1.7390)
        printf("\n\tyou Can Complete B.Sc.(Special) in Food Science & Technology[course code:35] in 4 Years\n\t\tAvailable Universities :University of Peradeniya[uni-code:035B]\n\t\t\t  University of Sri Jayewardenepura[uni-code:035C]\n\t\t\t  Sabaragamuwa University[uni-code:035E] ");
    else if(zscore>=1.7352)
        printf("\n\tYou Can Complete B.Sc.(Hons) in Information Technology[course code:26].in 4 Years @ university of Moratuwa[uni-code:026G]");
    else if(zscore>=1.7236)
        printf("\n\tYou Can Complete B.Sc.in Speech & Hearing Science(Special)in 4 Years[course code:54].\n\tThis Degree offered with specialization in Speech and Language Therapy or Audiology Witch are\n\tconducted by Faculty of Medicine of University Kelaniya");
    else if(zscore>=1.7037)
        printf("\n\tYou Can Enter The Kelaniya university for study in Peace & Conflict Resolution[course code:54].\n\tName of the Degree program is BA in Peace & Conflict Resolution\n\tDuration-3 Years\n\tCandidate must pass Common General Paper more than 30 Percentage for G.C.E (A/L)");
    else if(zscore>=1.7008)
        printf("\n\tYou Can Complete B.Sc.in Medical Laboratory Sciences[course code:54]\n\tCandidate must also fulfil at least a 'S' pass in English at the G.C.E. (Ordinary Level) Examination\n\tAvailable Universities: University of Peradeniya\n\t\t\t\tUniversity of Sri Jayewardenepura\n\t\t\t\tUniversity of Ruhuna\n\t\t\t\tUniversity of Jaffna");
    else if(zscore>=1.6014)
        printf("\n\tYou Can Enter The Kelaniya university for study in Management & Information Technology(MIT)[course code:54].in 4 Years\n\tDegree Program-:B.Sc.Honours in Management & Information Technology.\n\tCandidates should pass the Aptitude test conducted by University of Keleniya.");
    else if(zscore>=1.6011)
        printf("\n\tYou Can Complete B.Sc.in Pharmacy [course code:54]\n\tCandidate must also fulfil at least a 'S' pass in English at the G.C.E. (Ordinary Level) Examination\n\t Available Universities:University of Peradeniya\n\t\t\tUniversity of Sri Jayewardenepura\n\t\t\tUniversity of Jaffna\n\t\t\tUniversity of Ruhuna");
    else if(zscore>=1.5629)
        printf("\n\tUniversity of Peradeniya offers a 120 credit curriculum leading to a B.Sc. in Radiography[course code:54].\n\tCandidate must also fulfil at least a 'S' pass in English at the G.C.E. (Ordinary Level) Examination\n\tCandidates are required to submit the duly certi?ed copy of the original G.C.E.(Ordinary Level)certi?cate along with the application. \n\tFailure to submit it will result in rejection of the application for the course of study in Radiography.");
    else if(zscore>=1.5550)
        printf("\n\tYou Can Enter The University of Peradeniya for study in Agricultural Technology & Management[course code:54]\n\tName of the Degree program is B.Sc. in Agricultural Technology & Management\n\tDuration-4 Years");
    else if(zscore>=1.5417)
        printf("\n\tYou Can Enter The Peradeniya university for study in Statistics & Operations Research[course code:54].in 4years\n\n\tDegree Programme-:B.Sc.in Statistics & Operations Research");
    else if(zscore>=1.5122)
        printf("\n\tYou Can Enter The Wayamba University for study in Food Science & Nutrition[course code:54] in 4 Years\n\tDegree Programme- B.Sc. in Food Science & Nutrition Special degree\n\tFields of Specialization- Food Science & Technology Applied Nutrition");
    else if(zscore>=1.4931)
        printf("\n\tYou Can Enter The Southern Eastern university for study in Management & Information Technology(MIT)[course code:54].in 4 Years \n\tDegree Program-:B.Sc.Honours in Management & Information Technology");
    else if(zscore>=1.4341)
        printf("\n\tYou Can Enter The Wayamba University for study in Food Production & Technology Management[course code:54] in 4 Years\n\tDegree Programme B.Sc.(Special)in Food Production & Technology\n\tFields of Specialization : Livestock and Avian Sciences Aquaculture and Fisheries");
    else if(zscore>=1.4313)
        printf("\n\tYou Can Enter The Management Studies(TV)[course code:54].Duration- 4 Years\n\n\tTrincomalee campus of the Eastern University\n\t\t1. B.Sc.in Accounting & Financial Management\n\t\t2. B.Sc.in Marketing Management\n\t\t3. B.Sc.in Human Resources Management\n\t\t4. B.Sc.in Information Management\n\n\tVavuniya campus of Jaffna\n\t\t1. B.B.M.in Business Management\n\t\t2. B.B.M.in Accounting & Finance(special)\n\t\t3. B.B.M.in Marketing Management(special)\n\t\t4. B.B.M.in Business Economics(special)\n\t\t5. B.B.M.in Human Resources Management(special)");
    else if(zscore>=1.4280)
        printf("\n\tYou Can study in Bachelor of Business Management in Project[course code:54] in 3 Years.\n\t Availabel Universities:Vavuniya & Jaffna");
    else if(zscore>=1.4115)
        printf("\n\tYou Can Enter The University of Colombo,School of Computing(UCSC)[course code:54] for study in Information System.in 3 Years.\n\t Degree Programme-:B.Sc. in Information System\n\n\tCandidate must have fulfil the following requirements-:\n\n\t\ta)at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\tb)at least a credit Pass(C)in English @ G.C.E.(O/L)Examination\n\t\tc)Pass the aptitude test");
    else if(zscore>=1.3938)
        printf("\n\tYou Can Complete B.B.M in Entrepreneurship & Management[course code:54] in 4 Years @ university of Uva Wellassa.\n\t The candidate should have passed the aptitude test which will be conducted by the University.\n\n\tStudents will be selected for one of the following specialization area @ the beginning of the third academic year\n\t\t1) Insurance & Actuary\n\t\t2) Entrepreneurship & Management Technology\n\n\tInthe final year all students should carry out an industrial training & research project relevant to their area of interest");
    else if(zscore>=1.3736)
        printf("\n\tYou can study the Biological science[course code:54].\n\tCandidate must also fulfil at least a 'S' pass in English at the G.C.E. (Ordinary Level) Examination.available universities : university of Colombo\n\t\t\t\t university of Peradeniya\n\t\t\t\t university of Sri Jayawardanapura\n\t\t\t\t university of Kelaniya\n\t\t\t\t University of Jaffna\n\t\t\t\t University of Ruhuna\n\t\t\t\t Eastern University\n\t\t\t\t Southern Eastern University");
    else if(zscore>=1.3724)
        printf("\n\tYou can enter the university of Kelaniya for study Environmental Conservation & Management[course code:54] in 3 years.\n\t Degree programme-:B.Sc.in (General)Environmental Conservation & Management\n\t B.Sc.in (Special)Environmental Conservation & Management\n\t\tDuration: 04 years ");
    else if(zscore>=1.3715)
        printf("\n\tYou Can Enter The University of Moratuwa,You Can Complete Honours Degree in Bachelor of Design[course code:54] in 4 Years\n\n\t at least a credit Pass(C)in English,Mathematics & Science @ the G.C.E(O/L)Examination & Passed the Aptitude Test,\n\twhich will be conducted by the university of Moratuwa");
    else if(zscore>=1.3381)
        printf("\n\tDegree Programme-: B.A(Special)in Translation Studies(English/Sinhala)[course code:54]\n\t\t\t   University of Kelaniya\n\n\t\t\t   B.A(Honours)in Translation Studies(English/Sinhala)\n\t\t\t   University of Sabaragamuwa\n\n\t\t\t   B.A(Special)in Translation Studies(English/Tamil)\n\t\t\t   University of Jaffna\n\n\tDuration-: 4years\n\nCandidate should have passed the Aptitude Test based on specific Language proficiency \nwitch will be jointly conducted by the University of Kelaniya,Sabaragamuwa & Jaffna");
    else if(zscore>=1.3300)
        printf("\n\tYou Can Complete B.B.M in Hospitality,Tourism & Event Management [course code:54]in 4 Years @ university of Uva Wellassa.\n\tThe candidate should have passed the aptitude test which will be conducted by the University");
    else if(zscore>=1.3173)
        printf("\n\tYou can enter the University of Peradeniya,\n\t You can complete B.Sc.in Animal Science & Fisheries[course code:54] in 04 years.");
     else if(zscore>=1.3154)
        printf("\n\tYou can enter University of Ruhuna, You can complete B.Sc. in Green Technology [course code:54]in 04 years,\n\tcandidates must also fulfill at least (C) pass in English at the G.C.E.(O/L) Examination");
     else if(zscore>=1.2999)
        printf("\n\tYou Can Enter The University of Jaffna,You Can Complete B.A(Special)in Translation Studies(English/Tamil)[course code:54]in 4 Years");
      else if(zscore>=1.2819)
        printf("\n\tYou Can Complete B.Sc in Industrial Information Technology(BITT)[course code:54] in 4 Years @ university of Uva Wellassa.\n\tThe candidate should have passed the aptitude test which will be conducted by the University\n\n\tIn the final year all students should carry out an industrial training & research project relevant to their area of interest");
     else if(zscore>=1.2813)
        printf("\n\tYou Can Enter The University of Kelaniya,You Can Complete  B.A.(Special)in Film & Television Studies[course code:54] in 4 Years\n\n\tThe candidate should have passed the aptitude test which will be conducted by the University based on specific skills in Film & Television\n\t!!The candidate who are interested in Film & Television disciplines & posses specific skills are expected to apply\n\t  the aptitude test may consist of either an interview,practical test or written test or of all three components as decided by the University.");
      else if(zscore>=1.2748)
        printf("\n\tYou can enter the University of Ruhuna for studying Fisheries and Marine Science[course code:54]\n\tDegree programme-:B.Sc. in Fisheries and Marine Science\n\t Duration-:04 years");
    else if(zscore>=1.2247)
        printf("\n\tyou Can study Ayurvedic Medicine and Surgery [course code:54]in 6 Years/n/tDegree programme:Bachelor of Ayurvedic Medicine and Surgery(B.A.M.S)\n\tAvailable Universities:Institute of Indigenous Medicine\n\t\t\t university of Colombo\n\t\t\t\t University of Kelaniya\n\t\t\t\t Gampaha Wickramarachchi Ayurveda Institute" );
    else if(zscore>=1.2133)
        printf("\n\tDetails of the degree programs under Applied Science(Biological Science)[course code:54]\n\n\tRajarata University-B.Sc.(Genaral)Degree in applied Science\n\t\tDuration:3 Year\n\t\tB.Sc.Degree in applied Science\n\t\tDuration:4 Year\n\t\tB.Sc.(Joint Major)Degree in applied Science\n\t\tDuration:4 Year\n\n\tSabaragamuwa University-B.Sc.(Applied Science)General Degree in Environmental Science Natural Resources Management\n\t\tB.Sc.(Applied Science)Special Degree in Environmental Science Natural Resources Management");
    else if(zscore>=1.1996)
        printf("\n\tYou can enter University of Ruhuna for study in Agribusiness Management [course code:54]in 4 Years\n\tYou can complete Degree programme B.Sc. in Agribusiness Management");
    else if(zscore>=1.1751)
        printf("\n\tYou can enter the Rajarata University of Sri Lanka, You can study B.Sc.(General) degree in health promotion [course code:54]in 3 years.or\n\t B.Sc. (special) degree in health promotion");
    else if(zscore>=1.1600)
        printf("\n\tYou can enter the University of Ruhuna\n\tYou can study B.Sc. in Agriculture Resource Management and Technology[course code:54]\n\t\tDuration -: 4years");
    else if(zscore>=1.1540)
        printf("\n\tYou Can Enter The University of Moratuwa You Can Complete Degree in Bachelor of Architecture[course code:54] in 5 Years\n\n\tCandidate should have obtained;\n\t\t(a) at least a Ordinary Pass(S) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination\n\t\t(d)candidate should have passed the aptitude test which will be conducted by the University");
    else if(zscore>=1.1505)
        printf("\n\tYou can study Unani Medicine and Surgery [course code:54]in 6 yaers\n\t Degree programme-:Bachelor of Unani Medicine and Surgery(B.U.M.S.)\n\t Available Universities-:Institute of Indigenous Medicine \n\t\t University of Colombo");
    else if(zscore>=1.1433)
        printf("\n\tYou Can Complete B.Sc in Computer Science & Technology[course code:54] in 4 Years @ university of Uva Wellassa \n\n\tThe candidate should have passed the aptitude test which will be conducted by the University\n\tIn the final Year all students should carry out an industrial trainning & research relevent to their area of intrest");
    else if(zscore>=1.0900)
        printf("\n\tYou can complete degree in B.Sc.in Nursing[course code:54] \n\t\t Candidate ");
    else if(zscore>=1.0064)
        printf("\n\tYou can complete B.Sc. in Agriculture[course code:54] in 4 Years/n/tAvailable Universities:Wayamba\n\t\t\t\t Ragarata\n\t\t\t\t Jaffna\n\t\t\t\t Eastern university");
    else if(zscore>=0.9186)
        printf("\n\tYou Can Complete Bachelor of Technology(BTech)degree in Science & Technology[course code:54] in 4 Years @ university of Uva Wellassa\n\n\tStudent will be selected for one of the following specialization areas @ the beginning of the third academic year.\n\n\t\t1) Food Engineering & Business Technology\n\t\t2) Mathematical Science & Technology\n\t\t3) Mechatronics\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
    else if(zscore>=0.9094)
        printf("\n\tYou can enter University of Uva Wellassa for study in Export Agriculture [course code:54]in 4 Years\n\tYou can complete B.Sc. in Export Agriculture\n\n\tStudent Will be selected for one of the following specialization area at the beginning of the third academic year\n\t\t 1) Crop products technology\n\t\t 2) Entrepreneurial Agriculture\n\n\tThe final all student should carry out an industrial training and research relevant  to their area of interest");
    else if(zscore>=0.8305)
        printf("\n\tYou Can Complete B.Sc. in Mineral Resources & Technology(Special)[course code:54] in 4 Years @ university of Uva Wellassa\n\n\tStudent will be selected for one of the following specialization areas @ the beginning of the third academic year.\n\n\t\t*) Mineral Processing Technology\n\n\t\t**) Water Science Technology\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
    else if(zscore>=0.8273)
        printf("\n\tYou Can Enter The University of Uva Wellassa,You Can Complete B.Sc.in Tea Technology & Value Addition[course code:54] in 4 Years\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.7492)
        printf("\n\tYou Can Complete B.Sc. in Palm & Latex Technology & Value Addition[course code:54] in 4 Years @ university of Uva Wellassa");
     else if(zscore>=0.7178)
        printf("\n\tYou Can Enter The University of Uva Wellassa\n\tYou can complete degree Bachelor in Animal Science(B.A.Sc) [course code:54]in 4Years\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.7178)
        printf("\n\tYou Can Enter The University of Uva Wellassa\n\tYou can complete degree B.Sc. in Aquatic Resources & Technology [course code:54]in 4Years\n\n\tIn the final Year all students should carry out an industrial training & research relevant to their area of interest");
     else if(zscore>=0.5216)
        printf("\n\tYou are Selected Physical Science-Information & Communication Technology(ICT)[course code:54]\n\n\tDegree Programmes: B.Sc.in Physics & Electronics\n\t\t\t   University of Kelaniya\n\n\t\t\t   B.Sc.in Physics & ICT\n\t\t\t   University of Jayewardenapura\n\n\t\tDuration-3 Years\n\n\tThe respective Faculties of the university to which the student has been admitted will do the selection\n\tfor a particular degree programme within a university.");
     else if(zscore>=0.4520)
        printf("\n\tYou are Selected in Siddha Medicine & Surgery[course code:54]\n\tYou can complete degree Bachelor of Siddha Medicine & Surgery(B.S.M.S) in 6 Years\n\t\tAvailable University:University of Jaffna\n\t\t\tTrincomalee campus of the Earstern University");
     else if(zscore>=0.3045)
        printf("\n\tYou Can Enter The University of Sabaragamuwa,You Can Complete B.Sc.in Physical Education(Special)[course code:54] in 4 Years\n\n\tcandidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=0.0934)
        printf("\n\tDegree Programme : B.Sc.in Sports Science & Management(Special)[course code:54]\n\n\tAvailable Universities : Sabaragamuwa University\n\t\tUniversity of Sri Jayewardenepura\n\n\tDuration-4 Years\n\n\tcandidate should have passed the aptitude test which will be conducted by the University of Sabaragamuwa & Sri Jayewardenapura\n\t At the aptitude test 30 present marks will be given to performance in the subject @ the school,Provincial & National\n\tlevel achievements in sport related events.Another 30 present will be given for the practical test & balance\n\t40 present will be given to the theory paper");
     else if(zscore>=0.0134)
        printf("\n\tYou Can Complete Bachelor of Landscape Architecture [course code:54]in 4 Years @ university of Moratuwa\n\n\tCandidate must fulfil the following requirements:\n\t\t(a) at least a Odinary Pass(S) in English @ G.C.E.(O/L)Examination\n\t\t(b) at least a credit Pass(C)in Mathematics @ G.C.E.(O/L)Examination\n\t\t(c) at least a Ordinary Pass(S)in Science @ G.C.E.(O/L)Examination\n\t\t(d)candidate should have passed the aptitude test which will be conducted by the University");
     else if(zscore>=0.0000){
        printf("\n\t\tSORRY!!!! You can't enter to University");
        mainMenu();}

         printf(" \n\n\t-- University registration for biology students -- ");
      printf("\n\n  1)Press 1 to main menu ");
    printf("\n\n  2)Press 2 to registration");
    printf("\n\n Enter Your Selection : ");
    scanf("%d",&select);
    switch(select){
    case 1:
       system("cls");
        mainMenu();
        break;
    case 2:
        system("cls");
        registaionbio();
        break;
    default :
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Selection");
        system("cls");
        mainMenu();
    }
    }
void registaionbio(){
     int Mobile,Fixed,Course,x,y;
     char Full[300];
     char Initials[200];
     char National[50];
    int Year,c=0;
    float ZScore;
    char StudyUniversity[50];
    char EmailAddress[20];
    printf("\n\nPlease Enter Your Course code:");
    scanf("%d",&Course);
    if(Course==1){
    for(x=1;x<1311;x++){
        c=c+1;
    FILE *fptr;
     fptr=fopen("application1.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
     printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
     printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
     printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
    }
    }
    else if(Course==2){
        for(x=1;x<81;x++){
            c=c+1;
         FILE *fptr;
     fptr=fopen("application2.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
    }
    }
        else if(Course==3){
            for(x=1;x<81;x++){
                c=c+1;
          FILE *fptr;
     fptr=fopen("application3.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==4){//Agriculture
                for(x=1;x<596;x++){
                  c=c+1;
          FILE *fptr;
     fptr=fopen("application4.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==5){//Food science & Nutrition
                for(x=1;x<111;x++){
                    c=c+1;
          FILE *fptr;
     fptr=fopen("application5.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==6){//Biological Science
                for(x=1;x<1266;x++){
                    c=c+1;
          FILE *fptr;
     fptr=fopen("application6.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
   scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
    scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year );
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==7){//Applied Science(bio)
                for(x=1;x<296;x++){
                        c=c+1;
          FILE *fptr;
     fptr=fopen("application7.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else if(Course==32){//Auruvedic Medicine & Surgery
                for(x=1;x<301;x++){
                        c=c+1;
          FILE *fptr;
     fptr=fopen("application32.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==33){//Unani medicine & Surgery
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application33.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==35){//food science & technology
                for(x=1;x<86;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application35.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==36){//Sidhdha Medicine & Surgery
                for(x=1;x<141;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application36.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==37){//Nursing
                for(x=1;x<346;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application37.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==39){//Agriculture Technology Management
                for(x=1;x<201;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application39.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==50){//Health promotion
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application50.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==51){//Pharmacy
                for(x=1;x<146;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application51.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==52){//Medical Laboratory Science
                for(x=1;x<141;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application52.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==53){//Radiography
                for(x=1;x<46;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application53.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==55){//Environmental conservation and management
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application55.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==58){//Molecular biology & biochemistry
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application58.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==62){//Fisheries & Marine science
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application62.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else if(Course==67){//Animal Science
            for(x=1;x<61;x++){
                     c=c+1;
          FILE *fptr;
     fptr=fopen("application67.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==86){//Animal science fisheries
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application86.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==87){//Food production & Technology management
                for(x=1;x<86;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application87.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==88){//Aquatic Resource Technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application88.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }

         else if(Course==93){//Agriculture resource management & technology
                for(x=1;x<151;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application93.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==94){//Agribusiness management
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application94.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==95){//Green technology
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application95.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else {
        regimathsbio();
        }
    }
void registaionmaths(){
     int Mobile,Fixed,Course,x,c=0;
     char Full[300];
     char Initials[200];
     char National[50];
    int Year,y;
    float ZScore;
    char StudyUniversity[50];
    char EmailAddress[20];
     printf("\n\nPlease Enter Your Course code:");
    scanf("%d",&Course);
    if(Course==8){//Engineering
            for(x=1;x<1709;x++){
                     c=c+1;
     FILE *fptr;
     fptr=fopen("application8.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",&StudyUniversity[50] );
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
    }
    }
     else if(Course==9){//Engineering(EM)
            for(x=1;x<51;x++){
                     c=c+1;
          FILE *fptr;
     fptr=fopen("application9.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
     }
         else if(Course==10){//Engineering(TM)
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application10.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
          else if(Course==11){//Quantity surveying
                for(x=1;x<126;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application11.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==12){//Computer science
                for(x=1;x<431;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application12.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==13){//Physical science
                for(x=1;x<1901;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application13.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==14){//surveying science
                for(x=1;x<81;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application14.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==15){//Applied science
                for(x=1;x<556;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application15.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==57){//Transport & logistic Management
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application57.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==80){//Computing & Information system
                for(x=1;x<101;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application80.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==99){//Software engineering
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application99.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else if(Course!=-999){
             regimathsbio();
        }
}
void regimathsbio(){
     int Mobile,Fixed,Course,x;
     char Full[300];
     char Initials[200];
     char National[50];
    int Year,y,c=0;
    float ZScore;
    char StudyUniversity[50];
    char EmailAddress[20];
    printf("\nPlease Re enter Course Code:");
    scanf("%d",&Course);
        if(Course==22){//management Studies(TV)
                for(x=1;x<201;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application22.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==23){//Architecture
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application23.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==24){//Design
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application24.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==25){//Law
                for(x=1;x<351;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application25.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==26){//Information technology
                for(x=1;x<201;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application26.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
          else if(Course==27){//management & Information Technology
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application27.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==30){//Town & country planing
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application30.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else if(Course==31){//Peace & conflict Resolution
                for(x=1;x<36;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application31.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==34){//Fashion design & product Development
                for(x=1;x<50;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application34.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
          else if(Course==38){//Information & communication Technology
                for(x=1;x<151;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application38.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
          }
         else if(Course==54){//Physiotherapy
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application54.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==64){//Science & technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application64.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
        else if(Course==65){//Computer science & technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application65.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==66){//Entrepreneurship & management
                for(x=1;x<66;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application66.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==73){//Industrial information technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application73.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==74){//Tea technology & value addition
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application74.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==75){//Industrial Information technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application75.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==76){//Mineral resource & technology
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application76.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==79){//Management & Information technology
                for(x=1;x<121;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application79.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==81){//Physical Education
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application81.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==82){//Sport science & management
                for(x=1;x<91;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application82.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==83){//Speech & hearing science
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application83.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
          else if(Course==89){//Palm & latex technology & value addition
                for(x=1;x<61;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application89.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
        else if(Course==90){//Hospitality tourism & event management
                for(x=1;x<66;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application90.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==91){//Information technology &management
                for(x=1;x<101;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application91.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
  else if(Course==92){//Tourism & hospitality Management
        for(x=1;x<121;x++){
                 c=c+1;
          FILE *fptr;
     fptr=fopen("application92.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
  }
        else if(Course==96){//Information system
                for(x=1;x<101;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application96.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
        }
         else if(Course==97){//Landscape architecture
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application97.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==98){//Translation studies
                for(x=1;x<76;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application98.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==100){//Film & television studies
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application100.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }
        }
         }
         else if(Course==101){//Project management
                for(x=1;x<51;x++){
                         c=c+1;
          FILE *fptr;
     fptr=fopen("application101.txt","a");
      printf("\nyour index number is:%d",c);
     fprintf(fptr,"\n Index number:%d",c);
      printf("\nDon't Use space bar You can use that(_) sign for space bar");
     printf("\n\nFull Name of the Applicant:");
     scanf("%s",Full);
     fprintf(fptr,"\nFull Name of the Applicant:%s",Full);
     printf("\nName with Initials:");
     scanf("%s",Initials);
     fprintf(fptr,"\nName with Initials:%s",Initials);
     printf("\nNational Identity Card:");
     scanf("%s",National);
     fprintf(fptr,"\nNational Identity Card:%s",National);
     printf("\nYear of G.C.E. (A/L) Examination:");
     scanf("%d",&Year);
      fprintf(fptr,"\nYear of G.C.E. (A/L) Examination:%d",Year);
      printf("\nZ-Score:");
     scanf("%f",&ZScore );
     fprintf(fptr,"\nZ-Score:%f",ZScore);
     printf("\nSelected University:");
     scanf("%s",StudyUniversity);
     fprintf(fptr,"\nSelected University:%s",StudyUniversity);
      printf("\nEnter Mobile no:");
     scanf("%d",&Mobile );
     fprintf(fptr,"\nEnter Mobile no:%d",Mobile);
      printf("\nEnter Fixed no: ");
     scanf("%d",& Fixed);
     fprintf(fptr,"\nEnter Fixed no:%d",Fixed);
      printf("\nEnter Your Email Address:");
     scanf("%s",EmailAddress);
      fprintf(fptr,"\nEnter Your Email Address:%s",EmailAddress);
      fprintf(fptr,"\n----------------------------------------------------------------");
     fclose(fptr);
      printf("\nPress 1 for Return to Main menu or Press any other key to exit Programme:");
     scanf("%d",&y);
     if(y==1){
         mainMenu();
     }
     else{
         printf("\n Now you are Exit!!!");
        break;
     }

   }
         }
 }
void admin(){
   char userid[]="sajith123",password[]="123abc",p[50],u[50];
   int n=1,a,b;
   int Course,y;
   printf("\nEnter USER ID and PASSWORD below (You have only three chances to enter)");
   while(n<=3)
   {
      printf("\nUSER ID: ");
      scanf("%s",u);
      printf("\nPASSWORD: ");
      scanf("%s",p);
      a=strcmp(u,userid);
      b=strcmp(p,password);
      if(a==0&&b==0)
      {
         printf("\nYou have logged in successfully.");
         printf("\nPlease Enter course code:");
         scanf("%d",&Course);
         if(Course==1){
           FILE *fptr;
     fptr=fopen("application1.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
         }
      else if(Course==2){
          FILE *fptr;
     fptr=fopen("application2.txt","r");
      char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
      }
       else if(Course==3){
          FILE *fptr;
     fptr=fopen("application3.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
       }
       else if(Course==3){
          FILE *fptr;
     fptr=fopen("application3.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
       }
        else if(Course==4){
          FILE *fptr;
     fptr=fopen("application4.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
        }
    else if(Course==5){
          FILE *fptr;
     fptr=fopen("application5.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
    else if(Course==6){
          FILE *fptr;
     fptr=fopen("application6.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==7){
          FILE *fptr;
     fptr=fopen("application7.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==8){
          FILE *fptr;
     fptr=fopen("application8.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==9){
          FILE *fptr;
     fptr=fopen("application9.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==10){
          FILE *fptr;
     fptr=fopen("application10.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==11){
          FILE *fptr;
     fptr=fopen("application11.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==12){
          FILE *fptr;
     fptr=fopen("application12.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==13){
          FILE *fptr;
     fptr=fopen("application13.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==14){
          FILE *fptr;
     fptr=fopen("application14.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==15){
          FILE *fptr;
     fptr=fopen("application15.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==23){
          FILE *fptr;
     fptr=fopen("application23.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==24){
          FILE *fptr;
     fptr=fopen("application24.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
      printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==25){
          FILE *fptr;
     fptr=fopen("application25.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==26){
          FILE *fptr;
     fptr=fopen("application26.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==27){
          FILE *fptr;
     fptr=fopen("application27.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==30){
          FILE *fptr;
     fptr=fopen("application30.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==31){
          FILE *fptr;
     fptr=fopen("application31.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==32){
          FILE *fptr;
     fptr=fopen("application32.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==33){
          FILE *fptr;
     fptr=fopen("application33.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==34){
          FILE *fptr;
     fptr=fopen("application34.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==35){
          FILE *fptr;
     fptr=fopen("application35.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==36){
          FILE *fptr;
     fptr=fopen("application36.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==37){
          FILE *fptr;
     fptr=fopen("application37.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==38){
          FILE *fptr;
     fptr=fopen("application38.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==39){
          FILE *fptr;
     fptr=fopen("application39.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==50){
          FILE *fptr;
     fptr=fopen("application50.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==51){
          FILE *fptr;
     fptr=fopen("application51.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==52){
          FILE *fptr;
     fptr=fopen("application52.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==53){
          FILE *fptr;
     fptr=fopen("application53.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==54){
          FILE *fptr;
     fptr=fopen("application54.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==55){
          FILE *fptr;
     fptr=fopen("application55.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==57){
          FILE *fptr;
     fptr=fopen("application57.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==58){
          FILE *fptr;
     fptr=fopen("application58.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==62){
          FILE *fptr;
     fptr=fopen("application62.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==64){
          FILE *fptr;
     fptr=fopen("application64.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==65){
          FILE *fptr;
     fptr=fopen("application65.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==66){
          FILE *fptr;
     fptr=fopen("application66.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==67){
          FILE *fptr;
     fptr=fopen("application67.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==73){
          FILE *fptr;
     fptr=fopen("application73.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==74){
          FILE *fptr;
     fptr=fopen("application74.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==75){
          FILE *fptr;
     fptr=fopen("application75.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==76){
          FILE *fptr;
     fptr=fopen("application76.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==79){
          FILE *fptr;
     fptr=fopen("application79.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==80){
          FILE *fptr;
     fptr=fopen("application80.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==81){
          FILE *fptr;
     fptr=fopen("application81.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==82){
          FILE *fptr;
     fptr=fopen("application82.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==83){
          FILE *fptr;
     fptr=fopen("application83.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==86){
          FILE *fptr;
     fptr=fopen("application86.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==87){
          FILE *fptr;
     fptr=fopen("application87.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==88){
          FILE *fptr;
     fptr=fopen("application88.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==89){
          FILE *fptr;
     fptr=fopen("application89.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==90){
          FILE *fptr;
     fptr=fopen("application90.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==91){
          FILE *fptr;
     fptr=fopen("application91.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==92){
          FILE *fptr;
     fptr=fopen("application92.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==93){
          FILE *fptr;
     fptr=fopen("application93.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==94){
          FILE *fptr;
     fptr=fopen("application94.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==95){
          FILE *fptr;
     fptr=fopen("application95.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==96){
          FILE *fptr;
     fptr=fopen("application96.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==97){
          FILE *fptr;
     fptr=fopen("application97.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==98){
          FILE *fptr;
     fptr=fopen("application98.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==99){
          FILE *fptr;
     fptr=fopen("application99.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==100){
          FILE *fptr;
     fptr=fopen("application100.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
     else if(Course==101){
          FILE *fptr;
     fptr=fopen("application101.txt","r");
     char line[200000];
     while(!feof(fptr)){
            fgets(line,200000,fptr);
     puts(line);
     }
     fclose(fptr);
     printf("\nPress 1 for Continue or Press any other key Return main menu:");
     scanf("%d",&y);
     if(y==1){
           printf("\nNow You'r Logout ");
        continue;
     }
     else{
         printf("\n Now you are Exit!!!");
         mainMenu();
     }
     }
      }
      else
      {
         printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
      }
      n++;
   }
   if(n==4)
      printf("\nYou can't log in.");
       mainMenu();
}
