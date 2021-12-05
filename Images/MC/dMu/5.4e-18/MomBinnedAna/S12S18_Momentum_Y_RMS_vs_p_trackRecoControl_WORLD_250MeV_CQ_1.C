void S12S18_Momentum_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 20:08:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3314,11.10056,3033.782,28.49451);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1088[12] = {
   188.9695,
   434.5943,
   652.6751,
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353,
   2824.104};
   Double_t Graph0_fy1088[12] = {
   18.64768,
   16.91728,
   18.32148,
   19.64334,
   20.84306,
   21.74584,
   22.18035,
   22.29627,
   21.89794,
   20.91119,
   19.03046,
   16.25899};
   Double_t Graph0_fex1088[12] = {
   0.713896,
   0.1447174,
   0.07967201,
   0.05375521,
   0.04973886,
   0.04976407,
   0.05188342,
   0.0561289,
   0.06355781,
   0.07480592,
   0.09437211,
   0.1178736};
   Double_t Graph0_fey1088[12] = {
   0.2209652,
   0.03396825,
   0.0150895,
   0.010575,
   0.01019848,
   0.01064813,
   0.01134919,
   0.0123617,
   0.01376302,
   0.01550253,
   0.01788147,
   0.02633705};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1088,Graph0_fy1088,Graph0_fex1088,Graph0_fey1088);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01088 = new TH1F("Graph_Graph01088","S12S18_",100,0,3087.819);
   Graph_Graph01088->SetMinimum(12.83996);
   Graph_Graph01088->SetMaximum(26.75512);
   Graph_Graph01088->SetDirectory(0);
   Graph_Graph01088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01088->SetLineColor(ci);
   Graph_Graph01088->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01088->GetXaxis()->SetRange(25,90);
   Graph_Graph01088->GetXaxis()->CenterTitle(true);
   Graph_Graph01088->GetXaxis()->SetLabelFont(42);
   Graph_Graph01088->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01088->GetXaxis()->SetTitleFont(42);
   Graph_Graph01088->GetYaxis()->CenterTitle(true);
   Graph_Graph01088->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01088->GetYaxis()->SetLabelFont(42);
   Graph_Graph01088->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01088->GetYaxis()->SetTitleFont(42);
   Graph_Graph01088->GetZaxis()->SetLabelFont(42);
   Graph_Graph01088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01088);
   
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
