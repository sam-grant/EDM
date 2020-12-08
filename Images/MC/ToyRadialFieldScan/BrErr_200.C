void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,10);
   __23->SetBinContent(39,9);
   __23->SetBinContent(40,123);
   __23->SetBinContent(41,401);
   __23->SetBinContent(42,357);
   __23->SetBinContent(43,104);
   __23->SetBinContent(44,5);
   __23->SetBinContent(45,1);
   __23->SetEntries(1000);
   __23->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
