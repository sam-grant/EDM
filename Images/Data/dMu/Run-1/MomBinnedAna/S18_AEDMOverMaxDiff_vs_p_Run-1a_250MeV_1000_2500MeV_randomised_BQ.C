#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 11:18:47 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1394,-0.002809509,2704.191,0.006477781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   456.1488,
   653.8919,
   883.5254,
   1127.341,
   1373.07,
   1619.549,
   1866.692,
   2115.978,
   2359.682,
   2607.194,
   2781.755};
   Double_t Graph0_fy1082[11] = {
   0.005467809,
   -0.0002055025,
   -0.0005274291,
   -0.001007048,
   0.002409258,
   0.001129146,
   0.002753168,
   -0.002467263,
   0.004579512,
   0.004627547,
   -0.007971688};
   Double_t Graph0_fex1082[11] = {
   0.1558733,
   0.109756,
   0.07461652,
   0.06791802,
   0.06754704,
   0.07503288,
   0.09224771,
   0.1164614,
   0.1541804,
   0.210593,
   0.3609284};
   Double_t Graph0_fey1082[11] = {
   0.006973968,
   -0.002282324,
   -0.001490758,
   -0.00133235,
   0.001341454,
   0.001493459,
   0.001821897,
   -0.002304841,
   0.003087101,
   0.004385452,
   -0.01913324};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,223.3806,3014.729);
   Graph_Graph01082->SetMinimum(-0.00188078);
   Graph_Graph01082->SetMaximum(0.005549052);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(28,82);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
