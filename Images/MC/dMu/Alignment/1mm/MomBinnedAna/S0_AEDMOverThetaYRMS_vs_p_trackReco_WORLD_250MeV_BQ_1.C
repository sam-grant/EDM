void S0_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4953,-0.003181706,3409.331,0.05560956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[11] = {
   451.3821,
   653.3903,
   879.7967,
   1123.261,
   1371.434,
   1620.943,
   1867.966,
   2116.623,
   2363.769,
   2615.976,
   2789.306};
   Double_t Graph0_fy1071[11] = {
   0.004633951,
   0.004216554,
   0.007728924,
   0.009677862,
   0.0139541,
   0.01175102,
   0.01479827,
   0.01439432,
   0.009125354,
   0.003232148,
   0.01419684};
   Double_t Graph0_fex1071[11] = {
   0.1884824,
   0.1599355,
   0.1164829,
   0.1138846,
   0.1213846,
   0.1341141,
   0.1537254,
   0.1860182,
   0.2335834,
   0.2922443,
   0.3358488};
   Double_t Graph0_fey1071[11] = {
   0.008084299,
   0.003276189,
   0.002300616,
   0.002231308,
   0.002383907,
   0.002631731,
   0.003025212,
   0.003674999,
   0.004632304,
   0.005823729,
   0.01554257};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S0_",100,217.3487,3023.487);
   Graph_Graph01071->SetMinimum(0.002697421);
   Graph_Graph01071->SetMaximum(0.04973043);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01071->GetXaxis()->SetRange(0,101);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
