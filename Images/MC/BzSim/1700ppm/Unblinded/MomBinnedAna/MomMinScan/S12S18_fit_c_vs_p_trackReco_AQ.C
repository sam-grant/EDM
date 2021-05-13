void S12S18_fit_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:19:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.5899433,3650,0.09351858);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1325[15] = {
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
   Double_t Graph0_fy1325[15] = {
   -0.4668611,
   -0.4665781,
   -0.4306608,
   -0.2988253,
   -0.2392294,
   -0.2015281,
   -0.1681465,
   -0.1425785,
   -0.1219779,
   -0.1219603,
   -0.1116958,
   -0.09459991,
   -0.06651533,
   -0.08383558,
   -0.05712141};
   Double_t Graph0_fex1325[15] = {
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
   Double_t Graph0_fey1325[15] = {
   0.009171873,
   0.009171795,
   0.009147354,
   0.009018466,
   0.008942532,
   0.00900217,
   0.009212648,
   0.009604998,
   0.01023702,
   0.01117876,
   0.01254566,
   0.01450221,
   0.01726223,
   0.02185497,
   0.03672966};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1325,Graph0_fy1325,Graph0_fex1325,Graph0_fey1325);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01325 = new TH1F("Graph_Graph01325","S12S18",100,-400,3200);
   Graph_Graph01325->SetMinimum(-0.5215971);
   Graph_Graph01325->SetMaximum(0.02517238);
   Graph_Graph01325->SetDirectory(0);
   Graph_Graph01325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01325->SetLineColor(ci);
   Graph_Graph01325->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01325->GetXaxis()->CenterTitle(true);
   Graph_Graph01325->GetXaxis()->SetLabelFont(42);
   Graph_Graph01325->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01325->GetXaxis()->SetTitleFont(42);
   Graph_Graph01325->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01325->GetYaxis()->CenterTitle(true);
   Graph_Graph01325->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01325->GetYaxis()->SetLabelFont(42);
   Graph_Graph01325->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01325->GetYaxis()->SetTitleFont(42);
   Graph_Graph01325->GetZaxis()->SetLabelFont(42);
   Graph_Graph01325->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01325);
   
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
