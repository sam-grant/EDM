void rawpVals()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:15:23 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.3025,-0.1375,2.5025,1.2375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[3] = {
   0,
   1,
   2};
   Double_t Graph0_fy1018[3] = {
   0,
   1,
   1};
   Double_t Graph0_fex1018[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1018[3] = {
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";Data point removed;p-value");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","",100,0,2.2);
   Graph_Graph01018->SetMinimum(0);
   Graph_Graph01018->SetMaximum(1.1);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Data point removed");
   Graph_Graph01018->GetXaxis()->SetBinLabel(1,"None");
   Graph_Graph01018->GetXaxis()->SetBinLabel(46,"+50");
   Graph_Graph01018->GetXaxis()->SetBinLabel(91,"+30");
   Graph_Graph01018->GetXaxis()->SetRange(0,101);
   Graph_Graph01018->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetNdivisions(7);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("p-value");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
