void S0S12S18_c_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.021983,3378.375,0.3709325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1163[15] = {
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
   Double_t Graph0_fy1163[15] = {
   -0.3007089,
   -0.7273492,
   -0.3418087,
   -0.02635848,
   -0.001231841,
   -0.0003091425,
   -0.0002813206,
   0.0001086405,
   0.0002955067,
   0.0003377728,
   0.0003590816,
   -0.0002186302,
   -0.0004652647,
   0.0007328723,
   0.005289164};
   Double_t Graph0_fex1163[15] = {
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
   Double_t Graph0_fey1163[15] = {
   0.4394888,
   0.06248134,
   0.02208571,
   0.01657252,
   0.01449811,
   0.01308502,
   0.01199622,
   0.0111678,
   0.01053964,
   0.01011945,
   0.009889761,
   0.009755447,
   0.009839961,
   0.01016873,
   0.01459971};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1163,Graph0_fy1163,Graph0_fex1163,Graph0_fey1163);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01163 = new TH1F("Graph_Graph01163","S0S12S18",100,0,3300);
   Graph_Graph01163->SetMinimum(-0.8826916);
   Graph_Graph01163->SetMaximum(0.2316409);
   Graph_Graph01163->SetDirectory(0);
   Graph_Graph01163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01163->SetLineColor(ci);
   Graph_Graph01163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01163->GetXaxis()->SetRange(1,91);
   Graph_Graph01163->GetXaxis()->CenterTitle(true);
   Graph_Graph01163->GetXaxis()->SetLabelFont(42);
   Graph_Graph01163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01163->GetXaxis()->SetTitleFont(42);
   Graph_Graph01163->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01163->GetYaxis()->CenterTitle(true);
   Graph_Graph01163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01163->GetYaxis()->SetLabelFont(42);
   Graph_Graph01163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01163->GetYaxis()->SetTitleFont(42);
   Graph_Graph01163->GetZaxis()->SetLabelFont(42);
   Graph_Graph01163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01163);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
