void S12_AEDM_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4117,-0.2005506,2745.391,0.3600365);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[11] = {
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
   Double_t Graph0_fy1036[11] = {
   0.07974293,
   0.1456067,
   0.167199,
   0.1447557,
   0.1099195,
   0.1293437,
   0.1607235,
   0.1183932,
   0.06255015,
   0.07918674,
   0.06086423};
   Double_t Graph0_fex1036[11] = {
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
   Double_t Graph0_fey1036[11] = {
   0.1868624,
   0.06275504,
   0.03600529,
   0.02961495,
   0.02704933,
   0.02571585,
   0.02586447,
   0.02728867,
   0.02929445,
   0.02921553,
   0.06505574};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S12_",100,217.5394,3026.263);
   Graph_Graph01036->SetMinimum(-0.1444919);
   Graph_Graph01036->SetMaximum(0.3039778);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(19,82);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
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
