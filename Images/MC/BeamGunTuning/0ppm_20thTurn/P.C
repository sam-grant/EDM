void P()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 23 13:10:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P__2 = new TH1F("P__2","0ppm_20thTurn",110,0,3300);
   P__2->SetBinContent(103,240);
   P__2->SetBinContent(104,2304);
   P__2->SetEntries(2544);
   P__2->SetLineWidth(3);
   P__2->GetXaxis()->SetTitle("Momentum [MeV]");
   P__2->GetXaxis()->CenterTitle(true);
   P__2->GetXaxis()->SetLabelFont(42);
   P__2->GetXaxis()->SetTitleSize(0.04);
   P__2->GetXaxis()->SetTitleOffset(1.1);
   P__2->GetXaxis()->SetTitleFont(42);
   P__2->GetYaxis()->SetTitle("Ghost tracks");
   P__2->GetYaxis()->CenterTitle(true);
   P__2->GetYaxis()->SetNdivisions(4000510);
   P__2->GetYaxis()->SetLabelFont(42);
   P__2->GetYaxis()->SetTitleSize(0.04);
   P__2->GetYaxis()->SetTitleOffset(1.1);
   P__2->GetYaxis()->SetTitleFont(42);
   P__2->GetZaxis()->SetLabelFont(42);
   P__2->GetZaxis()->SetTitleOffset(1);
   P__2->GetZaxis()->SetTitleFont(42);
   P__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
