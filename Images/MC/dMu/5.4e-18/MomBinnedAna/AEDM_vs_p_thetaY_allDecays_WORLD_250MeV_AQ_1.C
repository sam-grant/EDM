void AEDM_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 00:19:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2727,-0.05953683,3548.454,0.4416708);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t Graph0_fy1036[12] = {
   0.2626014,
   0.3266263,
   0.3126178,
   0.3194014,
   0.304208,
   0.2827338,
   0.2561972,
   0.2322856,
   0.1672556,
   0.1603877,
   0.09422154,
   0.05281578};
   Double_t Graph0_fex1036[12] = {
   0.02929449,
   0.0299445,
   0.03076586,
   0.03189946,
   0.03344109,
   0.03552055,
   0.03823304,
   0.04193465,
   0.04715784,
   0.05508997,
   0.06872581,
   0.0977494};
   Double_t Graph0_fey1036[12] = {
   0.07187952,
   0.02880548,
   0.02123902,
   0.01737657,
   0.01495733,
   0.01332091,
   0.01212811,
   0.01125901,
   0.01061141,
   0.01016645,
   0.009940078,
   0.01022365};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","",100,0,3122.952);
   Graph_Graph01036->SetMinimum(-0.009416065);
   Graph_Graph01036->SetMaximum(0.39155);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(1,101);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
