void S0S12S18_ABz_vs_p_slice_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:57 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-6.375402,3712.5,28.20334);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1492[15] = {
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
   Double_t Graph0_fy1492[15] = {
   21.59193,
   -0.2239914,
   0.07834806,
   0.2116165,
   0.2182861,
   0.06686058,
   0.2240158,
   0.1516977,
   0.1670204,
   0.1416426,
   0.08712483,
   0.1788451,
   0.07195925,
   -0.0750897,
   0.1033383};
   Double_t Graph0_fex1492[15] = {
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
   Double_t Graph0_fey1492[15] = {
   0.8482899,
   0.3882869,
   0.1366293,
   0.1028397,
   0.08917315,
   0.08086019,
   0.07399585,
   0.06889292,
   0.06514537,
   0.06261535,
   0.06193345,
   0.06244021,
   0.06448088,
   0.06999947,
   0.1009807};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1492,Graph0_fy1492,Graph0_fex1492,Graph0_fey1492);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01492 = new TH1F("Graph_Graph01492","S0S12S18",100,0,3300);
   Graph_Graph01492->SetMinimum(-2.917528);
   Graph_Graph01492->SetMaximum(24.74547);
   Graph_Graph01492->SetDirectory(0);
   Graph_Graph01492->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01492->SetLineColor(ci);
   Graph_Graph01492->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01492->GetXaxis()->CenterTitle(true);
   Graph_Graph01492->GetXaxis()->SetLabelFont(42);
   Graph_Graph01492->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01492->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01492->GetXaxis()->SetTitleFont(42);
   Graph_Graph01492->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01492->GetYaxis()->CenterTitle(true);
   Graph_Graph01492->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01492->GetYaxis()->SetLabelFont(42);
   Graph_Graph01492->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01492->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01492->GetYaxis()->SetTitleFont(42);
   Graph_Graph01492->GetZaxis()->SetLabelFont(42);
   Graph_Graph01492->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01492);
   
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
