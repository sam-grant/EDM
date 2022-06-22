void S12S18_eAEDM_vs_p_Run-1a_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:42:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.113,0.007006315,2711.125,0.02120664);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1113[11] = {
   456.0372,
   655.0714,
   884.0294,
   1127.741,
   1373.414,
   1620.078,
   1867.044,
   2116.141,
   2359.798,
   2607.74,
   2789.077};
   Double_t Graph0_fy1113[11] = {
   0.1302864,
   0.03292616,
   0.01675403,
   0.01270729,
   0.01101816,
   0.01053278,
   0.01074803,
   0.01137401,
   0.01242233,
   0.01431327,
   0.05161551};
   Double_t Graph0_fex1113[11] = {
   0.09287199,
   0.06456789,
   0.04300393,
   0.0389422,
   0.03819327,
   0.04210601,
   0.05104288,
   0.06407958,
   0.0835768,
   0.1155309,
   0.2148337};
   Double_t Graph0_fey1113[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1113,Graph0_fy1113,Graph0_fex1113,Graph0_fey1113);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01113 = new TH1F("Graph_Graph01113","S12S18",100,222.6095,3022.627);
   Graph_Graph01113->SetMinimum(0.008426348);
   Graph_Graph01113->SetMaximum(0.01978661);
   Graph_Graph01113->SetDirectory(0);
   Graph_Graph01113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01113->SetLineColor(ci);
   Graph_Graph01113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01113->GetXaxis()->SetRange(28,82);
   Graph_Graph01113->GetXaxis()->CenterTitle(true);
   Graph_Graph01113->GetXaxis()->SetLabelFont(42);
   Graph_Graph01113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01113->GetXaxis()->SetTitleFont(42);
   Graph_Graph01113->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01113->GetYaxis()->CenterTitle(true);
   Graph_Graph01113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01113->GetYaxis()->SetLabelFont(42);
   Graph_Graph01113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01113->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01113->GetYaxis()->SetTitleFont(42);
   Graph_Graph01113->GetZaxis()->SetLabelFont(42);
   Graph_Graph01113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01113);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
