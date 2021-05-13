void S12_ABz_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 18:45:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-4.329072,3378.375,1.19261);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[15] = {
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
   Double_t Graph0_fy1078[15] = {
   -2.295383,
   -0.4876669,
   0.01505797,
   0.0468549,
   0.2287792,
   0.1281954,
   0.2428136,
   0.1849427,
   0.1458978,
   0.1525162,
   0.07504055,
   0.1240295,
   0.08270234,
   0.13715,
   0.005693422};
   Double_t Graph0_fex1078[15] = {
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
   Double_t Graph0_fey1078[15] = {
   1.113408,
   0.1522147,
   0.05463239,
   0.04099317,
   0.03572398,
   0.03222595,
   0.02951619,
   0.02759944,
   0.02601946,
   0.0252515,
   0.02495649,
   0.02508976,
   0.02594339,
   0.02811711,
   0.04302251};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S12",100,0,3300);
   Graph_Graph01078->SetMinimum(-3.776904);
   Graph_Graph01078->SetMaximum(0.6404419);
   Graph_Graph01078->SetDirectory(0);
   Graph_Graph01078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01078->SetLineColor(ci);
   Graph_Graph01078->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01078->GetXaxis()->SetRange(1,91);
   Graph_Graph01078->GetXaxis()->CenterTitle(true);
   Graph_Graph01078->GetXaxis()->SetLabelFont(42);
   Graph_Graph01078->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01078->GetXaxis()->SetTitleFont(42);
   Graph_Graph01078->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01078->GetYaxis()->CenterTitle(true);
   Graph_Graph01078->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01078->GetYaxis()->SetLabelFont(42);
   Graph_Graph01078->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01078->GetYaxis()->SetTitleFont(42);
   Graph_Graph01078->GetZaxis()->SetLabelFont(42);
   Graph_Graph01078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01078);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
