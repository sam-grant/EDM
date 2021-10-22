void S0_AEDM_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:27:09 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.557981,3378.375,2.433881);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[30] = {
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
   Double_t Graph0_fy1012[30] = {
   0.3914952,
   -0.8371562,
   -0.4198757,
   0.2034837,
   -0.1558595,
   0.148968,
   0.1418021,
   0.1763353,
   0.204393,
   0.2251633,
   0.1513308,
   0.162668,
   0.1275747,
   0.2247746,
   0.1592494,
   0.1682738,
   0.1379962,
   0.1570295,
   0.1749198,
   0.211819,
   0.1505153,
   0.1312126,
   0.1776943,
   0.1557058,
   0.1054768,
   0.1055147,
   0.061167,
   0.04877534,
   0.05295988,
   -0.01058615};
   Double_t Graph0_fex1012[30] = {
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
   Double_t Graph0_fey1012[30] = {
   1.210409,
   0.8888475,
   0.3889878,
   0.1381131,
   0.07579915,
   0.0581101,
   0.05077274,
   0.04638109,
   0.04281985,
   0.04010731,
   0.03776552,
   0.03575839,
   0.03395123,
   0.03241121,
   0.03103666,
   0.02990232,
   0.02899875,
   0.02805113,
   0.02741587,
   0.02706629,
   0.02667872,
   0.02635588,
   0.02623359,
   0.02621984,
   0.02646491,
   0.02665334,
   0.02706383,
   0.02838077,
   0.03178606,
   0.0709606};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","S0",100,0,3300);
   Graph_Graph01012->SetMinimum(-2.058795);
   Graph_Graph01012->SetMaximum(1.934695);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01012->GetXaxis()->SetRange(1,91);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
