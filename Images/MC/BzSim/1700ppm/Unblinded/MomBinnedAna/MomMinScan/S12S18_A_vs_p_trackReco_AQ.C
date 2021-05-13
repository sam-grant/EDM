void S12S18_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.1783629,3650,0.2437346);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1326[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1326[15] = {
   0.09901793,
   0.09906914,
   0.1090373,
   0.1314927,
   0.1607571,
   0.1470833,
   0.1511161,
   0.1433957,
   0.1302972,
   0.1219616,
   0.1115716,
   0.127046,
   0.09565733,
   0.03868497,
   -0.05620966};
   Double_t Graph0_fex1326[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1326[15] = {
   0.01294733,
   0.0129472,
   0.01291221,
   0.01273162,
   0.01262792,
   0.01271499,
   0.01301436,
   0.01357249,
   0.01446763,
   0.01581352,
   0.01775514,
   0.02052299,
   0.02438822,
   0.03083405,
   0.05180364};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1326,Graph0_fy1326,Graph0_fex1326,Graph0_fey1326);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01326 = new TH1F("Graph_Graph01326","S12S18",100,-400,3200);
   Graph_Graph01326->SetMinimum(-0.1361531);
   Graph_Graph01326->SetMaximum(0.2015248);
   Graph_Graph01326->SetDirectory(0);
   Graph_Graph01326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01326->SetLineColor(ci);
   Graph_Graph01326->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01326->GetXaxis()->CenterTitle(true);
   Graph_Graph01326->GetXaxis()->SetLabelFont(42);
   Graph_Graph01326->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01326->GetXaxis()->SetTitleFont(42);
   Graph_Graph01326->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01326->GetYaxis()->CenterTitle(true);
   Graph_Graph01326->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01326->GetYaxis()->SetLabelFont(42);
   Graph_Graph01326->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01326->GetYaxis()->SetTitleFont(42);
   Graph_Graph01326->GetZaxis()->SetLabelFont(42);
   Graph_Graph01326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01326);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
