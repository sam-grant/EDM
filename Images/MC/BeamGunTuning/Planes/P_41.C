void P_41()
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
   
   TH1F *P_41__86 = new TH1F("P_41__86","Plane 41",110,0,3300);
   P_41__86->SetBinContent(80,1);
   P_41__86->SetBinContent(82,358);
   P_41__86->SetBinContent(83,66);
   P_41__86->SetEntries(425);
   P_41__86->SetLineWidth(3);
   P_41__86->GetXaxis()->SetTitle("Momentum [MeV]");
   P_41__86->GetXaxis()->CenterTitle(true);
   P_41__86->GetXaxis()->SetLabelFont(42);
   P_41__86->GetXaxis()->SetTitleSize(0.04);
   P_41__86->GetXaxis()->SetTitleOffset(1.1);
   P_41__86->GetXaxis()->SetTitleFont(42);
   P_41__86->GetYaxis()->SetTitle("Ghost tracks");
   P_41__86->GetYaxis()->CenterTitle(true);
   P_41__86->GetYaxis()->SetNdivisions(4000510);
   P_41__86->GetYaxis()->SetLabelFont(42);
   P_41__86->GetYaxis()->SetTitleSize(0.04);
   P_41__86->GetYaxis()->SetTitleOffset(1.1);
   P_41__86->GetYaxis()->SetTitleFont(42);
   P_41__86->GetZaxis()->SetLabelFont(42);
   P_41__86->GetZaxis()->SetTitleOffset(1);
   P_41__86->GetZaxis()->SetTitleFont(42);
   P_41__86->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
