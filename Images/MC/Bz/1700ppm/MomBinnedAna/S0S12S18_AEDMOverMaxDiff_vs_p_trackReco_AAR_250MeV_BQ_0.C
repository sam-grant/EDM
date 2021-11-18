void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:39:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5769,-0.002143531,2741.742,0.006678086);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[11] = {
   451.9836,
   653.0943,
   880.2595,
   1123.139,
   1371.097,
   1620.518,
   1867.111,
   2115.595,
   2362.886,
   2614.277,
   2788.204};
   Double_t Graph0_fy1074[11] = {
   -5.954885e-05,
   0.0003466788,
   -3.54753e-05,
   0.0003884457,
   0.0008455558,
   -0.0003234639,
   0.00029295,
   7.237173e-05,
   0.00179688,
   -0.0006732615,
   0.002893978};
   Double_t Graph0_fex1074[11] = {
   0.1392502,
   0.1178281,
   0.08532408,
   0.08348705,
   0.08916792,
   0.0982236,
   0.1146631,
   0.1418068,
   0.1822846,
   0.2250869,
   0.2704836};
   Double_t Graph0_fey1074[11] = {
   -0.001087379,
   0.0003923419,
   -0.0002530163,
   0.0001966638,
   0.0002874546,
   -0.0003165409,
   0.0003634551,
   0.0004475669,
   0.0006151913,
   -0.0008253392,
   0.002313839};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S0S12S18_",100,218.1813,3022.138);
   Graph_Graph01074->SetMinimum(-0.001261369);
   Graph_Graph01074->SetMaximum(0.005795924);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01074->GetXaxis()->SetRange(19,82);
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
