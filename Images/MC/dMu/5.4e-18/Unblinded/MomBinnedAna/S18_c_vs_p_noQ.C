void S18_c_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 12:42:25 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-9.364087,3378.375,3.45574);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[30] = {
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
   Double_t Graph0_fy1005[30] = {
   -6.55235,
   -0.317934,
   1.052638,
   -1.432059,
   -1.651086,
   -0.8770793,
   -0.369037,
   -0.3234073,
   -0.2229551,
   -0.2397398,
   -0.2591257,
   -0.2404725,
   -0.1324605,
   -0.1346269,
   -0.1071334,
   -0.08517016,
   -0.09273233,
   -0.1050949,
   -0.08993058,
   -0.07613018,
   -0.06896138,
   -0.07872948,
   -0.08155961,
   -0.1037733,
   -0.09619444,
   -0.06374487,
   -0.09680946,
   -0.1028592,
   -0.08232102,
   0.03970055};
   Double_t Graph0_fex1005[30] = {
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
   Double_t Graph0_fey1005[30] = {
   0.675099,
   0.5967542,
   0.2664642,
   0.09663012,
   0.05414208,
   0.04127719,
   0.03592836,
   0.03280511,
   0.03047582,
   0.02843769,
   0.02691005,
   0.0255344,
   0.02421568,
   0.02315432,
   0.02220205,
   0.02142322,
   0.02067514,
   0.02015315,
   0.01976508,
   0.01939904,
   0.01925306,
   0.01903465,
   0.0190097,
   0.01907461,
   0.01924994,
   0.01962243,
   0.02000619,
   0.02087506,
   0.02421289,
   0.05821314};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","S18",100,0,3300);
   Graph_Graph01005->SetMinimum(-8.082104);
   Graph_Graph01005->SetMaximum(2.173757);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01005->GetXaxis()->SetRange(1,91);
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
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
