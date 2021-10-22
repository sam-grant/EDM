void S12S18_ABz_vs_p_slice_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-1.1981,3690,0.5233698);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1192[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1192[14] = {
   -0.3384189,
   0.05870782,
   0.07190804,
   0.1991128,
   0.1447469,
   0.1959735,
   0.1877299,
   0.1439882,
   0.1465513,
   0.1280817,
   0.1771968,
   0.1090397,
   0.09220827,
   -0.1414283};
   Double_t Graph0_fex1192[14] = {
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
   Double_t Graph0_fey1192[14] = {
   0.5727692,
   0.106418,
   0.05325128,
   0.03734545,
   0.03198746,
   0.02959403,
   0.02834849,
   0.02767215,
   0.02837807,
   0.02994533,
   0.03244358,
   0.03460198,
   0.03681946,
   0.1207253};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1192,Graph0_fy1192,Graph0_fex1192,Graph0_fey1192);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01192 = new TH1F("Graph_Graph01192","S12S18",100,0,3280);
   Graph_Graph01192->SetMinimum(-1.025953);
   Graph_Graph01192->SetMaximum(0.3512228);
   Graph_Graph01192->SetDirectory(0);
   Graph_Graph01192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01192->SetLineColor(ci);
   Graph_Graph01192->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01192->GetXaxis()->CenterTitle(true);
   Graph_Graph01192->GetXaxis()->SetLabelFont(42);
   Graph_Graph01192->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01192->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01192->GetXaxis()->SetTitleFont(42);
   Graph_Graph01192->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01192->GetYaxis()->CenterTitle(true);
   Graph_Graph01192->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01192->GetYaxis()->SetLabelFont(42);
   Graph_Graph01192->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01192->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01192->GetYaxis()->SetTitleFont(42);
   Graph_Graph01192->GetZaxis()->SetLabelFont(42);
   Graph_Graph01192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01192->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01192);
   
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
