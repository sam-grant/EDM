void S0_N_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:31:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.8164,-40359.13,2745.291,373114.1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[11] = {
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
   Double_t Graph0_fy1031[11] = {
   13619,
   104240,
   252645,
   301706,
   222889,
   102262,
   18981,
   1098,
   4200,
   17075,
   5479};
   Double_t Graph0_fex1031[11] = {
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
   Double_t Graph0_fey1031[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S0_",100,219.1321,3025.975);
   Graph_Graph01031->SetMinimum(988.2);
   Graph_Graph01031->SetMaximum(331766.8);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(19,82);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
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
