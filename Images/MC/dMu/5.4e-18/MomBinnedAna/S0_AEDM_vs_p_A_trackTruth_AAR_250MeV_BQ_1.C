void S0_AEDM_vs_p_A_trackTruth_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:32:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(6.745611,-0.0003253698,3238.085,6.650354e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[11] = {
   451.7798,
   653.2848,
   879.9136,
   1123.016,
   1371.499,
   1620.744,
   1868.041,
   2116.556,
   2363.192,
   2615.091,
   2792.914};
   Double_t Graph0_fy1040[11] = {
   -3.500191e-05,
   -1.411569e-06,
   4.497317e-08,
   -1.740346e-07,
   -1.937971e-09,
   -2.08518e-07,
   3.493657e-08,
   -5.884004e-08,
   -8.857359e-07,
   -1.143986e-05,
   -0.0001673767};
   Double_t Graph0_fex1040[11] = {
   0.1396251,
   0.1181038,
   0.08604416,
   0.08418618,
   0.0895237,
   0.09880148,
   0.1134313,
   0.1371297,
   0.1717572,
   0.2154084,
   0.2760929};
   Double_t Graph0_fey1040[11] = {
   9.336409e-06,
   6.439432e-07,
   2.1695e-07,
   1.977816e-07,
   2.37411e-07,
   3.23384e-07,
   5.052935e-07,
   9.431662e-07,
   2.077052e-06,
   4.705413e-06,
   9.268082e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S0_",100,217.4851,3027.345);
   Graph_Graph01040->SetMinimum(-0.0002861824);
   Graph_Graph01040->SetMaximum(2.73162e-05);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(5,96);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM}");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
