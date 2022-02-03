void S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0172,-1.051443e-05,3406.604,7.976713e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[11] = {
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
   Double_t Graph0_fy1134[11] = {
   1.552496e-05,
   -3.014942e-07,
   -6.705286e-08,
   -8.257116e-08,
   -1.045421e-07,
   -3.454183e-08,
   -1.297098e-07,
   1.087825e-08,
   5.093873e-07,
   -1.14422e-07,
   -6.16975e-07};
   Double_t Graph0_fex1134[11] = {
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
   Double_t Graph0_fey1134[11] = {
   1.388971e-06,
   9.214366e-08,
   3.07337e-08,
   2.777424e-08,
   3.440523e-08,
   4.790254e-08,
   8.218356e-08,
   1.744865e-07,
   4.366153e-07,
   9.623508e-07,
   2.918152e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S18_",100,218.3733,3021.213);
   Graph_Graph01134->SetMinimum(-1.486274e-06);
   Graph_Graph01134->SetMaximum(7.073898e-05);
   Graph_Graph01134->SetDirectory(0);
   Graph_Graph01134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01134->SetLineColor(ci);
   Graph_Graph01134->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01134->GetXaxis()->SetRange(0,101);
   Graph_Graph01134->GetXaxis()->CenterTitle(true);
   Graph_Graph01134->GetXaxis()->SetLabelFont(42);
   Graph_Graph01134->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01134->GetXaxis()->SetTitleFont(42);
   Graph_Graph01134->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01134->GetYaxis()->CenterTitle(true);
   Graph_Graph01134->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01134->GetYaxis()->SetLabelFont(42);
   Graph_Graph01134->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01134->GetYaxis()->SetTitleFont(42);
   Graph_Graph01134->GetZaxis()->SetLabelFont(42);
   Graph_Graph01134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01134);
   
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
