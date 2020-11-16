void P_16()
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
   
   TH1F *P_16__36 = new TH1F("P_16__36","Plane 16",110,0,3300);
   P_16__36->SetBinContent(56,1);
   P_16__36->SetBinContent(88,2);
   P_16__36->SetBinContent(89,1);
   P_16__36->SetBinContent(90,432);
   P_16__36->SetBinContent(91,1);
   P_16__36->SetEntries(437);
   P_16__36->SetLineWidth(3);
   P_16__36->GetXaxis()->SetTitle("Momentum [MeV]");
   P_16__36->GetXaxis()->CenterTitle(true);
   P_16__36->GetXaxis()->SetLabelFont(42);
   P_16__36->GetXaxis()->SetTitleSize(0.04);
   P_16__36->GetXaxis()->SetTitleOffset(1.1);
   P_16__36->GetXaxis()->SetTitleFont(42);
   P_16__36->GetYaxis()->SetTitle("Ghost tracks");
   P_16__36->GetYaxis()->CenterTitle(true);
   P_16__36->GetYaxis()->SetNdivisions(4000510);
   P_16__36->GetYaxis()->SetLabelFont(42);
   P_16__36->GetYaxis()->SetTitleSize(0.04);
   P_16__36->GetYaxis()->SetTitleOffset(1.1);
   P_16__36->GetYaxis()->SetTitleFont(42);
   P_16__36->GetZaxis()->SetLabelFont(42);
   P_16__36->GetZaxis()->SetTitleOffset(1);
   P_16__36->GetZaxis()->SetTitleFont(42);
   P_16__36->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
