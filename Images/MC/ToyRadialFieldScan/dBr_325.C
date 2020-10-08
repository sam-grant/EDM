void dBr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__25 = new TH1D("__25","Number of sub-runs: 325",300,0,3);
   __25->SetBinContent(0,474);
   __25->SetBinContent(44,3);
   __25->SetBinContent(45,42);
   __25->SetBinContent(46,166);
   __25->SetBinContent(47,202);
   __25->SetBinContent(48,88);
   __25->SetBinContent(49,21);
   __25->SetBinContent(50,3);
   __25->SetBinContent(51,1);
   __25->SetEntries(1000);
   __25->SetLineWidth(3);
   __25->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __25->GetXaxis()->CenterTitle(true);
   __25->GetXaxis()->SetLabelFont(42);
   __25->GetXaxis()->SetTitleSize(0.04);
   __25->GetXaxis()->SetTitleOffset(1.1);
   __25->GetXaxis()->SetTitleFont(42);
   __25->GetYaxis()->SetTitle("Experiments");
   __25->GetYaxis()->CenterTitle(true);
   __25->GetYaxis()->SetNdivisions(4000510);
   __25->GetYaxis()->SetLabelFont(42);
   __25->GetYaxis()->SetTitleSize(0.04);
   __25->GetYaxis()->SetTitleOffset(1.1);
   __25->GetYaxis()->SetTitleFont(42);
   __25->GetZaxis()->SetLabelFont(42);
   __25->GetZaxis()->SetTitleOffset(1);
   __25->GetZaxis()->SetTitleFont(42);
   __25->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
