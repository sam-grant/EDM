void P_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_0__4 = new TH1F("P_0__4","Plane 0",110,0,3300);
   P_0__4->SetBinContent(1,493);
   P_0__4->SetBinContent(2,15);
   P_0__4->SetBinContent(3,5);
   P_0__4->SetBinContent(4,1);
   P_0__4->SetBinContent(5,1);
   P_0__4->SetBinContent(6,1);
   P_0__4->SetBinContent(7,1);
   P_0__4->SetBinContent(10,1);
   P_0__4->SetEntries(518);
   P_0__4->SetLineWidth(3);
   P_0__4->GetXaxis()->SetTitle("Momentum [MeV]");
   P_0__4->GetXaxis()->CenterTitle(true);
   P_0__4->GetXaxis()->SetLabelFont(42);
   P_0__4->GetXaxis()->SetTitleSize(0.04);
   P_0__4->GetXaxis()->SetTitleOffset(1.1);
   P_0__4->GetXaxis()->SetTitleFont(42);
   P_0__4->GetYaxis()->SetTitle("Ghost tracks");
   P_0__4->GetYaxis()->CenterTitle(true);
   P_0__4->GetYaxis()->SetNdivisions(4000510);
   P_0__4->GetYaxis()->SetLabelFont(42);
   P_0__4->GetYaxis()->SetTitleSize(0.04);
   P_0__4->GetYaxis()->SetTitleOffset(1.1);
   P_0__4->GetYaxis()->SetTitleFont(42);
   P_0__4->GetZaxis()->SetLabelFont(42);
   P_0__4->GetZaxis()->SetTitleOffset(1);
   P_0__4->GetZaxis()->SetTitleFont(42);
   P_0__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
