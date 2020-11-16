void P_18()
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
   
   TH1F *P_18__40 = new TH1F("P_18__40","Plane 18",110,0,3300);
   P_18__40->SetBinContent(71,2);
   P_18__40->SetBinContent(72,1);
   P_18__40->SetBinContent(73,237);
   P_18__40->SetBinContent(74,195);
   P_18__40->SetEntries(435);
   P_18__40->SetLineWidth(3);
   P_18__40->GetXaxis()->SetTitle("Momentum [MeV]");
   P_18__40->GetXaxis()->CenterTitle(true);
   P_18__40->GetXaxis()->SetLabelFont(42);
   P_18__40->GetXaxis()->SetTitleSize(0.04);
   P_18__40->GetXaxis()->SetTitleOffset(1.1);
   P_18__40->GetXaxis()->SetTitleFont(42);
   P_18__40->GetYaxis()->SetTitle("Ghost tracks");
   P_18__40->GetYaxis()->CenterTitle(true);
   P_18__40->GetYaxis()->SetNdivisions(4000510);
   P_18__40->GetYaxis()->SetLabelFont(42);
   P_18__40->GetYaxis()->SetTitleSize(0.04);
   P_18__40->GetYaxis()->SetTitleOffset(1.1);
   P_18__40->GetYaxis()->SetTitleFont(42);
   P_18__40->GetZaxis()->SetLabelFont(42);
   P_18__40->GetZaxis()->SetTitleOffset(1);
   P_18__40->GetZaxis()->SetTitleFont(42);
   P_18__40->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
