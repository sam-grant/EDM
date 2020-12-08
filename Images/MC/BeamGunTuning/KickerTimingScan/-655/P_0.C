void P_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_0__16 = new TH1F("P_0__16","-655",110,0,3300);
   P_0__16->SetLineWidth(3);
   P_0__16->GetXaxis()->SetTitle("Momentum [MeV]");
   P_0__16->GetXaxis()->CenterTitle(true);
   P_0__16->GetXaxis()->SetLabelFont(42);
   P_0__16->GetXaxis()->SetTitleSize(0.04);
   P_0__16->GetXaxis()->SetTitleOffset(1.1);
   P_0__16->GetXaxis()->SetTitleFont(42);
   P_0__16->GetYaxis()->SetTitle("Ghost tracks");
   P_0__16->GetYaxis()->CenterTitle(true);
   P_0__16->GetYaxis()->SetNdivisions(4000510);
   P_0__16->GetYaxis()->SetLabelFont(42);
   P_0__16->GetYaxis()->SetTitleSize(0.04);
   P_0__16->GetYaxis()->SetTitleOffset(1.1);
   P_0__16->GetYaxis()->SetTitleFont(42);
   P_0__16->GetZaxis()->SetLabelFont(42);
   P_0__16->GetZaxis()->SetTitleOffset(1);
   P_0__16->GetZaxis()->SetTitleFont(42);
   P_0__16->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
