void S0_N_vs_p_trackTruth_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4711,-84426.27,2746.359,900551.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[11] = {
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
   Double_t Graph0_fy1031[11] = {
   55350,
   339788,
   691572,
   730561,
   645911,
   530155,
   401272,
   273941,
   172674,
   106521,
   15635};
   Double_t Graph0_fex1031[11] = {
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
   Double_t Graph0_fey1031[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S0_",100,217.4851,3027.345);
   Graph_Graph01031->SetMinimum(14071.5);
   Graph_Graph01031->SetMaximum(802053.6);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(19,82);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
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
