void S0_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522.1276,-0.002033362,2726.666,0.001762942);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[12] = {
   177.4115,
   433.2224,
   628.2925,
   872.9432,
   1121.61,
   1371.594,
   1620.437,
   1869.063,
   2118.037,
   2364.149,
   2613.535,
   2828.661};
   Double_t Graph0_fy1034[12] = {
   -0.001400644,
   6.471707e-05,
   0.0002085353,
   0.0003650486,
   0.0004766896,
   0.0006928811,
   0.0009374257,
   0.0009807777,
   0.0008231472,
   0.0007316249,
   0.0004856146,
   0.000333219};
   Double_t Graph0_fex1034[12] = {
   0.731188,
   0.06993383,
   0.06316248,
   0.06372699,
   0.06826331,
   0.07385007,
   0.08136207,
   0.09223897,
   0.1074681,
   0.131593,
   0.1737833,
   0.20897};
   Double_t Graph0_fey1034[12] = {
   -0.001002903,
   6.88339e-05,
   4.035889e-05,
   4.285923e-05,
   7.100809e-05,
   8.422939e-05,
   0.0001154689,
   0.000149447,
   0.0001347785,
   0.0001491419,
   0.0002176298,
   0.0002441027};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S0_",100,0,3094.089);
   Graph_Graph01034->SetMinimum(-0.001653731);
   Graph_Graph01034->SetMaximum(0.001383312);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(25,81);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
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
