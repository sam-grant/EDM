void C_vs_momnoQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  1 20:48:41 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.9375,-2.528169,3941.438,0.4212189);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[7] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250};
   Double_t Graph0_fy1017[7] = {
   -1.375161,
   -0.3948901,
   -0.1378973,
   -0.07681716,
   -0.08270666,
   -0.127137,
   -1.61054};
   Double_t Graph0_fex1017[7] = {
   250,
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1017[7] = {
   0.03271437,
   0.01059638,
   0.007766454,
   0.006471502,
   0.006114086,
   0.007417228,
   0.4260645};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0,3850);
   Graph_Graph01017->SetMinimum(-2.23323);
   Graph_Graph01017->SetMaximum(0.1262802);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(1,91);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
