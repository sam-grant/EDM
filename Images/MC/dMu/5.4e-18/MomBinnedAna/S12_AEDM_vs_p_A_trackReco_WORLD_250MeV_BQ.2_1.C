void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7352,-4.008104e-05,3407.155,0.0003633302);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[11] = {
   451.6049,
   653.2425,
   880.2476,
   1123.096,
   1371.206,
   1620.243,
   1866.857,
   2114.96,
   2362.593,
   2614.235,
   2787.651};
   Double_t Graph0_fy1098[11] = {
   1.792832e-06,
   3.24236e-07,
   3.536334e-07,
   3.411623e-07,
   4.42421e-07,
   4.07855e-07,
   9.391891e-07,
   1.384624e-06,
   9.436013e-07,
   6.446912e-06,
   8.165478e-05};
   Double_t Graph0_fex1098[11] = {
   0.15967,
   0.1343891,
   0.09726887,
   0.09508309,
   0.1012556,
   0.1119375,
   0.1303914,
   0.1631604,
   0.21262,
   0.2621876,
   0.3235261};
   Double_t Graph0_fey1098[11] = {
   4.542224e-06,
   3.020165e-07,
   1.030016e-07,
   9.421248e-08,
   1.142334e-07,
   1.544083e-07,
   2.427736e-07,
   4.644574e-07,
   1.003951e-06,
   1.937685e-06,
   4.747412e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,217.7923,3021.628);
   Graph_Graph01098->SetMinimum(2.600889e-07);
   Graph_Graph01098->SetMaximum(0.0003229891);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,101);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
