void S0_AEDM_vs_p_trackRecoControl_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.8164,-0.3317973,2745.291,1.249687);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[11] = {
   453.3151,
   656.6728,
   884.0304,
   1123.299,
   1363.41,
   1601.772,
   1825.357,
   2101.201,
   2414.13,
   2640.4,
   2791.653};
   Double_t Graph0_fy1026[11] = {
   0.3617341,
   0.1790419,
   0.1040194,
   0.1423474,
   0.1941074,
   0.128313,
   0.4386583,
   0.5984919,
   0.2500757,
   0.0779679,
   0.0249186};
   Double_t Graph0_fex1026[11] = {
   0.2793787,
   0.2094921,
   0.1416291,
   0.130435,
   0.1508062,
   0.2151004,
   0.4392332,
   2.531908,
   0.9989019,
   0.5207588,
   0.4189411};
   Double_t Graph0_fey1026[11] = {
   0.4062069,
   0.1163619,
   0.06066696,
   0.04666526,
   0.04630364,
   0.05768482,
   0.1107064,
   0.387614,
   0.1756026,
   0.06632252,
   0.09313522};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S0_",100,219.1321,3025.975);
   Graph_Graph01026->SetMinimum(-0.1736489);
   Graph_Graph01026->SetMaximum(1.091538);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(19,82);
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
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
