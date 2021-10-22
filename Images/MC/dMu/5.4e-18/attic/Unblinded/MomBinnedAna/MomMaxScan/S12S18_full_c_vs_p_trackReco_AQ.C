void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.160481,3550,0.8061022);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1433[12] = {
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
   Double_t Graph0_fy1433[12] = {
   0.281352,
   0.283567,
   0.2849584,
   0.2863341,
   0.2928165,
   0.3055935,
   0.3272443,
   0.356484,
   0.3912485,
   0.4356772,
   0.5242846,
   0.6554352};
   Double_t Graph0_fex1433[12] = {
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
   Double_t Graph0_fey1433[12] = {
   0.01326743,
   0.01336243,
   0.0136356,
   0.01397504,
   0.01441599,
   0.0150483,
   0.01599844,
   0.01740781,
   0.01955214,
   0.02293601,
   0.0289211,
   0.0430635};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1433,Graph0_fy1433,Graph0_fex1433,Graph0_fey1433);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01433 = new TH1F("Graph_Graph01433","S12S18",100,580,3220);
   Graph_Graph01433->SetMinimum(0.2250432);
   Graph_Graph01433->SetMaximum(0.7415401);
   Graph_Graph01433->SetDirectory(0);
   Graph_Graph01433->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01433->SetLineColor(ci);
   Graph_Graph01433->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01433->GetXaxis()->SetRange(1,100);
   Graph_Graph01433->GetXaxis()->CenterTitle(true);
   Graph_Graph01433->GetXaxis()->SetLabelFont(42);
   Graph_Graph01433->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01433->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01433->GetXaxis()->SetTitleFont(42);
   Graph_Graph01433->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01433->GetYaxis()->CenterTitle(true);
   Graph_Graph01433->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01433->GetYaxis()->SetLabelFont(42);
   Graph_Graph01433->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01433->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01433->GetYaxis()->SetTitleFont(42);
   Graph_Graph01433->GetZaxis()->SetLabelFont(42);
   Graph_Graph01433->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01433->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01433);
   
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
