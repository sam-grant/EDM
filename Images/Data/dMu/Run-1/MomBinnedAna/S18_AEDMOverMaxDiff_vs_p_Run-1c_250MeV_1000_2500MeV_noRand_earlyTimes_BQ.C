void S18_AEDMOverMaxDiff_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.484,-0.002202947,2705.528,0.01038972);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   456.3389,
   653.7601,
   883.7113,
   1127.505,
   1372.948,
   1619.69,
   1866.661,
   2115.865,
   2359.718,
   2606.464,
   2783.078};
   Double_t Graph0_fy1082[11] = {
   -0.001268684,
   0.002433072,
   0.003331409,
   0.000989663,
   0.0001003224,
   0.001234197,
   0.006208854,
   0.005061268,
   -0.001190373,
   0.008237796,
   0.0117386};
   Double_t Graph0_fex1082[11] = {
   0.1715811,
   0.120442,
   0.08157944,
   0.07389557,
   0.07350764,
   0.08176138,
   0.1004549,
   0.1271775,
   0.167612,
   0.2315857,
   0.4153367};
   Double_t Graph0_fey1082[11] = {
   -0.007585586,
   0.002489038,
   0.001628082,
   0.001450868,
   0.001458806,
   0.001629775,
   0.001987825,
   0.002516018,
   -0.00334938,
   0.004807033,
   0.02108845};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,223.4347,3016.226);
   Graph_Graph01082->SetMinimum(-0.0009436805);
   Graph_Graph01082->SetMaximum(0.009130449);
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
