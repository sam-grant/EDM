{

    TFile *f = TFile::Open("../Plots/Data/dMu/Run-1/Fits/edmResults_blinded_750-2750MeV_Run-1d_125MeV_BQ.root");

    TTree *t = (TTree*)f->Get("EDM/EDMTree");

    double result; double error;

    t->SetBranchAddress("dMu", &result);
    t->SetBranchAddress("dMu_err", &error);

    t->Scan();

    t->GetEntry(0);
    cout<<result<<endl;
    t->GetEntry(1);
    cout<<result<<endl;
    t->GetEntry(2);
    cout<<result<<endl;

    for(int i = 0; i<t->GetEntries(); i++) { 

        t->GetEntry(i);
        cout<<result<<endl;

    }
}