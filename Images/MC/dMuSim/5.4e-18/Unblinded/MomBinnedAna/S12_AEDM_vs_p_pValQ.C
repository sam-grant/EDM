void S12_AEDM_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:28:52 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-5.526991,3378.375,20.67608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[30] = {
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
   Double_t Graph0_fy1014[30] = {
   15.5677,
   -0.1591612,
   0.9002583,
   0.03769603,
   0.07169569,
   0.07146342,
   0.1643421,
   0.2848761,
   0.284255,
   0.1385411,
   0.17739,
   0.1957424,
   0.06760192,
   0.2411831,
   0.2236661,
   0.1743346,
   0.1777029,
   0.1042253,
   0.1936406,
   0.1118323,
   0.09013172,
   0.1291992,
   0.1454179,
   0.1046174,
   0.113554,
   0.1361007,
   0.1273436,
   0.112757,
   0.02167366,
   -0.1410962};
   Double_t Graph0_fex1014[30] = {
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
   Double_t Graph0_fey1014[30] = {
   0.7412008,
   1.000652,
   0.4690058,
   0.1574434,
   0.08844576,
   0.06775463,
   0.05936614,
   0.05480363,
   0.05133573,
   0.0484237,
   0.04591429,
   0.04407104,
   0.0422116,
   0.04047584,
   0.03896883,
   0.03776327,
   0.03672117,
   0.03572567,
   0.03498514,
   0.03454018,
   0.03418454,
   0.03380426,
   0.03363294,
   0.03357406,
   0.03369805,
   0.03412808,
   0.03456899,
   0.03534952,
   0.03927544,
   0.07788128};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","S12",100,0,3300);
   Graph_Graph01014->SetMinimum(-2.906684);
   Graph_Graph01014->SetMaximum(18.05577);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01014->GetXaxis()->SetRange(1,91);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("ap");
   
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
