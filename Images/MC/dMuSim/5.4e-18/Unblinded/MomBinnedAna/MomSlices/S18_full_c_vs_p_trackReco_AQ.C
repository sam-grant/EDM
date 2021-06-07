void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-3.270815,3605.25,1.852092);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1253[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1253[15] = {
   0.2115781,
   -2.254886,
   -1.383486,
   -0.319896,
   -0.2200906,
   -0.261856,
   -0.1377368,
   -0.1909023,
   -0.1338152,
   -0.1190388,
   -0.05325703,
   -0.1131358,
   -0.09857185,
   -0.1309918,
   -0.006189576};
   Double_t Graph0_fex1253[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1253[15] = {
   0.7866961,
   0.1621111,
   0.05570328,
   0.04322965,
   0.03821568,
   0.03533368,
   0.03300677,
   0.03138258,
   0.03039637,
   0.03065589,
   0.03161059,
   0.03393726,
   0.03658499,
   0.03685179,
   0.05200451};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1253,Graph0_fy1253,Graph0_fex1253,Graph0_fey1253);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01253 = new TH1F("Graph_Graph01253","S18",100,0,3300);
   Graph_Graph01253->SetMinimum(-2.758525);
   Graph_Graph01253->SetMaximum(1.339801);
   Graph_Graph01253->SetDirectory(0);
   Graph_Graph01253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01253->SetLineColor(ci);
   Graph_Graph01253->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01253->GetXaxis()->SetRange(0,97);
   Graph_Graph01253->GetXaxis()->CenterTitle(true);
   Graph_Graph01253->GetXaxis()->SetLabelFont(42);
   Graph_Graph01253->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01253->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01253->GetXaxis()->SetTitleFont(42);
   Graph_Graph01253->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01253->GetYaxis()->CenterTitle(true);
   Graph_Graph01253->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01253->GetYaxis()->SetLabelFont(42);
   Graph_Graph01253->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01253->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01253->GetYaxis()->SetTitleFont(42);
   Graph_Graph01253->GetZaxis()->SetLabelFont(42);
   Graph_Graph01253->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01253->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01253);
   
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
