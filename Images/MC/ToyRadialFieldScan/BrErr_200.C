void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,10);
   __23->SetBinContent(54,7);
   __23->SetBinContent(55,62);
   __23->SetBinContent(56,216);
   __23->SetBinContent(57,355);
   __23->SetBinContent(58,261);
   __23->SetBinContent(59,88);
   __23->SetBinContent(60,10);
   __23->SetBinContent(61,1);
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
