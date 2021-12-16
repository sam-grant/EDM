void S12S18_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8371,6.708053,3508.534,57.40643);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1183[12] = {
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
   Double_t Graph0_fy1183[12] = {
   30.43419,
   19.23147,
   16.55904,
   15.43836,
   14.87758,
   14.71997,
   14.82552,
   15.16854,
   15.61318,
   16.2048,
   16.93188,
   17.9864};
   Double_t Graph0_fex1183[12] = {
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
   Double_t Graph0_fey1183[12] = {
   0.5115171,
   0.03888122,
   0.01366599,
   0.008315422,
   0.007277111,
   0.007200981,
   0.007576385,
   0.008397999,
   0.009806767,
   0.01202266,
   0.01597909,
   0.02950493};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1183,Graph0_fy1183,Graph0_fex1183,Graph0_fey1183);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01183 = new TH1F("Graph_Graph01183","S12S18_",100,0,3087.819);
   Graph_Graph01183->SetMinimum(11.77789);
   Graph_Graph01183->SetMaximum(52.33659);
   Graph_Graph01183->SetDirectory(0);
   Graph_Graph01183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01183->SetLineColor(ci);
   Graph_Graph01183->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01183->GetXaxis()->SetRange(1,101);
   Graph_Graph01183->GetXaxis()->CenterTitle(true);
   Graph_Graph01183->GetXaxis()->SetLabelFont(42);
   Graph_Graph01183->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01183->GetXaxis()->SetTitleFont(42);
   Graph_Graph01183->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01183->GetYaxis()->CenterTitle(true);
   Graph_Graph01183->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01183->GetYaxis()->SetLabelFont(42);
   Graph_Graph01183->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01183->GetYaxis()->SetTitleFont(42);
   Graph_Graph01183->GetZaxis()->SetLabelFont(42);
   Graph_Graph01183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01183);
   
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
