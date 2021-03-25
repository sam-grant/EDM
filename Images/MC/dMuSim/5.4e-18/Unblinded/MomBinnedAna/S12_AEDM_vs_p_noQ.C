void S12_AEDM_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:27:09 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-10.13676,3378.375,3.55472);
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
   -6.276479,
   -0.9527241,
   0.8918606,
   -0.01427804,
   0.05384436,
   0.04946192,
   0.142049,
   0.2462207,
   0.2706909,
   0.149768,
   0.159984,
   0.1365846,
   0.1054037,
   0.2173154,
   0.199845,
   0.1826299,
   0.1760789,
   0.1207582,
   0.1650844,
   0.1068513,
   0.1243868,
   0.1370992,
   0.1549806,
   0.1243397,
   0.09008065,
   0.09383511,
   0.1302812,
   0.1105297,
   0.06422719,
   -0.05861488};
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
   1.578369,
   0.8194422,
   0.380946,
   0.1347844,
   0.07614738,
   0.0581971,
   0.05069768,
   0.04632633,
   0.04290913,
   0.04008737,
   0.03778914,
   0.0359298,
   0.03417127,
   0.03259288,
   0.03120855,
   0.03009018,
   0.02910479,
   0.02827489,
   0.02762822,
   0.02717584,
   0.02683647,
   0.02674196,
   0.02663502,
   0.02668933,
   0.02688013,
   0.02734722,
   0.02797242,
   0.02905025,
   0.0331633,
   0.07703949};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","S12",100,0,3300);
   Graph_Graph01014->SetMinimum(-8.767613);
   Graph_Graph01014->SetMaximum(2.185572);
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
