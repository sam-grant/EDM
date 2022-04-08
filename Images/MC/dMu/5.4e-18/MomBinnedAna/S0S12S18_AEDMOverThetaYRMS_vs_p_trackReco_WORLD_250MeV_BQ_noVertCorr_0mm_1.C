void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1816,-0.01182073,3376.429,0.03724716);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[11] = {
   451.7157,
   653.3507,
   880.1781,
   1123.184,
   1371.195,
   1620.115,
   1867.188,
   2115.267,
   2363.117,
   2614.283,
   2788.487};
   Double_t Graph0_fy1219[11] = {
   0.0001332181,
   0.005772836,
   0.006289652,
   0.007098233,
   0.01074511,
   0.01057894,
   0.01280884,
   0.009047068,
   0.008547064,
   0.01231199,
   0.02075536};
   Double_t Graph0_fex1219[11] = {
   0.08814924,
   0.07472162,
   0.05425532,
   0.05305649,
   0.05669065,
   0.06278754,
   0.07311978,
   0.09089229,
   0.1177353,
   0.1440608,
   0.177481};
   Double_t Graph0_fey1219[11] = {
   0.003775967,
   0.001532598,
   0.001072781,
   0.001040023,
   0.00111342,
   0.001233839,
   0.001440824,
   0.001792801,
   0.002320472,
   0.002919651,
   0.008313811};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,217.9239,3022.368);
   Graph_Graph01219->SetMinimum(-0.006913942);
   Graph_Graph01219->SetMaximum(0.03234037);
   Graph_Graph01219->SetDirectory(0);
   Graph_Graph01219->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01219->SetLineColor(ci);
   Graph_Graph01219->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01219->GetXaxis()->SetRange(0,100);
   Graph_Graph01219->GetXaxis()->CenterTitle(true);
   Graph_Graph01219->GetXaxis()->SetLabelFont(42);
   Graph_Graph01219->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01219->GetXaxis()->SetTitleFont(42);
   Graph_Graph01219->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01219->GetYaxis()->CenterTitle(true);
   Graph_Graph01219->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01219->GetYaxis()->SetLabelFont(42);
   Graph_Graph01219->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01219->GetYaxis()->SetTitleFont(42);
   Graph_Graph01219->GetZaxis()->SetLabelFont(42);
   Graph_Graph01219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01219);
   
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
