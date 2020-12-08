void P()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 09:44:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P__10 = new TH1F("P__10","0ppm_20turns",110,0,3300);
   P__10->SetBinContent(103,240);
   P__10->SetBinContent(104,2304);
   P__10->SetEntries(2544);
   P__10->SetLineWidth(3);
   P__10->GetXaxis()->SetTitle("Momentum [MeV]");
   P__10->GetXaxis()->CenterTitle(true);
   P__10->GetXaxis()->SetLabelFont(42);
   P__10->GetXaxis()->SetTitleSize(0.04);
   P__10->GetXaxis()->SetTitleOffset(1.1);
   P__10->GetXaxis()->SetTitleFont(42);
   P__10->GetYaxis()->SetTitle("Ghost tracks");
   P__10->GetYaxis()->CenterTitle(true);
   P__10->GetYaxis()->SetNdivisions(4000510);
   P__10->GetYaxis()->SetLabelFont(42);
   P__10->GetYaxis()->SetTitleSize(0.04);
   P__10->GetYaxis()->SetTitleOffset(1.1);
   P__10->GetYaxis()->SetTitleFont(42);
   P__10->GetZaxis()->SetLabelFont(42);
   P__10->GetZaxis()->SetTitleOffset(1);
   P__10->GetZaxis()->SetTitleFont(42);
   P__10->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
