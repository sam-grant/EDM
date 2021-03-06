void pVals()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 22 10:00:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.08240838,8.5,1.112611);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1037[7] = {
   0.07565258,
   0.04121506,
   0.06029581,
   0.05266572,
   0.9065732,
   0.06653957,
   0.05089782};
   Double_t Graph0_fex1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1037[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";Data point removed in re-fit;p-value");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,0.4,7.6);
   Graph_Graph01037->SetMinimum(0.03709356);
   Graph_Graph01037->SetMaximum(0.993109);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Data point removed in re-fit");
   Graph_Graph01037->GetXaxis()->SetBinLabel(9,"None");
   Graph_Graph01037->GetXaxis()->SetBinLabel(23,"+50");
   Graph_Graph01037->GetXaxis()->SetBinLabel(37,"+30");
   Graph_Graph01037->GetXaxis()->SetBinLabel(51,"+10");
   Graph_Graph01037->GetXaxis()->SetBinLabel(64,"#minus10");
   Graph_Graph01037->GetXaxis()->SetBinLabel(78,"#minus30");
   Graph_Graph01037->GetXaxis()->SetBinLabel(92,"#minus50");
   Graph_Graph01037->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetNdivisions(7);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("p-value");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("ab");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
