void S18_AEDM_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:39 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-18.86012,3378.375,4.468925);
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
   -13.83486,
   -0.2837521,
   0.1119842,
   0.3633807,
   0.03324112,
   0.1181987,
   0.1654105,
   0.181972,
   0.1360343,
   0.248451,
   0.08576411,
   0.1580336,
   0.222627,
   0.1688917,
   0.1689515,
   0.2035268,
   0.1525698,
   0.2021451,
   0.1320741,
   0.1530394,
   0.1785469,
   0.1613094,
   0.114795,
   0.1442168,
   0.09190743,
   0.1363224,
   0.07909906,
   0.0468704,
   0.03835676,
   -0.08100487};
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
   1.137085,
   0.8645036,
   0.3795192,
   0.1377376,
   0.07695231,
   0.05853263,
   0.05097032,
   0.04660648,
   0.04322797,
   0.0404034,
   0.03819419,
   0.03627039,
   0.03446105,
   0.03287703,
   0.0315204,
   0.03043155,
   0.02934715,
   0.02861762,
   0.02808187,
   0.02752253,
   0.02733794,
   0.02702509,
   0.02690321,
   0.02709054,
   0.02736704,
   0.0279467,
   0.02843561,
   0.02969898,
   0.03467186,
   0.08009655};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1196,Graph0_fy1196,Graph0_fex1196,Graph0_fey1196);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01196 = new TH1F("Graph_Graph01196","S18",100,0,3300);
   Graph_Graph01196->SetMinimum(-16.52721);
   Graph_Graph01196->SetMaximum(2.136021);
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
