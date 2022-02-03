void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4313,-0.01515491,3406.974,0.02737273);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[11] = {
   451.7994,
   653.446,
   880.5243,
   1123.169,
   1371.058,
   1619.937,
   1866.741,
   2114.974,
   2362.685,
   2613.301,
   2787.6};
   Double_t Graph0_fy1182[11] = {
   -0.0003400661,
   0.004515686,
   0.005567523,
   0.006051091,
   0.00970608,
   0.008721182,
   0.01130378,
   0.00882692,
   0.009241363,
   0.01899543,
   0.01907335};
   Double_t Graph0_fex1182[11] = {
   0.1344131,
   0.1129402,
   0.08165877,
   0.07969477,
   0.08523107,
   0.09432402,
   0.1105355,
   0.1386522,
   0.1809677,
   0.2203638,
   0.2773712};
   Double_t Graph0_fey1182[11] = {
   -0.005738567,
   0.002316,
   0.001615204,
   0.001565276,
   0.001673983,
   0.00185437,
   0.002182894,
   0.002734608,
   0.003568837,
   0.004492077,
   0.01322736};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,218.0438,3021.499);
   Graph_Graph01182->SetMinimum(-0.01090214);
   Graph_Graph01182->SetMaximum(0.02311997);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(0,101);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
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
