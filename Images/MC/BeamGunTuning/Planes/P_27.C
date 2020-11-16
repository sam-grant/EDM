void P_27()
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
   
   TH1F *P_27__58 = new TH1F("P_27__58","Plane 27",110,0,3300);
   P_27__58->SetBinContent(40,428);
   P_27__58->SetBinContent(41,1);
   P_27__58->SetEntries(429);
   P_27__58->SetLineWidth(3);
   P_27__58->GetXaxis()->SetTitle("Momentum [MeV]");
   P_27__58->GetXaxis()->CenterTitle(true);
   P_27__58->GetXaxis()->SetLabelFont(42);
   P_27__58->GetXaxis()->SetTitleSize(0.04);
   P_27__58->GetXaxis()->SetTitleOffset(1.1);
   P_27__58->GetXaxis()->SetTitleFont(42);
   P_27__58->GetYaxis()->SetTitle("Ghost tracks");
   P_27__58->GetYaxis()->CenterTitle(true);
   P_27__58->GetYaxis()->SetNdivisions(4000510);
   P_27__58->GetYaxis()->SetLabelFont(42);
   P_27__58->GetYaxis()->SetTitleSize(0.04);
   P_27__58->GetYaxis()->SetTitleOffset(1.1);
   P_27__58->GetYaxis()->SetTitleFont(42);
   P_27__58->GetZaxis()->SetLabelFont(42);
   P_27__58->GetZaxis()->SetTitleOffset(1);
   P_27__58->GetZaxis()->SetTitleFont(42);
   P_27__58->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
