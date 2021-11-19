void S12_c_vs_p_thetaY_trackTruth_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:38:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(6.88508,-2.168934,3236.917,6.77486);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[11] = {
   451.7407,
   653.3858,
   880.2538,
   1123.051,
   1371.173,
   1620.27,
   1866.763,
   2114.834,
   2362.625,
   2614.174,
   2791.873};
   Double_t Graph0_fy1049[11] = {
   5.152123,
   -0.2960944,
   -0.6528231,
   -0.4477272,
   -0.3905772,
   -0.3482391,
   -0.1996901,
   -0.2320776,
   -0.1855013,
   -0.1312386,
   -0.1681378};
   Double_t Graph0_fex1049[11] = {
   0.1410697,
   0.1188852,
   0.08610031,
   0.08408792,
   0.08950711,
   0.09889493,
   0.1153312,
   0.1440061,
   0.1882854,
   0.2316927,
   0.3300189};
   Double_t Graph0_fey1049[11] = {
   0.1321044,
   0.04451244,
   0.02547827,
   0.02093765,
   0.01911886,
   0.0182615,
   0.01845774,
   0.01971194,
   0.02180001,
   0.02267392,
   0.05254028};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12_",100,217.5394,3026.263);
   Graph_Graph01049->SetMinimum(-1.274554);
   Graph_Graph01049->SetMaximum(5.880481);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(5,96);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
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
