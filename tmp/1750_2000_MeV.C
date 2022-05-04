void 1750_2000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:39:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__146 = new TH1D("h1_ratio__146","",630,-1575,1575);
   h1_ratio__146->SetBinContent(310,1e+09);
   h1_ratio__146->SetBinContent(311,1e+09);
   h1_ratio__146->SetBinContent(312,1e+09);
   h1_ratio__146->SetBinContent(313,1.790698);
   h1_ratio__146->SetBinContent(314,1e+09);
   h1_ratio__146->SetBinContent(315,0.9890427);
   h1_ratio__146->SetBinError(313,0.5418852);
   h1_ratio__146->SetBinError(315,0.3745768);
   h1_ratio__146->SetEntries(20.15164);
   h1_ratio__146->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__146->GetXaxis()->CenterTitle(true);
   h1_ratio__146->GetXaxis()->SetLabelFont(42);
   h1_ratio__146->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__146->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__146->GetXaxis()->SetTitleFont(42);
   h1_ratio__146->GetYaxis()->SetTitle("Tracks");
   h1_ratio__146->GetYaxis()->CenterTitle(true);
   h1_ratio__146->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__146->GetYaxis()->SetLabelFont(42);
   h1_ratio__146->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__146->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__146->GetYaxis()->SetTitleFont(42);
   h1_ratio__146->GetZaxis()->SetLabelFont(42);
   h1_ratio__146->GetZaxis()->SetTitleOffset(1);
   h1_ratio__146->GetZaxis()->SetTitleFont(42);
   h1_ratio__146->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
