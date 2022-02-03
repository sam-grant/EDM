void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.314,-0.5652523,3406.951,0.1195988);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[11] = {
   451.9422,
   653.2273,
   880.2966,
   1123.19,
   1371.008,
   1619.961,
   1866.763,
   2115.03,
   2362.81,
   2613.821,
   2787.502};
   Double_t Graph0_fy1168[11] = {
   -0.1851918,
   -0.02627392,
   -0.01894761,
   -0.01653711,
   -0.004347018,
   -0.01564044,
   -0.01143106,
   0.04313283,
   0.01630778,
   0.01407429,
   -0.06641019};
   Double_t Graph0_fex1168[11] = {
   0.1840185,
   0.154634,
   0.1118548,
   0.1091122,
   0.1164788,
   0.1292152,
   0.1512967,
   0.189677,
   0.2474458,
   0.3009601,
   0.3776506};
   Double_t Graph0_fey1168[11] = {
   0.1716708,
   0.05789373,
   0.03315366,
   0.02715244,
   0.02496592,
   0.02386588,
   0.02423645,
   0.0259731,
   0.02872894,
   0.02961376,
   0.07133023};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","S12S18_",100,218.146,3021.491);
   Graph_Graph01168->SetMinimum(-0.4967672);
   Graph_Graph01168->SetMaximum(0.05111372);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01168->GetXaxis()->SetRange(0,101);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
