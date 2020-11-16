void P_17()
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
   
   TH1F *P_17__38 = new TH1F("P_17__38","Plane 17",110,0,3300);
   P_17__38->SetBinContent(80,1);
   P_17__38->SetBinContent(81,1);
   P_17__38->SetBinContent(82,369);
   P_17__38->SetBinContent(83,64);
   P_17__38->SetEntries(435);
   P_17__38->SetLineWidth(3);
   P_17__38->GetXaxis()->SetTitle("Momentum [MeV]");
   P_17__38->GetXaxis()->CenterTitle(true);
   P_17__38->GetXaxis()->SetLabelFont(42);
   P_17__38->GetXaxis()->SetTitleSize(0.04);
   P_17__38->GetXaxis()->SetTitleOffset(1.1);
   P_17__38->GetXaxis()->SetTitleFont(42);
   P_17__38->GetYaxis()->SetTitle("Ghost tracks");
   P_17__38->GetYaxis()->CenterTitle(true);
   P_17__38->GetYaxis()->SetNdivisions(4000510);
   P_17__38->GetYaxis()->SetLabelFont(42);
   P_17__38->GetYaxis()->SetTitleSize(0.04);
   P_17__38->GetYaxis()->SetTitleOffset(1.1);
   P_17__38->GetYaxis()->SetTitleFont(42);
   P_17__38->GetZaxis()->SetLabelFont(42);
   P_17__38->GetZaxis()->SetTitleOffset(1);
   P_17__38->GetZaxis()->SetTitleFont(42);
   P_17__38->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
