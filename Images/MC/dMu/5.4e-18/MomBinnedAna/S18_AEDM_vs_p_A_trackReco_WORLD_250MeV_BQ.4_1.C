void S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0172,-1.405489e-05,3406.604,2.305154e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
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
   Double_t Graph0_fy1135[11] = {
   -3.313161e-06,
   1.919206e-07,
   9.297172e-08,
   8.982168e-08,
   1.789233e-07,
   3.997904e-07,
   4.018834e-07,
   4.919352e-07,
   8.812339e-07,
   3.725405e-06,
   7.297485e-06};
   Double_t Graph0_fex1135[11] = {
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
   Double_t Graph0_fey1135[11] = {
   1.918466e-06,
   1.277719e-07,
   4.289918e-08,
   3.909388e-08,
   4.851126e-08,
   6.613928e-08,
   1.082491e-07,
   2.09344e-07,
   4.575353e-07,
   8.433968e-07,
   2.191369e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,218.3733,3021.213);
   Graph_Graph01135->SetMinimum(-1.034425e-05);
   Graph_Graph01135->SetMaximum(1.934089e-05);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,101);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
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
