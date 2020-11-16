void P_37()
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
   
   TH1F *P_37__78 = new TH1F("P_37__78","Plane 37",110,0,3300);
   P_37__78->SetBinContent(95,1);
   P_37__78->SetBinContent(102,1);
   P_37__78->SetBinContent(103,424);
   P_37__78->SetBinContent(104,1);
   P_37__78->SetEntries(427);
   P_37__78->SetLineWidth(3);
   P_37__78->GetXaxis()->SetTitle("Momentum [MeV]");
   P_37__78->GetXaxis()->CenterTitle(true);
   P_37__78->GetXaxis()->SetLabelFont(42);
   P_37__78->GetXaxis()->SetTitleSize(0.04);
   P_37__78->GetXaxis()->SetTitleOffset(1.1);
   P_37__78->GetXaxis()->SetTitleFont(42);
   P_37__78->GetYaxis()->SetTitle("Ghost tracks");
   P_37__78->GetYaxis()->CenterTitle(true);
   P_37__78->GetYaxis()->SetNdivisions(4000510);
   P_37__78->GetYaxis()->SetLabelFont(42);
   P_37__78->GetYaxis()->SetTitleSize(0.04);
   P_37__78->GetYaxis()->SetTitleOffset(1.1);
   P_37__78->GetYaxis()->SetTitleFont(42);
   P_37__78->GetZaxis()->SetLabelFont(42);
   P_37__78->GetZaxis()->SetTitleOffset(1);
   P_37__78->GetZaxis()->SetTitleFont(42);
   P_37__78->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
