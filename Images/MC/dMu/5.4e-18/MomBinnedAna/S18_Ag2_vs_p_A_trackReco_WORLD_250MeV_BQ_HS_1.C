void S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0172,-7.540272e-06,3406.604,5.559287e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1136[11] = {
   452.0626,
   653.2683,
   880.5495,
   1123.02,
   1370.775,
   1619.706,
   1866.412,
   2115.028,
   2363.257,
   2612.187,
   2787.393};
   Double_t Graph0_fy1136[11] = {
   8.832072e-07,
   -8.549636e-08,
   -1.053263e-07,
   -2.45718e-08,
   4.196184e-08,
   2.59865e-08,
   -6.161569e-08,
   9.808147e-08,
   4.623559e-07,
   4.326678e-07,
   -1.936965e-06};
   Double_t Graph0_fex1136[11] = {
   0.1193582,
   0.1008816,
   0.07268885,
   0.07093285,
   0.07614695,
   0.08434817,
   0.09945782,
   0.1250793,
   0.1642018,
   0.1964806,
   0.2503264};
   Double_t Graph0_fey1136[11] = {
   1.962421e-06,
   1.300277e-07,
   4.345289e-08,
   3.937587e-08,
   4.868097e-08,
   6.766659e-08,
   1.142713e-07,
   2.395389e-07,
   5.84739e-07,
   1.252762e-06,
   3.769196e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1136,Graph0_fy1136,Graph0_fex1136,Graph0_fey1136);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01136 = new TH1F("Graph_Graph01136","S18_",100,218.3733,3021.213);
   Graph_Graph01136->SetMinimum(-6.230316e-06);
   Graph_Graph01136->SetMaximum(4.249331e-06);
   Graph_Graph01136->SetDirectory(0);
   Graph_Graph01136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01136->SetLineColor(ci);
   Graph_Graph01136->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01136->GetXaxis()->SetRange(0,101);
   Graph_Graph01136->GetXaxis()->CenterTitle(true);
   Graph_Graph01136->GetXaxis()->SetLabelFont(42);
   Graph_Graph01136->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01136->GetXaxis()->SetTitleFont(42);
   Graph_Graph01136->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01136->GetYaxis()->CenterTitle(true);
   Graph_Graph01136->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01136->GetYaxis()->SetLabelFont(42);
   Graph_Graph01136->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01136->GetYaxis()->SetTitleFont(42);
   Graph_Graph01136->GetZaxis()->SetLabelFont(42);
   Graph_Graph01136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01136);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
