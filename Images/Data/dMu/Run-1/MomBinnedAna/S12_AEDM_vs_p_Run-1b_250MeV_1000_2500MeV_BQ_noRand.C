void S12_AEDM_vs_p_Run-1b_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:51:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0513,-0.0010036,2704.957,0.1029724);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[11] = {
   455.871,
   656.1653,
   884.4154,
   1127.871,
   1373.751,
   1620.428,
   1867.178,
   2116.47,
   2359.751,
   2608.045,
   2782.691};
   Double_t Graph0_fy1040[11] = {
   0.2909778,
   0.1498734,
   0.08056191,
   0.02719471,
   0.0143422,
   0.0268796,
   0.02259567,
   0.0487033,
   0.03404282,
   0.009994742,
   0.091614};
   Double_t Graph0_fex1040[11] = {
   0.1125139,
   0.07884383,
   0.05171606,
   0.04673162,
   0.04537685,
   0.04971109,
   0.05973468,
   0.07466906,
   0.09662581,
   0.1354232,
   0.2254611};
   Double_t Graph0_fey1040[11] = {
   0.1601735,
   0.04042998,
   0.02025039,
   0.01531992,
   0.0131478,
   0.01250955,
   0.01266649,
   0.01328871,
   0.01445466,
   0.01670677,
   0.06069005};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12",100,223.0427,3015.632);
   Graph_Graph01040->SetMinimum(0.009394);
   Graph_Graph01040->SetMaximum(0.09257479);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(28,82);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
