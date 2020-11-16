void P_24()
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
   
   TH1F *P_24__52 = new TH1F("P_24__52","Plane 24",110,0,3300);
   P_24__52->SetBinContent(1,429);
   P_24__52->SetEntries(429);
   P_24__52->SetLineWidth(3);
   P_24__52->GetXaxis()->SetTitle("Momentum [MeV]");
   P_24__52->GetXaxis()->CenterTitle(true);
   P_24__52->GetXaxis()->SetLabelFont(42);
   P_24__52->GetXaxis()->SetTitleSize(0.04);
   P_24__52->GetXaxis()->SetTitleOffset(1.1);
   P_24__52->GetXaxis()->SetTitleFont(42);
   P_24__52->GetYaxis()->SetTitle("Ghost tracks");
   P_24__52->GetYaxis()->CenterTitle(true);
   P_24__52->GetYaxis()->SetNdivisions(4000510);
   P_24__52->GetYaxis()->SetLabelFont(42);
   P_24__52->GetYaxis()->SetTitleSize(0.04);
   P_24__52->GetYaxis()->SetTitleOffset(1.1);
   P_24__52->GetYaxis()->SetTitleFont(42);
   P_24__52->GetZaxis()->SetLabelFont(42);
   P_24__52->GetZaxis()->SetTitleOffset(1);
   P_24__52->GetZaxis()->SetTitleFont(42);
   P_24__52->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
