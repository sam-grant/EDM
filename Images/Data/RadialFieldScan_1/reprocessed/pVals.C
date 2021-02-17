void pVals()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 16 21:37:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.5,-0.1375,3.5,1.2375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[3] = {
   1,
   2,
   3};
   Double_t Graph0_fy1017[3] = {
   0,
   1,
   1};
   Double_t Graph0_fex1017[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1017[3] = {
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Data point removed in re-fit;p-value");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0.8,3.2);
   Graph_Graph01017->SetMinimum(0);
   Graph_Graph01017->SetMaximum(1.1);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Data point removed in re-fit");
   Graph_Graph01017->GetXaxis()->SetBinLabel(9,"None");
   Graph_Graph01017->GetXaxis()->SetBinLabel(50,"+50");
   Graph_Graph01017->GetXaxis()->SetBinLabel(92,"+30");
   Graph_Graph01017->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetNdivisions(7);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("p-value");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ab");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
