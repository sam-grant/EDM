void P_43()
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
   
   TH1F *P_43__90 = new TH1F("P_43__90","Plane 43",110,0,3300);
   P_43__90->SetBinContent(63,378);
   P_43__90->SetBinContent(64,46);
   P_43__90->SetEntries(424);
   P_43__90->SetLineWidth(3);
   P_43__90->GetXaxis()->SetTitle("Momentum [MeV]");
   P_43__90->GetXaxis()->CenterTitle(true);
   P_43__90->GetXaxis()->SetLabelFont(42);
   P_43__90->GetXaxis()->SetTitleSize(0.04);
   P_43__90->GetXaxis()->SetTitleOffset(1.1);
   P_43__90->GetXaxis()->SetTitleFont(42);
   P_43__90->GetYaxis()->SetTitle("Ghost tracks");
   P_43__90->GetYaxis()->CenterTitle(true);
   P_43__90->GetYaxis()->SetNdivisions(4000510);
   P_43__90->GetYaxis()->SetLabelFont(42);
   P_43__90->GetYaxis()->SetTitleSize(0.04);
   P_43__90->GetYaxis()->SetTitleOffset(1.1);
   P_43__90->GetYaxis()->SetTitleFont(42);
   P_43__90->GetZaxis()->SetLabelFont(42);
   P_43__90->GetZaxis()->SetTitleOffset(1);
   P_43__90->GetZaxis()->SetTitleFont(42);
   P_43__90->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
