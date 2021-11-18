void S0_thetaYMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.8164,-36.71121,2745.291,332.6081);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[11] = {
   453.3151,
   656.6728,
   884.0304,
   1123.299,
   1363.41,
   1601.772,
   1825.357,
   2101.201,
   2414.13,
   2640.4,
   2791.653};
   Double_t Graph0_fy1033[11] = {
   248.725,
   268.0226,
   197.2646,
   169.3903,
   152.2368,
   100.7765,
   79.33469,
   49.31616,
   42.88361,
   34.30689,
   27.87435};
   Double_t Graph0_fex1033[11] = {
   0.2793787,
   0.2094921,
   0.1416291,
   0.130435,
   0.1508062,
   0.2151004,
   0.4392332,
   2.531908,
   0.9989019,
   0.5207588,
   0.4189411};
   Double_t Graph0_fey1033[11] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S0_",100,219.1321,3025.975);
   Graph_Graph01033->SetMinimum(0.2207299);
   Graph_Graph01033->SetMaximum(295.6762);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(19,82);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
