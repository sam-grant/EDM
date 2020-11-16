void P_9()
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
   
   TH1F *P_9__22 = new TH1F("P_9__22","Plane 9",110,0,3300);
   P_9__22->SetBinContent(70,1);
   P_9__22->SetBinContent(71,1);
   P_9__22->SetBinContent(74,1);
   P_9__22->SetBinContent(91,1);
   P_9__22->SetBinContent(92,1);
   P_9__22->SetBinContent(93,1);
   P_9__22->SetBinContent(94,3);
   P_9__22->SetBinContent(95,6);
   P_9__22->SetBinContent(96,446);
   P_9__22->SetBinContent(97,6);
   P_9__22->SetEntries(467);
   P_9__22->SetLineWidth(3);
   P_9__22->GetXaxis()->SetTitle("Momentum [MeV]");
   P_9__22->GetXaxis()->CenterTitle(true);
   P_9__22->GetXaxis()->SetLabelFont(42);
   P_9__22->GetXaxis()->SetTitleSize(0.04);
   P_9__22->GetXaxis()->SetTitleOffset(1.1);
   P_9__22->GetXaxis()->SetTitleFont(42);
   P_9__22->GetYaxis()->SetTitle("Ghost tracks");
   P_9__22->GetYaxis()->CenterTitle(true);
   P_9__22->GetYaxis()->SetNdivisions(4000510);
   P_9__22->GetYaxis()->SetLabelFont(42);
   P_9__22->GetYaxis()->SetTitleSize(0.04);
   P_9__22->GetYaxis()->SetTitleOffset(1.1);
   P_9__22->GetYaxis()->SetTitleFont(42);
   P_9__22->GetZaxis()->SetLabelFont(42);
   P_9__22->GetZaxis()->SetTitleOffset(1);
   P_9__22->GetZaxis()->SetTitleFont(42);
   P_9__22->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
