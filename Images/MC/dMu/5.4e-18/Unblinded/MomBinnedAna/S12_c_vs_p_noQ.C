void S12_c_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:27:09 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-11.80791,3378.375,4.613778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[30] = {
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
   Double_t Graph0_fy1013[30] = {
   -8.456255,
   -0.07758791,
   1.607752,
   -1.716832,
   -1.643635,
   -0.9647686,
   -0.6092857,
   -0.5137691,
   -0.4557,
   -0.3596436,
   -0.3049177,
   -0.2473318,
   -0.1872475,
   -0.1887827,
   -0.1954939,
   -0.1418646,
   -0.1637243,
   -0.1031486,
   -0.1526022,
   -0.1330572,
   -0.0892824,
   -0.1135966,
   -0.09160853,
   -0.1267233,
   -0.08445304,
   -0.0784765,
   -0.09845971,
   -0.1204854,
   -0.08486815,
   0.1196109};
   Double_t Graph0_fex1013[30] = {
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
   Double_t Graph0_fey1013[30] = {
   0.6147035,
   0.5893584,
   0.2690785,
   0.09535768,
   0.05386551,
   0.04119803,
   0.03588351,
   0.03277044,
   0.03033945,
   0.0283647,
   0.0267698,
   0.02540897,
   0.02416179,
   0.02304199,
   0.02208184,
   0.021253,
   0.02057912,
   0.02004352,
   0.01954842,
   0.01923831,
   0.01897052,
   0.01887209,
   0.01883852,
   0.01888794,
   0.01903508,
   0.01932211,
   0.01975027,
   0.02047993,
   0.02350508,
   0.0543949};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S12",100,0,3300);
   Graph_Graph01013->SetMinimum(-10.16574);
   Graph_Graph01013->SetMaximum(2.97161);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01013->GetXaxis()->SetRange(1,91);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
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
