void P_44()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_44__92 = new TH1F("P_44__92","Plane 44",110,0,3300);
   P_44__92->SetBinContent(52,424);
   P_44__92->SetEntries(424);
   P_44__92->SetLineWidth(3);
   P_44__92->GetXaxis()->SetTitle("Momentum [MeV]");
   P_44__92->GetXaxis()->CenterTitle(true);
   P_44__92->GetXaxis()->SetLabelFont(42);
   P_44__92->GetXaxis()->SetTitleSize(0.04);
   P_44__92->GetXaxis()->SetTitleOffset(1.1);
   P_44__92->GetXaxis()->SetTitleFont(42);
   P_44__92->GetYaxis()->SetTitle("Ghost tracks");
   P_44__92->GetYaxis()->CenterTitle(true);
   P_44__92->GetYaxis()->SetNdivisions(4000510);
   P_44__92->GetYaxis()->SetLabelFont(42);
   P_44__92->GetYaxis()->SetTitleSize(0.04);
   P_44__92->GetYaxis()->SetTitleOffset(1.1);
   P_44__92->GetYaxis()->SetTitleFont(42);
   P_44__92->GetZaxis()->SetLabelFont(42);
   P_44__92->GetZaxis()->SetTitleOffset(1);
   P_44__92->GetZaxis()->SetTitleFont(42);
   P_44__92->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
