void P_19()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_19__42 = new TH1F("P_19__42","Plane 19",110,0,3300);
   P_19__42->SetBinContent(60,1);
   P_19__42->SetBinContent(61,1);
   P_19__42->SetBinContent(62,1);
   P_19__42->SetBinContent(63,381);
   P_19__42->SetBinContent(64,50);
   P_19__42->SetEntries(434);
   P_19__42->SetLineWidth(3);
   P_19__42->GetXaxis()->SetTitle("Momentum [MeV]");
   P_19__42->GetXaxis()->CenterTitle(true);
   P_19__42->GetXaxis()->SetLabelFont(42);
   P_19__42->GetXaxis()->SetTitleSize(0.04);
   P_19__42->GetXaxis()->SetTitleOffset(1.1);
   P_19__42->GetXaxis()->SetTitleFont(42);
   P_19__42->GetYaxis()->SetTitle("Ghost tracks");
   P_19__42->GetYaxis()->CenterTitle(true);
   P_19__42->GetYaxis()->SetNdivisions(4000510);
   P_19__42->GetYaxis()->SetLabelFont(42);
   P_19__42->GetYaxis()->SetTitleSize(0.04);
   P_19__42->GetYaxis()->SetTitleOffset(1.1);
   P_19__42->GetYaxis()->SetTitleFont(42);
   P_19__42->GetZaxis()->SetLabelFont(42);
   P_19__42->GetZaxis()->SetTitleOffset(1);
   P_19__42->GetZaxis()->SetTitleFont(42);
   P_19__42->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
