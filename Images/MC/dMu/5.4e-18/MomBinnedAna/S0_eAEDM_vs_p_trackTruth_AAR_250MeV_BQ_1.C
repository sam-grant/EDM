void S0_eAEDM_vs_p_trackTruth_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4711,-0.01509046,2746.359,0.2277198);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[11] = {
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
   Double_t Graph0_fy1032[11] = {
   0.1872514,
   0.06256606,
   0.03621898,
   0.02971349,
   0.02710641,
   0.02576139,
   0.02537791,
   0.02606917,
   0.02697364,
   0.02684109,
   0.0554834};
   Double_t Graph0_fex1032[11] = {
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
   Double_t Graph0_fey1032[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S0_",100,217.4851,3027.345);
   Graph_Graph01032->SetMinimum(0.009190564);
   Graph_Graph01032->SetMaximum(0.2034388);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(19,82);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
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
