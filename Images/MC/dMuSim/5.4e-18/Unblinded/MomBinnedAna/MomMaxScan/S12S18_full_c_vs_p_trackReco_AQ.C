void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.5888032,3550,-0.1814484);
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
   -0.2582849,
   -0.259546,
   -0.2616013,
   -0.2646246,
   -0.270001,
   -0.281778,
   -0.294379,
   -0.3109333,
   -0.3293402,
   -0.3649878,
   -0.4080479,
   -0.490361};
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
   0.008944075,
   0.008985174,
   0.009112166,
   0.009309329,
   0.009630928,
   0.01013562,
   0.01088699,
   0.01199111,
   0.0136148,
   0.01611033,
   0.02044004,
   0.03054971};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1433,Graph0_fy1433,Graph0_fex1433,Graph0_fey1433);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01433 = new TH1F("Graph_Graph01433","S12S18",100,580,3220);
   Graph_Graph01433->SetMinimum(-0.5480677);
   Graph_Graph01433->SetMaximum(-0.2221839);
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
