void S18_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:42:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.9189,-0.0009471476,2716.257,0.006217495);
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
   -0.0001091279,
   0.003563834,
   0.003684841,
   0.001183325,
   -0.0003070056,
   0.001292706,
   0.001782834,
   0.004652615,
   -1.380819e-06,
   0.002936495,
   0.002961137};
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
   -0.005713812,
   0.001862943,
   0.001211138,
   0.00108029,
   -0.001083984,
   0.001202803,
   0.001464818,
   0.001847849,
   -0.00246678,
   0.003497007,
   0.01327058};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,222.149,3028.459);
   Graph_Graph01082->SetMinimum(-0.0002306833);
   Graph_Graph01082->SetMaximum(0.00550103);
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
