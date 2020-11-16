void P_20()
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
   
   TH1F *P_20__44 = new TH1F("P_20__44","Plane 20",110,0,3300);
   P_20__44->SetBinContent(48,1);
   P_20__44->SetBinContent(50,1);
   P_20__44->SetBinContent(51,1);
   P_20__44->SetBinContent(52,429);
   P_20__44->SetBinContent(53,1);
   P_20__44->SetEntries(433);
   P_20__44->SetLineWidth(3);
   P_20__44->GetXaxis()->SetTitle("Momentum [MeV]");
   P_20__44->GetXaxis()->CenterTitle(true);
   P_20__44->GetXaxis()->SetLabelFont(42);
   P_20__44->GetXaxis()->SetTitleSize(0.04);
   P_20__44->GetXaxis()->SetTitleOffset(1.1);
   P_20__44->GetXaxis()->SetTitleFont(42);
   P_20__44->GetYaxis()->SetTitle("Ghost tracks");
   P_20__44->GetYaxis()->CenterTitle(true);
   P_20__44->GetYaxis()->SetNdivisions(4000510);
   P_20__44->GetYaxis()->SetLabelFont(42);
   P_20__44->GetYaxis()->SetTitleSize(0.04);
   P_20__44->GetYaxis()->SetTitleOffset(1.1);
   P_20__44->GetYaxis()->SetTitleFont(42);
   P_20__44->GetZaxis()->SetLabelFont(42);
   P_20__44->GetZaxis()->SetTitleOffset(1);
   P_20__44->GetZaxis()->SetTitleFont(42);
   P_20__44->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
