void S18_c_vs_p_slice_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-75.67635,3712.5,15.41442);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1299[15] = {
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
   Double_t Graph0_fy1299[15] = {
   -59.21465,
   -2.114904,
   -0.9006507,
   -0.1547068,
   0.1225869,
   0.07182684,
   -0.0114816,
   -0.1036018,
   -0.004188708,
   0.03901656,
   0.00327104,
   -0.02546051,
   0.08899422,
   -0.2026067,
   0.06033735};
   Double_t Graph0_fex1299[15] = {
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
   Double_t Graph0_fey1299[15] = {
   1.279899,
   0.4738124,
   0.1663562,
   0.1247319,
   0.110037,
   0.1000298,
   0.0910038,
   0.08488724,
   0.08009405,
   0.07668846,
   0.07614428,
   0.07715813,
   0.07836363,
   0.08608034,
   0.1116828};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1299,Graph0_fy1299,Graph0_fex1299,Graph0_fey1299);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01299 = new TH1F("Graph_Graph01299","S18",100,0,3300);
   Graph_Graph01299->SetMinimum(-66.56727);
   Graph_Graph01299->SetMaximum(6.305342);
   Graph_Graph01299->SetDirectory(0);
   Graph_Graph01299->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01299->SetLineColor(ci);
   Graph_Graph01299->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01299->GetXaxis()->CenterTitle(true);
   Graph_Graph01299->GetXaxis()->SetLabelFont(42);
   Graph_Graph01299->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01299->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01299->GetXaxis()->SetTitleFont(42);
   Graph_Graph01299->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01299->GetYaxis()->CenterTitle(true);
   Graph_Graph01299->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01299->GetYaxis()->SetLabelFont(42);
   Graph_Graph01299->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01299->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01299->GetYaxis()->SetTitleFont(42);
   Graph_Graph01299->GetZaxis()->SetLabelFont(42);
   Graph_Graph01299->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01299);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
