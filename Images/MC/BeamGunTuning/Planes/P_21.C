void P_21()
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
   
   TH1F *P_21__46 = new TH1F("P_21__46","Plane 21",110,0,3300);
   P_21__46->SetBinContent(39,2);
   P_21__46->SetBinContent(40,429);
   P_21__46->SetEntries(431);
   P_21__46->SetLineWidth(3);
   P_21__46->GetXaxis()->SetTitle("Momentum [MeV]");
   P_21__46->GetXaxis()->CenterTitle(true);
   P_21__46->GetXaxis()->SetLabelFont(42);
   P_21__46->GetXaxis()->SetTitleSize(0.04);
   P_21__46->GetXaxis()->SetTitleOffset(1.1);
   P_21__46->GetXaxis()->SetTitleFont(42);
   P_21__46->GetYaxis()->SetTitle("Ghost tracks");
   P_21__46->GetYaxis()->CenterTitle(true);
   P_21__46->GetYaxis()->SetNdivisions(4000510);
   P_21__46->GetYaxis()->SetLabelFont(42);
   P_21__46->GetYaxis()->SetTitleSize(0.04);
   P_21__46->GetYaxis()->SetTitleOffset(1.1);
   P_21__46->GetYaxis()->SetTitleFont(42);
   P_21__46->GetZaxis()->SetLabelFont(42);
   P_21__46->GetZaxis()->SetTitleOffset(1);
   P_21__46->GetZaxis()->SetTitleFont(42);
   P_21__46->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
