void P()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P__18 = new TH1F("P__18","-705",110,0,3300);
   P__18->SetLineWidth(3);
   P__18->GetXaxis()->SetTitle("Momentum [MeV]");
   P__18->GetXaxis()->CenterTitle(true);
   P__18->GetXaxis()->SetLabelFont(42);
   P__18->GetXaxis()->SetTitleSize(0.04);
   P__18->GetXaxis()->SetTitleOffset(1.1);
   P__18->GetXaxis()->SetTitleFont(42);
   P__18->GetYaxis()->SetTitle("Ghost tracks");
   P__18->GetYaxis()->CenterTitle(true);
   P__18->GetYaxis()->SetNdivisions(4000510);
   P__18->GetYaxis()->SetLabelFont(42);
   P__18->GetYaxis()->SetTitleSize(0.04);
   P__18->GetYaxis()->SetTitleOffset(1.1);
   P__18->GetYaxis()->SetTitleFont(42);
   P__18->GetZaxis()->SetLabelFont(42);
   P__18->GetZaxis()->SetTitleOffset(1);
   P__18->GetZaxis()->SetTitleFont(42);
   P__18->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
