void S18_c_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 14:07:10 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-9.46677,3378.375,1.930639);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[30] = {
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
   Double_t Graph0_fy1015[30] = {
   -6.685348,
   -1.549227,
   -0.2928335,
   -1.844377,
   -1.914424,
   -1.05699,
   -0.375674,
   -0.3265355,
   -0.1749941,
   -0.1998218,
   -0.2828877,
   -0.1959197,
   -0.1397667,
   -0.1275436,
   -0.120719,
   -0.1107986,
   -0.1406829,
   -0.1464054,
   -0.12221,
   -0.08916809,
   -0.0676901,
   -0.09188689,
   -0.09407269,
   -0.08877998,
   -0.1117324,
   -0.04698804,
   -0.07759097,
   -0.1286903,
   -0.05972337,
   -0.07390126};
   Double_t Graph0_fex1015[30] = {
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
   Double_t Graph0_fey1015[30] = {
   0.8818535,
   0.7399233,
   0.323904,
   0.1130448,
   0.06289189,
   0.04798549,
   0.0420587,
   0.03885998,
   0.03645681,
   0.0343125,
   0.03271784,
   0.03129119,
   0.02989964,
   0.02878694,
   0.02778236,
   0.02694322,
   0.02607143,
   0.02549473,
   0.02500771,
   0.0246199,
   0.02445234,
   0.0240903,
   0.02394725,
   0.02388228,
   0.02401844,
   0.02430946,
   0.02467861,
   0.02523809,
   0.02847578,
   0.05906679};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","S18",100,0,3300);
   Graph_Graph01015->SetMinimum(-8.327029);
   Graph_Graph01015->SetMaximum(0.7908977);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01015->GetXaxis()->SetRange(1,91);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
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
