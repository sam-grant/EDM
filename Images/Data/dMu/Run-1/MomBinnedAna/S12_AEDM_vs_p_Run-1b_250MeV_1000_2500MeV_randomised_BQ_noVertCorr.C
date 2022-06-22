void S12_AEDM_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 15:14:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7988,0.003830076,2703.417,0.06542398);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[11] = {
   455.8613,
   655.7479,
   884.3259,
   1127.626,
   1373.621,
   1620.285,
   1867.089,
   2116.434,
   2359.734,
   2607.778,
   2781.059};
   Double_t Graph0_fy1040[11] = {
   0.3302098,
   0.1430047,
   0.05157488,
   0.01761607,
   0.02358697,
   0.02089592,
   0.01722046,
   0.02231998,
   0.03053507,
   0.01109338,
   0.1395799};
   Double_t Graph0_fex1040[11] = {
   0.1345946,
   0.09489918,
   0.06258617,
   0.0567749,
   0.05548528,
   0.06097837,
   0.07342504,
   0.09176803,
   0.1190434,
   0.1664659,
   0.265778};
   Double_t Graph0_fey1040[11] = {
   0.192045,
   0.04880652,
   0.02453077,
   0.0186492,
   0.01610566,
   0.01537225,
   0.01560887,
   0.01636472,
   0.0178184,
   0.02041853,
   0.07171197};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12",100,223.1668,3013.885);
   Graph_Graph01040->SetMinimum(0.009989466);
   Graph_Graph01040->SetMaximum(0.05926459);
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
