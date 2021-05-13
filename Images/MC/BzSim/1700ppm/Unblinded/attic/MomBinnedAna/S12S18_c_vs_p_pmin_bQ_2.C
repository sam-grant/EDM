void S12S18_c_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.4486109,2600,-0.04365505);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1325[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1325[9] = {
   -0.3750568,
   -0.3604708,
   -0.315972,
   -0.2842012,
   -0.236475,
   -0.1914077,
   -0.1604189,
   -0.1316402,
   -0.1340394};
   Double_t Graph0_fex1325[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1325[9] = {
   0.006061489,
   0.008557888,
   0.008695854,
   0.009074115,
   0.009733366,
   0.01079455,
   0.01255657,
   0.01567861,
   0.02289171};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1325,Graph0_fy1325,Graph0_fex1325,Graph0_fey1325);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01325 = new TH1F("Graph_Graph01325","S12S18",100,440,2360);
   Graph_Graph01325->SetMinimum(-0.4081153);
   Graph_Graph01325->SetMaximum(-0.08415064);
   Graph_Graph01325->SetDirectory(0);
   Graph_Graph01325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01325->SetLineColor(ci);
   Graph_Graph01325->GetXaxis()->SetTitle("p_{min} MeV");
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
