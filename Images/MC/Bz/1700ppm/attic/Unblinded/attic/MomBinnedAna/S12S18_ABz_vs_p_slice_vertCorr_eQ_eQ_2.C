void S12S18_ABz_vs_p_slice_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:41 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-10.10522,3712.5,44.55971);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1396[15] = {
   100,
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
   Double_t Graph0_fy1396[15] = {
   33.97677,
   -0.5240326,
   -0.2091798,
   0.1223552,
   0.2373937,
   0.1341501,
   0.3085551,
   0.1348223,
   0.1810663,
   0.2089641,
   0.01289337,
   0.19118,
   0.03649588,
   -0.0607043,
   0.05746716};
   Double_t Graph0_fex1396[15] = {
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
   Double_t Graph0_fey1396[15] = {
   1.472124,
   0.4703632,
   0.1669392,
   0.1256805,
   0.1094211,
   0.09943643,
   0.09071227,
   0.0848517,
   0.08007033,
   0.07643602,
   0.0764828,
   0.07681515,
   0.07919376,
   0.08549137,
   0.1232342};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1396,Graph0_fy1396,Graph0_fex1396,Graph0_fey1396);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01396 = new TH1F("Graph_Graph01396","S12S18",100,0,3300);
   Graph_Graph01396->SetMinimum(-4.638724);
   Graph_Graph01396->SetMaximum(39.09322);
   Graph_Graph01396->SetDirectory(0);
   Graph_Graph01396->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01396->SetLineColor(ci);
   Graph_Graph01396->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01396->GetXaxis()->CenterTitle(true);
   Graph_Graph01396->GetXaxis()->SetLabelFont(42);
   Graph_Graph01396->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01396->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01396->GetXaxis()->SetTitleFont(42);
   Graph_Graph01396->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01396->GetYaxis()->CenterTitle(true);
   Graph_Graph01396->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01396->GetYaxis()->SetLabelFont(42);
   Graph_Graph01396->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01396->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01396->GetYaxis()->SetTitleFont(42);
   Graph_Graph01396->GetZaxis()->SetLabelFont(42);
   Graph_Graph01396->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01396->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01396);
   
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
