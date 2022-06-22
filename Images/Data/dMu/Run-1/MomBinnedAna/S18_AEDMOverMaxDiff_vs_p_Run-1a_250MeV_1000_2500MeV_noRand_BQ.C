void S18_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:18:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.9189,-0.0008986485,2716.257,0.006125718);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   456.1362,
   653.9037,
   883.6087,
   1127.512,
   1373.073,
   1619.72,
   1866.776,
   2115.941,
   2359.778,
   2607.771,
   2794.274};
   Double_t Graph0_fy1082[11] = {
   0.0002550382,
   0.003847888,
   0.003857388,
   0.001175706,
   -0.0002632735,
   0.001283515,
   0.001804637,
   0.004585709,
   -0.0001404619,
   0.003232171,
   0.002797218};
   Double_t Graph0_fex1082[11] = {
   0.1280293,
   0.08971398,
   0.06075637,
   0.05517119,
   0.05468684,
   0.06057643,
   0.07429104,
   0.09355404,
   0.1235159,
   0.1686043,
   0.3255342};
   Double_t Graph0_fey1082[11] = {
   0.005713202,
   0.001862964,
   0.001211183,
   0.001080338,
   -0.001084016,
   0.001202799,
   0.001464874,
   0.001847642,
   -0.002466734,
   0.003495424,
   0.01328945};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,222.149,3028.459);
   Graph_Graph01082->SetMinimum(-0.0001962118);
   Graph_Graph01082->SetMaximum(0.005423282);
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
