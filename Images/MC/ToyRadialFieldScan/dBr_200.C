void dBr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__15 = new TH1D("__15","Number of sub-runs: 200",300,0,3);
   __15->SetBinContent(55,2);
   __15->SetBinContent(56,10);
   __15->SetBinContent(57,69);
   __15->SetBinContent(58,178);
   __15->SetBinContent(59,235);
   __15->SetBinContent(60,237);
   __15->SetBinContent(61,167);
   __15->SetBinContent(62,81);
   __15->SetBinContent(63,12);
   __15->SetBinContent(64,6);
   __15->SetBinContent(65,2);
   __15->SetBinContent(66,1);
   __15->SetEntries(1000);
   __15->SetLineWidth(3);
   __15->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __15->GetXaxis()->CenterTitle(true);
   __15->GetXaxis()->SetLabelFont(42);
   __15->GetXaxis()->SetTitleSize(0.04);
   __15->GetXaxis()->SetTitleOffset(1.1);
   __15->GetXaxis()->SetTitleFont(42);
   __15->GetYaxis()->SetTitle("Experiments");
   __15->GetYaxis()->CenterTitle(true);
   __15->GetYaxis()->SetNdivisions(4000510);
   __15->GetYaxis()->SetLabelFont(42);
   __15->GetYaxis()->SetTitleSize(0.04);
   __15->GetYaxis()->SetTitleOffset(1.1);
   __15->GetYaxis()->SetTitleFont(42);
   __15->GetZaxis()->SetLabelFont(42);
   __15->GetZaxis()->SetTitleOffset(1);
   __15->GetZaxis()->SetTitleFont(42);
   __15->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
