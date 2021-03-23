void S0_c_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 14:07:10 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.190962,3378.375,1.604083);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[30] = {
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
   Double_t Graph0_fy1011[30] = {
   -1.013065,
   -0.03214028,
   0.6369216,
   -1.3659,
   -1.496261,
   -0.8029737,
   -0.1833579,
   -0.03672283,
   -0.003884865,
   0.01450967,
   0.02499794,
   -0.02906791,
   0.001516415,
   -0.03207232,
   0.03324261,
   0.03226632,
   -0.008060425,
   0.01682497,
   -0.02364116,
   -0.005143003,
   -0.01389127,
   0.01004503,
   -0.02953768,
   0.008463948,
   -0.03113325,
   0.03329917,
   -0.03005932,
   0.006461065,
   -0.04577951,
   0.1533726};
   Double_t Graph0_fex1011[30] = {
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
   Double_t Graph0_fey1011[30] = {
   0.5306256,
   0.7722742,
   0.3346537,
   0.1148787,
   0.06219267,
   0.04769856,
   0.04198596,
   0.03879486,
   0.03622545,
   0.03420966,
   0.03242732,
   0.03096575,
   0.02961691,
   0.02845626,
   0.02746408,
   0.02664823,
   0.02583835,
   0.02518907,
   0.02461759,
   0.02428734,
   0.0239617,
   0.02373195,
   0.02352624,
   0.02338552,
   0.02346063,
   0.02354932,
   0.02382756,
   0.02440527,
   0.02680516,
   0.05332554};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","S0",100,0,3300);
   Graph_Graph01011->SetMinimum(-1.811457);
   Graph_Graph01011->SetMaximum(1.224578);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01011->GetXaxis()->SetRange(1,91);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
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
