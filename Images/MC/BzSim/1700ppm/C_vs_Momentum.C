void C_vs_Momentum()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar  2 07:00:40 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(350,-0.649432,2750,0.05404591);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[17] = {
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
   2350};
   Double_t Graph0_fy1014[17] = {
   -0.4943751,
   -0.4866234,
   -0.422819,
   -0.3439932,
   -0.3922673,
   -0.3382865,
   -0.3075179,
   -0.3251367,
   -0.276377,
   -0.2300819,
   -0.2086288,
   -0.1711611,
   -0.1741418,
   -0.08727361,
   -0.08730115,
   -0.1211141,
   -0.1094976};
   Double_t Graph0_fex1014[17] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1014[17] = {
   0.03781056,
   0.03227469,
   0.02867218,
   0.02665234,
   0.02542292,
   0.02445628,
   0.02368572,
   0.02320634,
   0.02281728,
   0.022355,
   0.02234742,
   0.0225087,
   0.02297906,
   0.02350947,
   0.02410075,
   0.02490449,
   0.02576411};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,590,2510);
   Graph_Graph01014->SetMinimum(-0.5790842);
   Graph_Graph01014->SetMaximum(-0.01630188);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("c [mrad]");
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
