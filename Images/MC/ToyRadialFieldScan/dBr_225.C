void dBr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 225",300,0,3);
   __17->SetBinContent(0,489);
   __17->SetBinContent(52,5);
   __17->SetBinContent(53,11);
   __17->SetBinContent(54,37);
   __17->SetBinContent(55,119);
   __17->SetBinContent(56,145);
   __17->SetBinContent(57,119);
   __17->SetBinContent(58,58);
   __17->SetBinContent(59,11);
   __17->SetBinContent(60,5);
   __17->SetBinContent(61,1);
   __17->SetEntries(1000);
   __17->SetLineWidth(3);
   __17->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Experiments");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
