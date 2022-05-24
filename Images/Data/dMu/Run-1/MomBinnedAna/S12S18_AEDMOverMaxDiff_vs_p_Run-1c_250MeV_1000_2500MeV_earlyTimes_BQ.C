void S12S18_AEDMOverMaxDiff_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 13:19:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2432,0.0004817854,2704.44,0.00829024);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
   456.1939,
   654.8477,
   884.126,
   1127.672,
   1373.377,
   1620.055,
   1867.062,
   2116.138,
   2359.718,
   2607.233,
   2782.11};
   Double_t Graph0_fy1115[11] = {
   -0.006919724,
   0.001667657,
   0.001540526,
   0.002119891,
   0.001832929,
   0.002926,
   0.005951661,
   0.004379755,
   0.003116817,
   0.006492879,
   0.007492078};
   Double_t Graph0_fex1115[11] = {
   0.1219767,
   0.0852733,
   0.05670851,
   0.05129367,
   0.05046427,
   0.05574092,
   0.06765295,
   0.08499206,
   0.110715,
   0.1542762,
   0.2603046};
   Double_t Graph0_fey1115[11] = {
   -0.005460341,
   0.001775318,
   0.001134617,
   0.00100597,
   0.001001852,
   0.001108275,
   0.00133731,
   0.001677684,
   0.002215816,
   0.00320355,
   0.01394388};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,223.442,3015.001);
   Graph_Graph01115->SetMinimum(0.001262631);
   Graph_Graph01115->SetMaximum(0.007509395);
   Graph_Graph01115->SetDirectory(0);
   Graph_Graph01115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01115->SetLineColor(ci);
   Graph_Graph01115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01115->GetXaxis()->SetRange(28,82);
   Graph_Graph01115->GetXaxis()->CenterTitle(true);
   Graph_Graph01115->GetXaxis()->SetLabelFont(42);
   Graph_Graph01115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01115->GetXaxis()->SetTitleFont(42);
   Graph_Graph01115->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01115->GetYaxis()->CenterTitle(true);
   Graph_Graph01115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01115->GetYaxis()->SetLabelFont(42);
   Graph_Graph01115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01115->GetYaxis()->SetTitleFont(42);
   Graph_Graph01115->GetZaxis()->SetLabelFont(42);
   Graph_Graph01115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01115);
   
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
