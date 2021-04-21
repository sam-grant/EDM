void S18_AEDM_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 09:25:19 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-3.618608,3378.375,1.905261);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1196[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1196[30] = {
   -1.503089,
   -1.257453,
   0.5236124,
   0.3801302,
   -0.07617777,
   0.1247252,
   0.218507,
   0.1932638,
   0.06349673,
   0.192285,
   0.06530019,
   0.165518,
   0.2230611,
   0.1453889,
   0.1317237,
   0.2494011,
   0.1469086,
   0.1962759,
   0.1357583,
   0.1198383,
   0.1830325,
   0.1489138,
   0.1166821,
   0.1440954,
   0.1335009,
   0.142502,
   0.1007317,
   0.02459027,
   0.03398249,
   -0.06877631};
   Double_t Graph0_fex1196[30] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1196[30] = {
   1.194874,
   1.083171,
   0.4610034,
   0.1603985,
   0.08904321,
   0.06768443,
   0.05940701,
   0.05489859,
   0.05144588,
   0.04846584,
   0.04622876,
   0.04424448,
   0.04239733,
   0.04070615,
   0.0392559,
   0.03808361,
   0.03677089,
   0.03601702,
   0.03538775,
   0.03473482,
   0.03460624,
   0.03410144,
   0.03371485,
   0.03375997,
   0.03406821,
   0.03437515,
   0.03497099,
   0.03566668,
   0.0405376,
   0.08226475};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1196,Graph0_fy1196,Graph0_fex1196,Graph0_fey1196);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01196 = new TH1F("Graph_Graph01196","S18",100,0,3300);
   Graph_Graph01196->SetMinimum(-3.066221);
   Graph_Graph01196->SetMaximum(1.352874);
   Graph_Graph01196->SetDirectory(0);
   Graph_Graph01196->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01196->SetLineColor(ci);
   Graph_Graph01196->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01196->GetXaxis()->SetRange(1,91);
   Graph_Graph01196->GetXaxis()->CenterTitle(true);
   Graph_Graph01196->GetXaxis()->SetLabelFont(42);
   Graph_Graph01196->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01196->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01196->GetXaxis()->SetTitleFont(42);
   Graph_Graph01196->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01196->GetYaxis()->CenterTitle(true);
   Graph_Graph01196->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01196->GetYaxis()->SetLabelFont(42);
   Graph_Graph01196->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01196->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01196->GetYaxis()->SetTitleFont(42);
   Graph_Graph01196->GetZaxis()->SetLabelFont(42);
   Graph_Graph01196->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01196->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01196);
   
   gre->Draw("ap");
   
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
