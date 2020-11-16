void P_4()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_4__12 = new TH1F("P_4__12","Plane 4",110,0,3300);
   P_4__12->SetBinContent(50,2);
   P_4__12->SetBinContent(51,2);
   P_4__12->SetBinContent(52,445);
   P_4__12->SetBinContent(53,56);
   P_4__12->SetEntries(505);
   P_4__12->SetLineWidth(3);
   P_4__12->GetXaxis()->SetTitle("Momentum [MeV]");
   P_4__12->GetXaxis()->CenterTitle(true);
   P_4__12->GetXaxis()->SetLabelFont(42);
   P_4__12->GetXaxis()->SetTitleSize(0.04);
   P_4__12->GetXaxis()->SetTitleOffset(1.1);
   P_4__12->GetXaxis()->SetTitleFont(42);
   P_4__12->GetYaxis()->SetTitle("Ghost tracks");
   P_4__12->GetYaxis()->CenterTitle(true);
   P_4__12->GetYaxis()->SetNdivisions(4000510);
   P_4__12->GetYaxis()->SetLabelFont(42);
   P_4__12->GetYaxis()->SetTitleSize(0.04);
   P_4__12->GetYaxis()->SetTitleOffset(1.1);
   P_4__12->GetYaxis()->SetTitleFont(42);
   P_4__12->GetZaxis()->SetLabelFont(42);
   P_4__12->GetZaxis()->SetTitleOffset(1);
   P_4__12->GetZaxis()->SetTitleFont(42);
   P_4__12->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
