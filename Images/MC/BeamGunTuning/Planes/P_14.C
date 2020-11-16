void P_14()
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
   
   TH1F *P_14__32 = new TH1F("P_14__32","Plane 14",110,0,3300);
   P_14__32->SetBinContent(99,3);
   P_14__32->SetBinContent(100,432);
   P_14__32->SetBinContent(101,3);
   P_14__32->SetEntries(438);
   P_14__32->SetLineWidth(3);
   P_14__32->GetXaxis()->SetTitle("Momentum [MeV]");
   P_14__32->GetXaxis()->CenterTitle(true);
   P_14__32->GetXaxis()->SetLabelFont(42);
   P_14__32->GetXaxis()->SetTitleSize(0.04);
   P_14__32->GetXaxis()->SetTitleOffset(1.1);
   P_14__32->GetXaxis()->SetTitleFont(42);
   P_14__32->GetYaxis()->SetTitle("Ghost tracks");
   P_14__32->GetYaxis()->CenterTitle(true);
   P_14__32->GetYaxis()->SetNdivisions(4000510);
   P_14__32->GetYaxis()->SetLabelFont(42);
   P_14__32->GetYaxis()->SetTitleSize(0.04);
   P_14__32->GetYaxis()->SetTitleOffset(1.1);
   P_14__32->GetYaxis()->SetTitleFont(42);
   P_14__32->GetZaxis()->SetLabelFont(42);
   P_14__32->GetZaxis()->SetTitleOffset(1);
   P_14__32->GetZaxis()->SetTitleFont(42);
   P_14__32->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
