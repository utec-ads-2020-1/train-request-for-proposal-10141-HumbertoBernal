#include <iostream>

using namespace std;

    int main ()
    {
        int generalRequirementNumber, proposalNumber, metRequirementsNumber,numberOfRequirementsMet=0,numberRFP=0;
        string generalRequirements[1000], proposalName, proposalNameSelected, requirement;
        float price, priceSelected, compliance, complianceSelected;

        while (cin >> generalRequirementNumber >> proposalNumber){
            ++numberRFP;

            if(proposalNumber == 0 and generalRequirementNumber == 0){ break;}

            for (int j = 0; j <= generalRequirementNumber ; ++j) {
                getline(cin, requirement);
                generalRequirements[j] = requirement;

            }

            for (int k = 0; k < proposalNumber ; ++k) {
                getline(cin, proposalName);

                cin >> price >> metRequirementsNumber;

                compliance = ((float)metRequirementsNumber/(float)generalRequirementNumber);

                if(k==0){
                    proposalNameSelected = proposalName;
                    priceSelected = price;
                    complianceSelected = compliance;
                }

                if(compliance > complianceSelected){
                    proposalNameSelected = proposalName;
                    priceSelected = price;
                    complianceSelected = compliance;
                }else if (compliance == complianceSelected){
                    if (price < priceSelected){
                        proposalNameSelected = proposalName;
                        priceSelected = price;
                        complianceSelected = compliance;
                    }
                }

            }

            cout <<"RFP #" << numberRFP << endl;
            cout <<proposalNameSelected << "\n" << endl;
        }
        
        return 0;
    }

