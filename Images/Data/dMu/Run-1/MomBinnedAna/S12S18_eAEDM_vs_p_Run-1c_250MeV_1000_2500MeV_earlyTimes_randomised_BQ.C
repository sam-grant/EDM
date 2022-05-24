void S12S18_eAEDM_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 12 15:35:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2687,0.009302919,2704.427,0.02795746);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1113[11] = {
   456.2261,
   654.8472,
   884.1329,
   1127.672,
   1373.373,
   1620.057,
   1867.064,
   2116.137,
   2359.716,
   2607.214,
   2782.096};
   Double_t Graph0_fy1113[11] = {
   0.1701881,
   0.04343017,
   0.02209062,
   0.01676031,
   0.0145596,
   0.01396033,
   0.01426776,
   0.01506456,
   0.01638425,
   0.01889391,
   0.07037948};
   Double_t Graph0_fex1113[11] = {
   0.1219439,
   0.08528496,
   0.05671517,
   0.05129779,
   0.05046572,
   0.05574313,
   0.06765675,
   0.08499686,
   0.1107314,
   0.1542779,
   0.2601466};
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
   
   TH1F *Graph_Graph01113 = new TH1F("Graph_Graph01113","S12S18",100,223.4789,3014.981);
   Graph_Graph01113->SetMinimum(0.01116837);
   Graph_Graph01113->SetMaximum(0.02609201);
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
