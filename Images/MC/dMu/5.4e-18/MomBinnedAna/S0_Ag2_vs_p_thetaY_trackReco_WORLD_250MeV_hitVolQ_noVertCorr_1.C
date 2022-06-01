void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6905,-1.705108,3408.214,0.4764853);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[12] = {
   186.2273,
   432.2067,
   629.2651,
   873.9168,
   1122.437,
   1372.126,
   1621.121,
   1870.005,
   2118.739,
   2365.057,
   2614.792,
   2827.064};
   Double_t Graph0_fy1061[12] = {
   -0.69192,
   0.05178821,
   -0.134284,
   0.001997258,
   -0.05123259,
   0.01294654,
   -0.02741642,
   -0.01089759,
   -0.0471971,
   -0.03428386,
   -0.01656228,
   -0.005019137};
   Double_t Graph0_fex1061[12] = {
   0.408042,
   0.06172949,
   0.053827,
   0.05299562,
   0.0555768,
   0.05908211,
   0.06403519,
   0.0713159,
   0.08123431,
   0.09781749,
   0.1254996,
   0.1478752};
   Double_t Graph0_fey1061[12] = {
   0.649589,
   0.06109818,
   0.03026011,
   0.02425204,
   0.0213977,
   0.01934651,
   0.01795825,
   0.01719247,
   0.01686841,
   0.01748423,
   0.01841963,
   0.02349907};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,0,3091.351);
   Graph_Graph01061->SetMinimum(-1.486949);
   Graph_Graph01061->SetMaximum(0.2583259);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(1,98);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
