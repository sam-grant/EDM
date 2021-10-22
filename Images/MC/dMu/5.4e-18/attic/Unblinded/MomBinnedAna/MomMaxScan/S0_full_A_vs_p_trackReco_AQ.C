void S0_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:29:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-9.658755e-11,3550,-6.941844e-11);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1116[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1116[12] = {
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t Graph0_fex1116[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1116[12] = {
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1116,Graph0_fy1116,Graph0_fex1116,Graph0_fey1116);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01116 = new TH1F("Graph_Graph01116","S0",100,580,3220);
   Graph_Graph01116->SetMinimum(-9.387064e-11);
   Graph_Graph01116->SetMaximum(-7.213535e-11);
   Graph_Graph01116->SetDirectory(0);
   Graph_Graph01116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01116->SetLineColor(ci);
   Graph_Graph01116->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01116->GetXaxis()->SetRange(1,100);
   Graph_Graph01116->GetXaxis()->CenterTitle(true);
   Graph_Graph01116->GetXaxis()->SetLabelFont(42);
   Graph_Graph01116->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01116->GetXaxis()->SetTitleFont(42);
   Graph_Graph01116->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01116->GetYaxis()->CenterTitle(true);
   Graph_Graph01116->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01116->GetYaxis()->SetLabelFont(42);
   Graph_Graph01116->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01116->GetYaxis()->SetTitleFont(42);
   Graph_Graph01116->GetZaxis()->SetLabelFont(42);
   Graph_Graph01116->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01116);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
