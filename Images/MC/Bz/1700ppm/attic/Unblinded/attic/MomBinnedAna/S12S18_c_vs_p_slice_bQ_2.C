void S12S18_c_vs_p_slice_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:26 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-3.603073,3690,14.45323);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1191[14] = {
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
   Double_t Graph0_fy1191[14] = {
   11.03481,
   2.155871,
   -0.5115999,
   -0.5672996,
   -0.4219537,
   -0.4155175,
   -0.3361969,
   -0.2411346,
   -0.1931539,
   -0.1296617,
   -0.1340394,
   -0.09489795,
   -0.09809504,
   -0.2270975};
   Double_t Graph0_fex1191[14] = {
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
   Double_t Graph0_fey1191[14] = {
   0.4090391,
   0.07520694,
   0.03761001,
   0.02638886,
   0.02262946,
   0.02092907,
   0.02004205,
   0.01957458,
   0.02003423,
   0.02113808,
   0.02289171,
   0.02443583,
   0.02613713,
   0.08664123};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1191,Graph0_fy1191,Graph0_fex1191,Graph0_fey1191);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01191 = new TH1F("Graph_Graph01191","S12S18",100,0,3280);
   Graph_Graph01191->SetMinimum(-1.797442);
   Graph_Graph01191->SetMaximum(12.6476);
   Graph_Graph01191->SetDirectory(0);
   Graph_Graph01191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01191->SetLineColor(ci);
   Graph_Graph01191->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01191->GetXaxis()->CenterTitle(true);
   Graph_Graph01191->GetXaxis()->SetLabelFont(42);
   Graph_Graph01191->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01191->GetXaxis()->SetTitleFont(42);
   Graph_Graph01191->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01191->GetYaxis()->CenterTitle(true);
   Graph_Graph01191->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01191->GetYaxis()->SetLabelFont(42);
   Graph_Graph01191->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01191->GetYaxis()->SetTitleFont(42);
   Graph_Graph01191->GetZaxis()->SetLabelFont(42);
   Graph_Graph01191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01191);
   
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
