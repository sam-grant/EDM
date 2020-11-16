void P_3()
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
   
   TH1F *P_3__10 = new TH1F("P_3__10","Plane 3",110,0,3300);
   P_3__10->SetBinContent(38,1);
   P_3__10->SetBinContent(39,3);
   P_3__10->SetBinContent(40,456);
   P_3__10->SetBinContent(41,45);
   P_3__10->SetBinContent(42,1);
   P_3__10->SetEntries(506);
   P_3__10->SetLineWidth(3);
   P_3__10->GetXaxis()->SetTitle("Momentum [MeV]");
   P_3__10->GetXaxis()->CenterTitle(true);
   P_3__10->GetXaxis()->SetLabelFont(42);
   P_3__10->GetXaxis()->SetTitleSize(0.04);
   P_3__10->GetXaxis()->SetTitleOffset(1.1);
   P_3__10->GetXaxis()->SetTitleFont(42);
   P_3__10->GetYaxis()->SetTitle("Ghost tracks");
   P_3__10->GetYaxis()->CenterTitle(true);
   P_3__10->GetYaxis()->SetNdivisions(4000510);
   P_3__10->GetYaxis()->SetLabelFont(42);
   P_3__10->GetYaxis()->SetTitleSize(0.04);
   P_3__10->GetYaxis()->SetTitleOffset(1.1);
   P_3__10->GetYaxis()->SetTitleFont(42);
   P_3__10->GetZaxis()->SetLabelFont(42);
   P_3__10->GetZaxis()->SetTitleOffset(1);
   P_3__10->GetZaxis()->SetTitleFont(42);
   P_3__10->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
