void S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.859,12.32257,3376.397,13.15179);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1138[11] = {
   452.0347,
   653.2816,
   880.567,
   1123.189,
   1370.963,
   1619.706,
   1866.59,
   2114.577,
   2363.22,
   2612.648,
   2788.377};
   Double_t Graph0_fy1138[11] = {
   12.95007,
   12.9971,
   12.92215,
   12.87606,
   12.78117,
   12.74495,
   12.72927,
   12.66948,
   12.62711,
   12.49209,
   12.60483};
   Double_t Graph0_fex1138[11] = {
   0.146182,
   0.1236488,
   0.08964578,
   0.0877033,
   0.09400192,
   0.1046896,
   0.1232978,
   0.1552484,
   0.2042927,
   0.2449465,
   0.314428};
   Double_t Graph0_fey1138[11] = {
   0.04049626,
   0.01648539,
   0.0114474,
   0.01108437,
   0.01180334,
   0.01313117,
   0.01548465,
   0.0194019,
   0.02537898,
   0.03131942,
   0.09482946};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1138,Graph0_fy1138,Graph0_fex1138,Graph0_fey1138);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01138 = new TH1F("Graph_Graph01138","S18_",100,218.2083,3022.372);
   Graph_Graph01138->SetMinimum(12.40549);
   Graph_Graph01138->SetMaximum(13.06887);
   Graph_Graph01138->SetDirectory(0);
   Graph_Graph01138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01138->SetLineColor(ci);
   Graph_Graph01138->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01138->GetXaxis()->SetRange(0,100);
   Graph_Graph01138->GetXaxis()->CenterTitle(true);
   Graph_Graph01138->GetXaxis()->SetLabelFont(42);
   Graph_Graph01138->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01138->GetXaxis()->SetTitleFont(42);
   Graph_Graph01138->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01138->GetYaxis()->CenterTitle(true);
   Graph_Graph01138->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01138->GetYaxis()->SetLabelFont(42);
   Graph_Graph01138->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01138->GetYaxis()->SetTitleFont(42);
   Graph_Graph01138->GetZaxis()->SetLabelFont(42);
   Graph_Graph01138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01138->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01138);
   
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
