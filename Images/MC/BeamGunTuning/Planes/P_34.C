void P_34()
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
   
   TH1F *P_34__72 = new TH1F("P_34__72","Plane 34",110,0,3300);
   P_34__72->SetBinContent(98,1);
   P_34__72->SetBinContent(100,425);
   P_34__72->SetBinContent(101,1);
   P_34__72->SetEntries(427);
   P_34__72->SetLineWidth(3);
   P_34__72->GetXaxis()->SetTitle("Momentum [MeV]");
   P_34__72->GetXaxis()->CenterTitle(true);
   P_34__72->GetXaxis()->SetLabelFont(42);
   P_34__72->GetXaxis()->SetTitleSize(0.04);
   P_34__72->GetXaxis()->SetTitleOffset(1.1);
   P_34__72->GetXaxis()->SetTitleFont(42);
   P_34__72->GetYaxis()->SetTitle("Ghost tracks");
   P_34__72->GetYaxis()->CenterTitle(true);
   P_34__72->GetYaxis()->SetNdivisions(4000510);
   P_34__72->GetYaxis()->SetLabelFont(42);
   P_34__72->GetYaxis()->SetTitleSize(0.04);
   P_34__72->GetYaxis()->SetTitleOffset(1.1);
   P_34__72->GetYaxis()->SetTitleFont(42);
   P_34__72->GetZaxis()->SetLabelFont(42);
   P_34__72->GetZaxis()->SetTitleOffset(1);
   P_34__72->GetZaxis()->SetTitleFont(42);
   P_34__72->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
